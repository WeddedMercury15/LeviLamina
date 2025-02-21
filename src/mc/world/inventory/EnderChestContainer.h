#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class ChestBlockActor;
class Player;
// clang-format on

class EnderChestContainer : public ::FillingContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChestBlockActor*> activeChest;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Connector<void()>* getContainerRemovedConnector() /*override*/;

    // vIndex: 6
    virtual bool hasRemovedSubscribers() const /*override*/;

    // vIndex: 0
    virtual ~EnderChestContainer() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $startOpen(::Player& player);

    MCAPI void $stopOpen(::Player& player);

    MCAPI ::Bedrock::PubSub::Connector<void()>* $getContainerRemovedConnector();

    MCAPI bool $hasRemovedSubscribers() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
