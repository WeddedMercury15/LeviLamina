#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAsyncEventMetadata.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemAfterEvents
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptSystemAfterEvents> {
public:
    // ScriptSystemAfterEvents inner types declare
    // clang-format off
    class ScriptSystemAfterEventsDeferredEventListener;
    struct SignalNameSubscriberCount;
    // clang-format on

    // ScriptSystemAfterEvents inner types define
    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk27ca05;
        ::ll::UntypedStorage<8, 8>  mUnkd3521c;
        // NOLINTEND

    public:
        // prevent constructor by default
        SignalNameSubscriberCount& operator=(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SignalNameSubscriberCount();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    class ScriptSystemAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::ScriptModuleMinecraft::ScriptSystemAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 3
        virtual void onFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;

        // vIndex: 0
        virtual ~ScriptSystemAfterEventsDeferredEventListener() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb3d6fc;
    ::ll::UntypedStorage<8, 16> mUnkb9210e;
    ::ll::UntypedStorage<8, 8>  mUnk896b0b;
    ::ll::UntypedStorage<8, 8>  mUnkb7a2f6;
    ::ll::UntypedStorage<8, 8>  mUnk316bc2;
    ::ll::UntypedStorage<8, 56> mUnk470b9c;
    ::ll::UntypedStorage<8, 24> mUnk85e387;
    ::ll::UntypedStorage<8, 8>  mUnk2f36a3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystemAfterEvents& operator=(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSystemAfterEvents(::ScriptModuleMinecraft::ScriptSystemAfterEvents&&);

    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptSystemAfterEvents::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;

    MCAPI ::ScriptModuleMinecraft::ScriptSystemAfterEvents&
    operator=(::ScriptModuleMinecraft::ScriptSystemAfterEvents&&);

    MCAPI void registerListener(
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents> handle,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&                             listeners
    );

    MCAPI ~ScriptSystemAfterEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static ::ScriptModuleMinecraft::ScriptAsyncEventMetadata<
        ::ScriptModuleMinecraft::ScriptSystemAfterEvents> const&
    getMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptSystemAfterEvents&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
