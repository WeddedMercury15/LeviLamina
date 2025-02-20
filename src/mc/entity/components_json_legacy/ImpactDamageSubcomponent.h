#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/OnHitSubcomponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ProjectileComponent;
namespace Json { class Value; }
// clang-format on

class ImpactDamageSubcomponent : public ::OnHitSubcomponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk86604d;
    ::ll::UntypedStorage<1, 1> mUnk9c35c0;
    ::ll::UntypedStorage<4, 8> mUnk8e7211;
    ::ll::UntypedStorage<1, 1> mUnk6e61b8;
    ::ll::UntypedStorage<4, 4> mUnka69f08;
    ::ll::UntypedStorage<1, 1> mUnkedacbf;
    ::ll::UntypedStorage<1, 1> mUnk5b9c0f;
    ::ll::UntypedStorage<1, 1> mUnk5f06a5;
    ::ll::UntypedStorage<1, 1> mUnk9cd21d;
    ::ll::UntypedStorage<4, 4> mUnkf6b3c7;
    ::ll::UntypedStorage<4, 4> mUnk63cb41;
    ::ll::UntypedStorage<4, 4> mUnk2a732b;
    // NOLINTEND

public:
    // prevent constructor by default
    ImpactDamageSubcomponent& operator=(ImpactDamageSubcomponent const&);
    ImpactDamageSubcomponent(ImpactDamageSubcomponent const&);
    ImpactDamageSubcomponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ImpactDamageSubcomponent() /*override*/ = default;

    // vIndex: 1
    virtual void readfromJSON(::Json::Value& component) /*override*/;

    // vIndex: 2
    virtual void writetoJSON(::Json::Value& component) const /*override*/;

    // vIndex: 3
    virtual void doOnHitEffect(::Actor& owner, ::ProjectileComponent& component) /*override*/;

    // vIndex: 4
    virtual char const* getName() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $readfromJSON(::Json::Value& component);

    MCAPI void $writetoJSON(::Json::Value& component) const;

    MCAPI void $doOnHitEffect(::Actor& owner, ::ProjectileComponent& component);

    MCAPI char const* $getName();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
