// @generated by Thrift for thrift/compiler/test/fixtures/exceptions/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift service definitions for `module`.


/// Service definitions for `Raiser`.
pub mod raiser {
    #[derive(Clone, Debug)]
    pub enum DoBlandExn {
        #[doc(hidden)]
        Success(()),
        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<crate::errors::raiser::DoBlandError> for DoBlandExn {
        fn from(err: crate::errors::raiser::DoBlandError) -> Self {
            match err {
                crate::errors::raiser::DoBlandError::ApplicationException(aexn) => DoBlandExn::ApplicationException(aexn),
                crate::errors::raiser::DoBlandError::ThriftError(err) => DoBlandExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for DoBlandExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for DoBlandExn {
        fn exn_name(&self) -> &'static str {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_name called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_value called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_is_declared called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for DoBlandExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::Success(_) => ::fbthrift::ResultType::Return,
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::GetTType for DoBlandExn {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for DoBlandExn
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            if let Self::ApplicationException(aexn) = self {
                return aexn.write(p);
            }
            p.write_struct_begin("DoBland");
            match self {
                Self::Success(inner) => {
                    p.write_field_begin(
                        "Success",
                        ::fbthrift::TType::Void,
                        0i16,
                    );
                    inner.write(p);
                    p.write_field_end();
                }
                Self::ApplicationException(_aexn) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for DoBlandExn
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::Void, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = Self::Success(());
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::Void, 0i32), false) => {
                        once = true;
                        alt = Self::Success(::fbthrift::Deserialize::read(p)?);
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "DoBlandExn",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(alt)
        }
    }

    #[derive(Clone, Debug)]
    pub enum DoRaiseExn {
        #[doc(hidden)]
        Success(()),
        b(crate::types::Banal),
        f(crate::types::Fiery),
        s(crate::types::Serious),
        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<crate::types::Banal> for DoRaiseExn {
        fn from(exn: crate::types::Banal) -> Self {
            Self::b(exn)
        }
    }

    impl ::std::convert::From<crate::types::Fiery> for DoRaiseExn {
        fn from(exn: crate::types::Fiery) -> Self {
            Self::f(exn)
        }
    }

    impl ::std::convert::From<crate::types::Serious> for DoRaiseExn {
        fn from(exn: crate::types::Serious) -> Self {
            Self::s(exn)
        }
    }

    impl ::std::convert::From<crate::errors::raiser::DoRaiseError> for DoRaiseExn {
        fn from(err: crate::errors::raiser::DoRaiseError) -> Self {
            match err {
                crate::errors::raiser::DoRaiseError::b(err) => DoRaiseExn::b(err),
                crate::errors::raiser::DoRaiseError::f(err) => DoRaiseExn::f(err),
                crate::errors::raiser::DoRaiseError::s(err) => DoRaiseExn::s(err),
                crate::errors::raiser::DoRaiseError::ApplicationException(aexn) => DoRaiseExn::ApplicationException(aexn),
                crate::errors::raiser::DoRaiseError::ThriftError(err) => DoRaiseExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for DoRaiseExn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for DoRaiseExn {
        fn exn_name(&self) -> &'static str {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_name called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_name(),
                Self::b(exn) => exn.exn_name(),
                Self::f(exn) => exn.exn_name(),
                Self::s(exn) => exn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_value called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_value(),
                Self::b(exn) => exn.exn_value(),
                Self::f(exn) => exn.exn_value(),
                Self::s(exn) => exn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_is_declared called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
                Self::b(exn) => exn.exn_is_declared(),
                Self::f(exn) => exn.exn_is_declared(),
                Self::s(exn) => exn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for DoRaiseExn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::Success(_) => ::fbthrift::ResultType::Return,
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
                Self::b(_exn) => fbthrift::ResultType::Error,
                Self::f(_exn) => fbthrift::ResultType::Error,
                Self::s(_exn) => fbthrift::ResultType::Error,
            }
        }
    }

    impl ::fbthrift::GetTType for DoRaiseExn {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for DoRaiseExn
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            if let Self::ApplicationException(aexn) = self {
                return aexn.write(p);
            }
            p.write_struct_begin("DoRaise");
            match self {
                Self::Success(inner) => {
                    p.write_field_begin(
                        "Success",
                        ::fbthrift::TType::Void,
                        0i16,
                    );
                    inner.write(p);
                    p.write_field_end();
                }
                Self::b(inner) => {
                    p.write_field_begin(
                        "b",
                        ::fbthrift::TType::Struct,
                        1,
                    );
                    inner.write(p);
                    p.write_field_end();
                }
                Self::f(inner) => {
                    p.write_field_begin(
                        "f",
                        ::fbthrift::TType::Struct,
                        2,
                    );
                    inner.write(p);
                    p.write_field_end();
                }
                Self::s(inner) => {
                    p.write_field_begin(
                        "s",
                        ::fbthrift::TType::Struct,
                        3,
                    );
                    inner.write(p);
                    p.write_field_end();
                }
                Self::ApplicationException(_aexn) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for DoRaiseExn
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::Void, 0),
                ::fbthrift::Field::new("b", ::fbthrift::TType::Struct, 1),
                ::fbthrift::Field::new("f", ::fbthrift::TType::Struct, 2),
                ::fbthrift::Field::new("s", ::fbthrift::TType::Struct, 3),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = Self::Success(());
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::Void, 0i32), false) => {
                        once = true;
                        alt = Self::Success(::fbthrift::Deserialize::read(p)?);
                    }
                    ((::fbthrift::TType::Struct, 1), false) => {
                        once = true;
                        alt = Self::b(::fbthrift::Deserialize::read(p)?);
                    }
                    ((::fbthrift::TType::Struct, 2), false) => {
                        once = true;
                        alt = Self::f(::fbthrift::Deserialize::read(p)?);
                    }
                    ((::fbthrift::TType::Struct, 3), false) => {
                        once = true;
                        alt = Self::s(::fbthrift::Deserialize::read(p)?);
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "DoRaiseExn",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(alt)
        }
    }

    #[derive(Clone, Debug)]
    pub enum Get200Exn {
        #[doc(hidden)]
        Success(::std::string::String),
        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<crate::errors::raiser::Get200Error> for Get200Exn {
        fn from(err: crate::errors::raiser::Get200Error) -> Self {
            match err {
                crate::errors::raiser::Get200Error::ApplicationException(aexn) => Get200Exn::ApplicationException(aexn),
                crate::errors::raiser::Get200Error::ThriftError(err) => Get200Exn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for Get200Exn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for Get200Exn {
        fn exn_name(&self) -> &'static str {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_name called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_value called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_is_declared called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for Get200Exn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::Success(_) => ::fbthrift::ResultType::Return,
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
            }
        }
    }

    impl ::fbthrift::GetTType for Get200Exn {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for Get200Exn
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            if let Self::ApplicationException(aexn) = self {
                return aexn.write(p);
            }
            p.write_struct_begin("Get200");
            match self {
                Self::Success(inner) => {
                    p.write_field_begin(
                        "Success",
                        ::fbthrift::TType::String,
                        0i16,
                    );
                    inner.write(p);
                    p.write_field_end();
                }
                Self::ApplicationException(_aexn) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for Get200Exn
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::String, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::option::Option::None;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::String, 0i32), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(Self::Success(::fbthrift::Deserialize::read(p)?));
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "Get200Exn",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            alt.ok_or_else(||
                ::fbthrift::ApplicationException::new(
                    ::fbthrift::ApplicationExceptionErrorCode::MissingResult,
                    format!("Empty union {}", "Get200Exn"),
                )
                .into(),
            )
        }
    }

    #[derive(Clone, Debug)]
    pub enum Get500Exn {
        #[doc(hidden)]
        Success(::std::string::String),
        f(crate::types::Fiery),
        b(crate::types::Banal),
        s(crate::types::Serious),
        ApplicationException(::fbthrift::ApplicationException),
    }

    impl ::std::convert::From<crate::types::Fiery> for Get500Exn {
        fn from(exn: crate::types::Fiery) -> Self {
            Self::f(exn)
        }
    }

    impl ::std::convert::From<crate::types::Banal> for Get500Exn {
        fn from(exn: crate::types::Banal) -> Self {
            Self::b(exn)
        }
    }

    impl ::std::convert::From<crate::types::Serious> for Get500Exn {
        fn from(exn: crate::types::Serious) -> Self {
            Self::s(exn)
        }
    }

    impl ::std::convert::From<crate::errors::raiser::Get500Error> for Get500Exn {
        fn from(err: crate::errors::raiser::Get500Error) -> Self {
            match err {
                crate::errors::raiser::Get500Error::f(err) => Get500Exn::f(err),
                crate::errors::raiser::Get500Error::b(err) => Get500Exn::b(err),
                crate::errors::raiser::Get500Error::s(err) => Get500Exn::s(err),
                crate::errors::raiser::Get500Error::ApplicationException(aexn) => Get500Exn::ApplicationException(aexn),
                crate::errors::raiser::Get500Error::ThriftError(err) => Get500Exn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for Get500Exn {
        fn from(exn: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(exn)
        }
    }

    impl ::fbthrift::ExceptionInfo for Get500Exn {
        fn exn_name(&self) -> &'static str {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_name called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_name(),
                Self::f(exn) => exn.exn_name(),
                Self::b(exn) => exn.exn_name(),
                Self::s(exn) => exn.exn_name(),
            }
        }

        fn exn_value(&self) -> String {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_value called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_value(),
                Self::f(exn) => exn.exn_value(),
                Self::b(exn) => exn.exn_value(),
                Self::s(exn) => exn.exn_value(),
            }
        }

        fn exn_is_declared(&self) -> bool {
            match self {
                Self::Success(_) => panic!("ExceptionInfo::exn_is_declared called on Success"),
                Self::ApplicationException(aexn) => aexn.exn_is_declared(),
                Self::f(exn) => exn.exn_is_declared(),
                Self::b(exn) => exn.exn_is_declared(),
                Self::s(exn) => exn.exn_is_declared(),
            }
        }
    }

    impl ::fbthrift::ResultInfo for Get500Exn {
        fn result_type(&self) -> ::fbthrift::ResultType {
            match self {
                Self::Success(_) => ::fbthrift::ResultType::Return,
                Self::ApplicationException(_aexn) => ::fbthrift::ResultType::Exception,
                Self::f(_exn) => fbthrift::ResultType::Error,
                Self::b(_exn) => fbthrift::ResultType::Error,
                Self::s(_exn) => fbthrift::ResultType::Error,
            }
        }
    }

    impl ::fbthrift::GetTType for Get500Exn {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for Get500Exn
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            if let Self::ApplicationException(aexn) = self {
                return aexn.write(p);
            }
            p.write_struct_begin("Get500");
            match self {
                Self::Success(inner) => {
                    p.write_field_begin(
                        "Success",
                        ::fbthrift::TType::String,
                        0i16,
                    );
                    inner.write(p);
                    p.write_field_end();
                }
                Self::f(inner) => {
                    p.write_field_begin(
                        "f",
                        ::fbthrift::TType::Struct,
                        1,
                    );
                    inner.write(p);
                    p.write_field_end();
                }
                Self::b(inner) => {
                    p.write_field_begin(
                        "b",
                        ::fbthrift::TType::Struct,
                        2,
                    );
                    inner.write(p);
                    p.write_field_end();
                }
                Self::s(inner) => {
                    p.write_field_begin(
                        "s",
                        ::fbthrift::TType::Struct,
                        3,
                    );
                    inner.write(p);
                    p.write_field_end();
                }
                Self::ApplicationException(_aexn) => unreachable!(),
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for Get500Exn
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::String, 0),
                ::fbthrift::Field::new("b", ::fbthrift::TType::Struct, 2),
                ::fbthrift::Field::new("f", ::fbthrift::TType::Struct, 1),
                ::fbthrift::Field::new("s", ::fbthrift::TType::Struct, 3),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::option::Option::None;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::String, 0i32), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(Self::Success(::fbthrift::Deserialize::read(p)?));
                    }
                    ((::fbthrift::TType::Struct, 1), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(Self::f(::fbthrift::Deserialize::read(p)?));
                    }
                    ((::fbthrift::TType::Struct, 2), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(Self::b(::fbthrift::Deserialize::read(p)?));
                    }
                    ((::fbthrift::TType::Struct, 3), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(Self::s(::fbthrift::Deserialize::read(p)?));
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "Get500Exn",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            alt.ok_or_else(||
                ::fbthrift::ApplicationException::new(
                    ::fbthrift::ApplicationExceptionErrorCode::MissingResult,
                    format!("Empty union {}", "Get500Exn"),
                )
                .into(),
            )
        }
    }
}
