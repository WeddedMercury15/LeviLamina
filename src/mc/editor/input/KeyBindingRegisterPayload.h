#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::Input { class KeyBinding; }
namespace Editor::Input { struct BindingInfo; }
// clang-format on

namespace Editor::Network {

class KeyBindingRegisterPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::KeyBindingRegisterPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk39f3d7;
    ::ll::UntypedStorage<8, 48>  mUnkc52efa;
    ::ll::UntypedStorage<4, 12>  mUnkbcc0b4;
    ::ll::UntypedStorage<8, 128> mUnkf93322;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyBindingRegisterPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~KeyBindingRegisterPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI KeyBindingRegisterPayload(::Editor::Network::KeyBindingRegisterPayload const&);

    MCAPI KeyBindingRegisterPayload(
        ::HashedString const&               contextId,
        ::HashedString const&               bindingId,
        ::Editor::Input::KeyBinding const&  binding,
        ::Editor::Input::BindingInfo const& info
    );

    MCAPI ::Editor::Network::KeyBindingRegisterPayload& operator=(::Editor::Network::KeyBindingRegisterPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::Network::KeyBindingRegisterPayload const&);

    MCAPI void* $ctor(
        ::HashedString const&               contextId,
        ::HashedString const&               bindingId,
        ::Editor::Input::KeyBinding const&  binding,
        ::Editor::Input::BindingInfo const& info
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
