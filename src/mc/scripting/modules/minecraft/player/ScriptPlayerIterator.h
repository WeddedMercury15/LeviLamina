#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptVectorIterator.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayerIterator : public ::ScriptModuleMinecraft::ScriptVectorIterator<
                                 ::ScriptModuleMinecraft::ScriptPlayerIterator,
                                 ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> {
public:
    // prevent constructor by default
    ScriptPlayerIterator& operator=(ScriptPlayerIterator const&);
    ScriptPlayerIterator(ScriptPlayerIterator const&);

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptPlayerIterator& operator=(::ScriptModuleMinecraft::ScriptPlayerIterator&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerIterator> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
