#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorRuntimeID.h"
#include "mc/network/packet/PlayerInputTick.h"
#include "mc/world/actor/DataItem.h"
#include "mc/world/actor/state/PropertySyncData.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class DataItem;
class PropertyComponent;
class ReadOnlyBinaryStream;
class SynchedActorDataEntityWrapper;
struct PlayerInputTick;
struct PropertySyncData;
// clang-format on

class SetActorDataPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ActorRuntimeID                             mId;
    ::std::vector<::std::unique_ptr<::DataItem>> mPackedItems;
    ::PropertySyncData                           mSynchedProperties;
    ::PlayerInputTick                            mTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetActorDataPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetActorDataPacket(
        ::ActorRuntimeID                 id,
        ::SynchedActorDataEntityWrapper& entityData,
        ::PropertyComponent*             propertyComponent,
        uint64                           tick,
        bool                             packAll
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorRuntimeID                 id,
        ::SynchedActorDataEntityWrapper& entityData,
        ::PropertyComponent*             propertyComponent,
        uint64                           tick,
        bool                             packAll
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
