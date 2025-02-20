#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

class IPacketSecurityHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::PacketViolationResponse
    checkForViolation(::MinecraftPacketIds, ::nonstd::expected<void, ::Bedrock::ErrorInfo<::std::error_code>> const&, bool*) = 0;

    // vIndex: 1
    virtual void getTelemetryData(uint&) = 0;

    // vIndex: 2
    virtual ~IPacketSecurityHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
