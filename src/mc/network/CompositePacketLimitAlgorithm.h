#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketLimitAlgorithm.h"
#include "mc/network/MinecraftPacketIds.h"

class CompositePacketLimitAlgorithm : public ::IPacketLimitAlgorithm {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6c2121;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositePacketLimitAlgorithm& operator=(CompositePacketLimitAlgorithm const&);
    CompositePacketLimitAlgorithm(CompositePacketLimitAlgorithm const&);
    CompositePacketLimitAlgorithm();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual uint checkPacket(::MinecraftPacketIds packet) /*override*/;

    // vIndex: 1
    virtual ~CompositePacketLimitAlgorithm() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint $checkPacket(::MinecraftPacketIds packet);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
