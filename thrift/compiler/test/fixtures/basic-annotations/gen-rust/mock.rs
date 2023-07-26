// @generated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
// This file is probably not the place you want to edit!

//! Mock definitions for `module`.
//!
//! Client mocks. For every service, a struct mock::TheService that implements
//! client::TheService.
//!
//! As an example of the generated API, for the following thrift service:
//!
//! ```thrift
//! service MyService {
//!     FunctionResponse myFunction(
//!         1: FunctionRequest request,
//!     ) throws {
//!         1: StorageException s,
//!         2: NotFoundException n,
//!     ),
//!
//!     // other functions
//! }
//! ```
//!
//! we would end up with this mock object under crate::mock::MyService:
//!
//! ```
//! # const _: &str = stringify! {
//! impl crate::client::MyService for MyService<'mock> {...}
//!
//! pub struct MyService<'mock> {
//!     pub myFunction: myFunction<'mock>,
//!     // ...
//! }
//!
//! impl dyn crate::client::MyService {
//!     pub fn mock<'mock>() -> MyService<'mock>;
//! }
//!
//! impl myFunction<'mock> {
//!     // directly return the given success response
//!     pub fn ret(&self, value: FunctionResponse);
//!
//!     // invoke closure to compute success response
//!     pub fn mock(
//!         &self,
//!         mock: impl FnMut(FunctionRequest) -> FunctionResponse + Send + Sync + 'mock,
//!     );
//!
//!     // invoke closure to compute response
//!     pub fn mock_result(
//!         &self,
//!         mock: impl FnMut(FunctionRequest) -> Result<FunctionResponse, crate::services::MyService::MyFunctionExn> + Send + Sync + 'mock,
//!     );
//!
//!     // return one of the function's declared exceptions
//!     pub fn throw<E>(&self, exception: E)
//!     where
//!         E: Clone + Into<crate::services::MyService::MyFunctionExn> + Send + Sync + 'mock;
//! }
//!
//! impl From<StorageException> for MyFunctionExn {...}
//! impl From<NotFoundException> for MyFunctionExn {...}
//! # };
//! ```
//!
//! The intended usage from a test would be:
//!
//! ```
//! # const _: &str = stringify! {
//! use std::sync::Arc;
//! use thrift_if::client::MyService;
//!
//! #[test]
//! fn test_my_client() {
//!     let mock = Arc::new(<dyn MyService>::mock());
//!
//!     // directly return a success response
//!     let resp = FunctionResponse {...};
//!     mock.myFunction.ret(resp);
//!
//!     // or give a closure to compute the success response
//!     mock.myFunction.mock(|request| FunctionResponse {...});
//!
//!     // or throw one of the function's exceptions
//!     mock.myFunction.throw(StorageException::ItFailed);
//!
//!     // or compute a Result (useful if your exceptions aren't Clone)
//!     mock.myFunction.mock_result(|request| Err(...));
//!
//!     let out = do_the_thing(mock).wait().unwrap();
//!     assert!(out.what_i_expected());
//! }
//!
//! fn do_the_thing(
//!     client: Arc<dyn MyService + Send + Sync + 'static>,
//! ) -> impl Future<Item = Out> {...}
//! # };
//! ```

pub struct MyService<'mock> {
    pub ping: r#impl::my_service::ping<'mock>,
    pub getRandomData: r#impl::my_service::getRandomData<'mock>,
    pub hasDataById: r#impl::my_service::hasDataById<'mock>,
    pub getDataById: r#impl::my_service::getDataById<'mock>,
    pub putDataById: r#impl::my_service::putDataById<'mock>,
    pub lobDataById: r#impl::my_service::lobDataById<'mock>,
    pub doNothing: r#impl::my_service::doNothing<'mock>,
    _marker: ::std::marker::PhantomData<&'mock ()>,
}

impl dyn super::client::MyService {
    pub fn mock<'mock>() -> MyService<'mock> {
        MyService {
            ping: r#impl::my_service::ping::unimplemented(),
            getRandomData: r#impl::my_service::getRandomData::unimplemented(),
            hasDataById: r#impl::my_service::hasDataById::unimplemented(),
            getDataById: r#impl::my_service::getDataById::unimplemented(),
            putDataById: r#impl::my_service::putDataById::unimplemented(),
            lobDataById: r#impl::my_service::lobDataById::unimplemented(),
            doNothing: r#impl::my_service::doNothing::unimplemented(),
            _marker: ::std::marker::PhantomData,
        }
    }
}

