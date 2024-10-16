#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsDyeableComponent {
public:
    // prevent constructor by default
    ScriptIsDyeableComponent& operator=(ScriptIsDyeableComponent const&);
    ScriptIsDyeableComponent(ScriptIsDyeableComponent const&);
    ScriptIsDyeableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptIsDyeableComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool _isValid$() const;

    MCAPI static std::string const& sClassName();

    MCAPI static char const* const& sComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
