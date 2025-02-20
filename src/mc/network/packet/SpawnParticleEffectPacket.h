#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class MolangVariableMap;
class ReadOnlyBinaryStream;
class Vec3;
struct ActorUniqueID;
// clang-format on

class SpawnParticleEffectPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                 mVanillaDimensionId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                       mActorId;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPos;
    ::ll::TypedStorage<8, 32, ::std::string>                        mEffectName;
    ::ll::TypedStorage<8, 64, ::std::optional<::MolangVariableMap>> mMolangVariables;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~SpawnParticleEffectPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnParticleEffectPacket(
        ::Vec3 const&                        pos,
        ::std::string const&                 name,
        uchar                                vanillaDimensionId,
        ::std::optional<::MolangVariableMap> molangVariables
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Vec3 const&                        pos,
        ::std::string const&                 name,
        uchar                                vanillaDimensionId,
        ::std::optional<::MolangVariableMap> molangVariables
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