impl<'mock> super::client::MyService for MyService<'mock> {
    fn ping(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::my_service::PingError>> {
        let mut closure = self.ping.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut() -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure()))
    }
    fn getRandomData(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::string::String, crate::errors::my_service::GetRandomDataError>> {
        let mut closure = self.getRandomData.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut() -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure()))
    }
    fn hasDataById(
        &self,
        arg_id: ::std::primitive::i64,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::primitive::bool, crate::errors::my_service::HasDataByIdError>> {
        let mut closure = self.hasDataById.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut(::std::primitive::i64) -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure(arg_id.clone())))
    }
    fn getDataById(
        &self,
        arg_id: ::std::primitive::i64,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::string::String, crate::errors::my_service::GetDataByIdError>> {
        let mut closure = self.getDataById.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut(::std::primitive::i64) -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure(arg_id.clone())))
    }
    fn putDataById(
        &self,
        arg_id: ::std::primitive::i64,
        arg_data: &::std::primitive::str,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::my_service::PutDataByIdError>> {
        let mut closure = self.putDataById.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut(::std::primitive::i64, ::std::string::String) -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure(arg_id.clone(), arg_data.to_owned())))
    }
    fn lobDataById(
        &self,
        arg_id: ::std::primitive::i64,
        arg_data: &::std::primitive::str,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::my_service::LobDataByIdError>> {
        let mut closure = self.lobDataById.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut(::std::primitive::i64, ::std::string::String) -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure(arg_id.clone(), arg_data.to_owned())))
    }
    fn doNothing(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::my_service::DoNothingError>> {
        let mut closure = self.doNothing.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut() -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure()))
    }
}

pub struct MyServicePrioParent<'mock> {
    pub ping: r#impl::my_service_prio_parent::ping<'mock>,
    pub pong: r#impl::my_service_prio_parent::pong<'mock>,
    _marker: ::std::marker::PhantomData<&'mock ()>,
}

impl dyn super::client::MyServicePrioParent {
    pub fn mock<'mock>() -> MyServicePrioParent<'mock> {
        MyServicePrioParent {
            ping: r#impl::my_service_prio_parent::ping::unimplemented(),
            pong: r#impl::my_service_prio_parent::pong::unimplemented(),
            _marker: ::std::marker::PhantomData,
        }
    }
}

impl<'mock> super::client::MyServicePrioParent for MyServicePrioParent<'mock> {
    fn ping(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::my_service_prio_parent::PingError>> {
        let mut closure = self.ping.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut() -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure()))
    }
    fn pong(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::my_service_prio_parent::PongError>> {
        let mut closure = self.pong.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut() -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure()))
    }
}

pub struct MyServicePrioChild<'mock> {
    pub parent: crate::mock::MyServicePrioParent<'mock>,
    pub pang: r#impl::my_service_prio_child::pang<'mock>,
    _marker: ::std::marker::PhantomData<&'mock ()>,
}

impl dyn super::client::MyServicePrioChild {
    pub fn mock<'mock>() -> MyServicePrioChild<'mock> {
        MyServicePrioChild {
            parent: <dyn crate::client::MyServicePrioParent>::mock(),
            pang: r#impl::my_service_prio_child::pang::unimplemented(),
            _marker: ::std::marker::PhantomData,
        }
    }
}

impl<'mock> super::client::MyServicePrioChild for MyServicePrioChild<'mock> {
    fn pang(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<(), crate::errors::my_service_prio_child::PangError>> {
        let mut closure = self.pang.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut() -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure()))
    }
}

#[::async_trait::async_trait]
impl<'mock> ::std::convert::AsRef<dyn crate::client::MyServicePrioParent + 'mock> for MyServicePrioChild<'mock>
{
    fn as_ref(&self) -> &(dyn crate::client::MyServicePrioParent + 'mock) {
        &self.parent
    }
}

pub struct BadService<'mock> {
    pub bar: r#impl::bad_service::bar<'mock>,
    _marker: ::std::marker::PhantomData<&'mock ()>,
}

impl dyn super::client::BadService {
    pub fn mock<'mock>() -> BadService<'mock> {
        BadService {
            bar: r#impl::bad_service::bar::unimplemented(),
            _marker: ::std::marker::PhantomData,
        }
    }
}

impl<'mock> super::client::BadService for BadService<'mock> {

