#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct DynamicRenderOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mCurrentOffset;
    ::ll::TypedStorage<4, 12, ::Vec3> mPreviousOffset;
    // NOLINTEND
};
