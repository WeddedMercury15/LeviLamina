#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/SchemaReader.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class PropertyReader; }
// clang-format on

namespace cereal {

class JSONCppSchemaReaderBase : public ::cereal::SchemaReader {
public:
    // JSONCppSchemaReaderBase inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // JSONCppSchemaReaderBase inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnke8c05a;
        ::ll::UntypedStorage<8, 16> mUnka2d671;
        // NOLINTEND

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9a5294;
    ::ll::UntypedStorage<8, 16> mUnk92aa2c;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONCppSchemaReaderBase& operator=(JSONCppSchemaReaderBase const&);
    JSONCppSchemaReaderBase(JSONCppSchemaReaderBase const&);
    JSONCppSchemaReaderBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isValid() const /*override*/;

    // vIndex: 2
    virtual bool isObject() const /*override*/;

    // vIndex: 3
    virtual bool isArray() const /*override*/;

    // vIndex: 4
    virtual bool isNull() const /*override*/;

    // vIndex: 5
    virtual ::Bedrock::Result<bool> asBool(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 6
    virtual ::Bedrock::Result<schar> asInt8(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 7
    virtual ::Bedrock::Result<uchar> asUInt8(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<short> asInt16(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 9
    virtual ::Bedrock::Result<ushort> asUInt16(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 10
    virtual ::Bedrock::Result<int> asInt32(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 11
    virtual ::Bedrock::Result<uint> asUInt32(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 12
    virtual ::Bedrock::Result<int64> asInt64(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 13
    virtual ::Bedrock::Result<uint64> asUInt64(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 14
    virtual ::Bedrock::Result<float> asFloat(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<double> asDouble(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 16
    virtual ::Bedrock::Result<::std::string> asString(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 17
    virtual uint64 members() /*override*/;

    // vIndex: 18
    virtual uint64 length() /*override*/;

    // vIndex: 19
    virtual bool pushMember(::std::string_view const name, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 20
    virtual ::std::string_view pushNextMember(::cereal::PropertyReader const&) /*override*/;

    // vIndex: 21
    virtual void pushElement(uint64 index, ::cereal::PropertyReader const&) /*override*/;

    // vIndex: 22
    virtual void pop() /*override*/;

    // vIndex: 24
    virtual bool _allowAsBool() = 0;

    // vIndex: 25
    virtual bool _allowAsInt8() = 0;

    // vIndex: 26
    virtual bool _allowAsUInt8() = 0;

    // vIndex: 27
    virtual bool _allowAsInt16() = 0;

    // vIndex: 28
    virtual bool _allowAsUInt16() = 0;

    // vIndex: 29
    virtual bool _allowAsInt32() = 0;

    // vIndex: 30
    virtual bool _allowAsUInt32() = 0;

    // vIndex: 31
    virtual bool _allowAsInt64() = 0;

    // vIndex: 32
    virtual bool _allowAsUInt64() = 0;

    // vIndex: 33
    virtual bool _allowAsFloat() = 0;

    // vIndex: 34
    virtual bool _allowAsDouble() = 0;

    // vIndex: 0
    virtual ~JSONCppSchemaReaderBase() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValid() const;

    MCAPI bool $isObject() const;

    MCAPI bool $isArray() const;

    MCAPI bool $isNull() const;

    MCAPI ::Bedrock::Result<bool> $asBool(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<schar> $asInt8(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<uchar> $asUInt8(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<short> $asInt16(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<ushort> $asUInt16(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<int> $asInt32(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<uint> $asUInt32(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<int64> $asInt64(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<uint64> $asUInt64(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<float> $asFloat(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<double> $asDouble(::cereal::PropertyReader const&);

    MCAPI ::Bedrock::Result<::std::string> $asString(::cereal::PropertyReader const&);

    MCFOLD uint64 $members();

    MCFOLD uint64 $length();

    MCAPI bool $pushMember(::std::string_view const name, ::cereal::PropertyReader const&);

    MCAPI ::std::string_view $pushNextMember(::cereal::PropertyReader const&);

    MCAPI void $pushElement(uint64 index, ::cereal::PropertyReader const&);

    MCFOLD void $pop();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
