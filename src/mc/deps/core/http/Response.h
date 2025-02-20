#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Status; }
// clang-format on

namespace Bedrock::Http {

class Response {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk54228d;
    ::ll::UntypedStorage<8, 16> mUnk10ece4;
    ::ll::UntypedStorage<8, 24> mUnk1ee116;
    // NOLINTEND

public:
    // prevent constructor by default
    Response& operator=(Response const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Response();

    MCAPI Response(::Bedrock::Http::Response const&);

    MCAPI explicit Response(::Bedrock::Http::Status status);

    MCAPI ::gsl::span<uchar const> getBodyAsBytes() const;

    MCAPI ~Response();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Bedrock::Http::Response const&);

    MCAPI void* $ctor(::Bedrock::Http::Status status);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
