#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class DespawnComponent;
class EntityRegistry;
// clang-format on

class DespawnSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~DespawnSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickComponent(::ActorOwnerComponent& actorOwnerComponent, ::DespawnComponent& despawnComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
