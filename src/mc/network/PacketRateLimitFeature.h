#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PacketRateLimitFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk49ad54;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketRateLimitFeature& operator=(PacketRateLimitFeature const&);
    PacketRateLimitFeature(PacketRateLimitFeature const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacketRateLimitFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
