/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/compiler/generate/t_generator.h>

#include <stdexcept>
#include <utility>

#include <boost/algorithm/string/split.hpp>
#include <boost/filesystem.hpp>
#include <fmt/core.h>

namespace apache {
namespace thrift {
namespace compiler {

t_generation_context::t_generation_context(
    std::string out_path, bool is_out_path_absolute, source_manager* sm)
    : out_path_(std::move(out_path)),
      is_out_path_absolute_(is_out_path_absolute),
      source_mgr_(sm) {
  boost::filesystem::path path = {out_path_};
  if (!out_path_.empty()) {
    if (!(out_path_.back() == '/' || out_path_.back() == '\\')) {
      path += boost::filesystem::path::preferred_separator;
    }
  }
  out_path_ = path.make_preferred().string();
}

t_generator::t_generator(t_program* program, t_generation_context context)
    : program_(program), context_(std::move(context)) {
  program_name_ = get_program_name(program_);
}

void t_generator_registry::register_generator(t_generator_factory* factory) {
  std::string name = factory->get_short_name();
  if (!get_generator_map().insert(std::make_pair(name, factory)).second) {
    throw std::logic_error(
        fmt::format("duplicate generator for language \"{}\"", name));
  }
}

t_generator* t_generator_registry::get_generator(
    const std::string& language,
    t_program* program,
    t_generation_context context,
    const std::map<std::string, std::string>& options) {
  gen_map_t& map = get_generator_map();
  auto iter = map.find(language);
  return iter != map.end()
      ? iter->second->get_generator(program, std::move(context), options)
      : nullptr;
}

t_generator_registry::gen_map_t& t_generator_registry::get_generator_map() {
  // http://www.parashift.com/c++-faq-lite/ctors.html#faq-10.12
  static gen_map_t* the_map = new gen_map_t();
  return *the_map;
}

t_generator_factory::t_generator_factory(
    std::string short_name, std::string long_name, std::string documentation)
    : short_name_(std::move(short_name)),
      long_name_(std::move(long_name)),
      documentation_(std::move(documentation)) {
  t_generator_registry::register_generator(this);
}

} // namespace compiler
} // namespace thrift
} // namespace apache
