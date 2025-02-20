#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"

// auto generated forward declare list
// clang-format off
class BlockGameplayHandler;
struct BlockTryDestroyByPlayerEvent;
struct BlockTryPlaceByPlayerEvent;
struct ExplosionStartedEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptBlockGameplayHandler : public ::EventHandlerDispatcher<::BlockGameplayHandler>,
                                   public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::ExplosionStartedEvent& explosionStartedEvent
    ) /*override*/;

    // vIndex: 5
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::BlockTryDestroyByPlayerEvent& eventData
    ) /*override*/;

    // vIndex: 8
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::BlockTryPlaceByPlayerEvent const& eventData
    ) /*override*/;

    // vIndex: 0
    virtual ~ScriptBlockGameplayHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _handleBlockTryDestroyByPlayerEvent(
        ::BlockTryDestroyByPlayerEvent&                                                   eventData,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;

    MCAPI bool _handleBlockTryPlaceByPlayerEvent(
        ::BlockTryPlaceByPlayerEvent const&                                               eventData,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;

    MCAPI bool _handleExplosionStartedEvent(
        ::ExplosionStartedEvent&                                                          explosionStartedEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> scriptLevelEventsHandle
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ExplosionStartedEvent& explosionStartedEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::BlockTryDestroyByPlayerEvent& eventData);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::BlockTryPlaceByPlayerEvent const& eventData);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
