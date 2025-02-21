#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Mob;
// clang-format on

class OpenDoorAnnotationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::queue<::BlockPos, ::std::deque<::BlockPos>>> mPassedDoorPositions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _cleanUp(::Mob& mob);

    MCAPI void checkPath(::Mob& mob);
    // NOLINTEND
};
