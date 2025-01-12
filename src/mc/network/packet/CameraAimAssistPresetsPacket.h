#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CameraAimAssistDataRegistryComponent;
class ReadOnlyBinaryStream;
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoriesDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetDefinition; }
// clang-format on

class CameraAimAssistPresetsPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition>>     mPresets;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistCategoriesDefinition>> mCategories;
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

    // vIndex: 5
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& bitStream) /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~CameraAimAssistPresetsPacket() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CameraAimAssistPresetsPacket
    makePacketFromRegistry(::CameraAimAssistDataRegistryComponent const& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& bitStream);

    MCFOLD ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