    fn createBadInteraction(
        &self,
    ) -> ::std::result::Result<crate::client::BadInteractionClient, ::anyhow::Error> {
        unimplemented!("Mocking interactions is not yet implemented");
    }
    fn bar(
        &self,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::primitive::i32, crate::errors::bad_service::BarError>> {
        let mut closure = self.bar.closure.lock().unwrap();
        let closure: &mut dyn ::std::ops::FnMut() -> _ = &mut **closure;
        ::std::boxed::Box::pin(::futures::future::ready(closure()))
    }
}

pub mod r#impl {
    pub mod my_service {

        pub struct ping<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut() -> ::std::result::Result<
                    (),
                    crate::errors::my_service::PingError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> ping<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|| panic!(
                        "{}::{} is not mocked",
                        "MyService",
                        "ping",
                    ))),
                }
            }

            pub fn ret(&self, value: ()) {
                self.mock(move || value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut() -> () + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Ok(mock()));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut() -> ::std::result::Result<(), crate::errors::my_service::PingError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || mock());
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::my_service::PingError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Err(exception.clone().into()));
            }
        }

        pub struct getRandomData<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut() -> ::std::result::Result<
                    ::std::string::String,
                    crate::errors::my_service::GetRandomDataError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> getRandomData<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|| panic!(
                        "{}::{} is not mocked",
                        "MyService",
                        "getRandomData",
                    ))),
                }
            }

            pub fn ret(&self, value: ::std::string::String) {
                self.mock(move || value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut() -> ::std::string::String + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Ok(mock()));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut() -> ::std::result::Result<::std::string::String, crate::errors::my_service::GetRandomDataError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || mock());
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::my_service::GetRandomDataError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Err(exception.clone().into()));
            }
        }

        pub struct hasDataById<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut(::std::primitive::i64) -> ::std::result::Result<
                    ::std::primitive::bool,
                    crate::errors::my_service::HasDataByIdError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> hasDataById<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|_: ::std::primitive::i64| panic!(
                        "{}::{} is not mocked",
                        "MyService",
                        "hasDataById",
                    ))),
                }
            }

            pub fn ret(&self, value: ::std::primitive::bool) {
                self.mock(move |_: ::std::primitive::i64| value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut(::std::primitive::i64) -> ::std::primitive::bool + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |id| ::std::result::Result::Ok(mock(id)));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut(::std::primitive::i64) -> ::std::result::Result<::std::primitive::bool, crate::errors::my_service::HasDataByIdError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |id| mock(id));
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::my_service::HasDataByIdError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |_: ::std::primitive::i64| ::std::result::Result::Err(exception.clone().into()));
            }
        }

        pub struct getDataById<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut(::std::primitive::i64) -> ::std::result::Result<
                    ::std::string::String,
                    crate::errors::my_service::GetDataByIdError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> getDataById<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|_: ::std::primitive::i64| panic!(
                        "{}::{} is not mocked",
                        "MyService",
                        "getDataById",
                    ))),
                }
            }

            pub fn ret(&self, value: ::std::string::String) {
                self.mock(move |_: ::std::primitive::i64| value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut(::std::primitive::i64) -> ::std::string::String + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |id| ::std::result::Result::Ok(mock(id)));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut(::std::primitive::i64) -> ::std::result::Result<::std::string::String, crate::errors::my_service::GetDataByIdError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |id| mock(id));
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::my_service::GetDataByIdError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |_: ::std::primitive::i64| ::std::result::Result::Err(exception.clone().into()));
            }
        }

        pub struct putDataById<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut(::std::primitive::i64, ::std::string::String) -> ::std::result::Result<
                    (),
                    crate::errors::my_service::PutDataByIdError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> putDataById<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|_: ::std::primitive::i64, _: ::std::string::String| panic!(
                        "{}::{} is not mocked",
                        "MyService",
                        "putDataById",
                    ))),
                }
            }

            pub fn ret(&self, value: ()) {
                self.mock(move |_: ::std::primitive::i64, _: ::std::string::String| value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut(::std::primitive::i64, ::std::string::String) -> () + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |id, data| ::std::result::Result::Ok(mock(id, data)));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut(::std::primitive::i64, ::std::string::String) -> ::std::result::Result<(), crate::errors::my_service::PutDataByIdError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |id, data| mock(id, data));
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::my_service::PutDataByIdError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |_: ::std::primitive::i64, _: ::std::string::String| ::std::result::Result::Err(exception.clone().into()));
            }
        }

        pub struct lobDataById<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut(::std::primitive::i64, ::std::string::String) -> ::std::result::Result<
                    (),
                    crate::errors::my_service::LobDataByIdError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> lobDataById<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|_: ::std::primitive::i64, _: ::std::string::String| panic!(
                        "{}::{} is not mocked",
                        "MyService",
                        "lobDataById",
                    ))),
                }
            }

            pub fn ret(&self, value: ()) {
                self.mock(move |_: ::std::primitive::i64, _: ::std::string::String| value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut(::std::primitive::i64, ::std::string::String) -> () + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |id, data| ::std::result::Result::Ok(mock(id, data)));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut(::std::primitive::i64, ::std::string::String) -> ::std::result::Result<(), crate::errors::my_service::LobDataByIdError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |id, data| mock(id, data));
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::my_service::LobDataByIdError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move |_: ::std::primitive::i64, _: ::std::string::String| ::std::result::Result::Err(exception.clone().into()));
            }
        }

        pub struct doNothing<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut() -> ::std::result::Result<
                    (),
                    crate::errors::my_service::DoNothingError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> doNothing<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|| panic!(
                        "{}::{} is not mocked",
                        "MyService",
                        "doNothing",
                    ))),
                }
            }

            pub fn ret(&self, value: ()) {
                self.mock(move || value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut() -> () + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Ok(mock()));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut() -> ::std::result::Result<(), crate::errors::my_service::DoNothingError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || mock());
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::my_service::DoNothingError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Err(exception.clone().into()));
            }
        }
    }
    pub mod my_service_prio_parent {

        pub struct ping<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut() -> ::std::result::Result<
                    (),
                    crate::errors::my_service_prio_parent::PingError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> ping<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|| panic!(
                        "{}::{} is not mocked",
                        "MyServicePrioParent",
                        "ping",
                    ))),
                }
            }

            pub fn ret(&self, value: ()) {
                self.mock(move || value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut() -> () + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Ok(mock()));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut() -> ::std::result::Result<(), crate::errors::my_service_prio_parent::PingError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || mock());
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::my_service_prio_parent::PingError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Err(exception.clone().into()));
            }
        }

        pub struct pong<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut() -> ::std::result::Result<
                    (),
                    crate::errors::my_service_prio_parent::PongError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> pong<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|| panic!(
                        "{}::{} is not mocked",
                        "MyServicePrioParent",
                        "pong",
                    ))),
                }
            }

            pub fn ret(&self, value: ()) {
                self.mock(move || value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut() -> () + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Ok(mock()));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut() -> ::std::result::Result<(), crate::errors::my_service_prio_parent::PongError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || mock());
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::my_service_prio_parent::PongError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Err(exception.clone().into()));
            }
        }
    }
    pub mod my_service_prio_child {

        pub struct pang<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut() -> ::std::result::Result<
                    (),
                    crate::errors::my_service_prio_child::PangError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> pang<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|| panic!(
                        "{}::{} is not mocked",
                        "MyServicePrioChild",
                        "pang",
                    ))),
                }
            }

            pub fn ret(&self, value: ()) {
                self.mock(move || value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut() -> () + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Ok(mock()));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut() -> ::std::result::Result<(), crate::errors::my_service_prio_child::PangError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || mock());
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::my_service_prio_child::PangError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Err(exception.clone().into()));
            }
        }
    }
    pub mod bad_service {


        pub struct bar<'mock> {
            pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                dyn ::std::ops::FnMut() -> ::std::result::Result<
                    ::std::primitive::i32,
                    crate::errors::bad_service::BarError,
                > + ::std::marker::Send + ::std::marker::Sync + 'mock,
            >>,
        }

        #[allow(clippy::redundant_closure)]
        impl<'mock> bar<'mock> {
            pub(crate) fn unimplemented() -> Self {
                Self {
                    closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|| panic!(
                        "{}::{} is not mocked",
                        "BadService",
                        "bar",
                    ))),
                }
            }

            pub fn ret(&self, value: ::std::primitive::i32) {
                self.mock(move || value.clone());
            }

            pub fn mock(&self, mut mock: impl ::std::ops::FnMut() -> ::std::primitive::i32 + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Ok(mock()));
            }

            pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut() -> ::std::result::Result<::std::primitive::i32, crate::errors::bad_service::BarError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || mock());
            }

            pub fn throw<E>(&self, exception: E)
            where
                E: ::std::convert::Into<crate::errors::bad_service::BarError>,
                E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
            {
                let mut closure = self.closure.lock().unwrap();
                *closure = ::std::boxed::Box::new(move || ::std::result::Result::Err(exception.clone().into()));
            }
        }
    }
}
