#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct JSON; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerVariables {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkf89f71;
    ::ll::UntypedStorage<8, 296> mUnkacdc32;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerVariables& operator=(ScriptServerVariables const&);
    ScriptServerVariables(ScriptServerVariables const&);
    ScriptServerVariables();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::Scripting::JSON> get(::std::string const& name) const;

    MCAPI ::std::vector<::std::string> getAllVariableNames() const;

    MCAPI ~ScriptServerVariables();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleServerAdmin::ScriptServerVariables> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
