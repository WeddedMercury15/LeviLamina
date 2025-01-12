#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace ValueProviders {

struct UniformFloat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaa6d7f;
    ::ll::UntypedStorage<4, 4> mUnke8f3d9;
    // NOLINTEND

public:
    // prevent constructor by default
    UniformFloat& operator=(UniformFloat const&);
    UniformFloat(UniformFloat const&);
    UniformFloat();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD float generateNext(::Random& random) const;
    // NOLINTEND
};

} // namespace ValueProviders
