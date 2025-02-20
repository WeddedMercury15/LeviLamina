#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BasePressurePlateBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ItemInstance;
// clang-format on

class WeightedPressurePlateBlock : public ::BasePressurePlateBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const> mMaxWeight;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 150
    virtual int getTickDelay() const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 151
    virtual int getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 152
    virtual int getSignalForData(int data) const /*override*/;

    // vIndex: 153
    virtual int getRedstoneSignal(int signal) const /*override*/;

    // vIndex: 0
    virtual ~WeightedPressurePlateBlock() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getTickDelay() const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI int $getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD int $getSignalForData(int data) const;

    MCFOLD int $getRedstoneSignal(int signal) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
