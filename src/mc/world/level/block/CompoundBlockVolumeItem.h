#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CompoundBlockVolumeAction.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
class SimpleBlockVolume;
// clang-format on

class CompoundBlockVolumeItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CompoundBlockVolumeAction>             mAction;
    ::ll::TypedStorage<4, 4, ::CompoundBlockVolumePositionRelativity> mRelativity;
    ::ll::TypedStorage<4, 32, ::SimpleBlockVolume>                    mVolume;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string toString() const;

    MCAPI ~CompoundBlockVolumeItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
