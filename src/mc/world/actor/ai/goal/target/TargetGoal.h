#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
struct MobDescriptor;
// clang-format on

class TargetGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                          mMob;
    ::ll::TypedStorage<1, 1, bool>                            mAttackOwner;
    ::ll::TypedStorage<1, 1, bool>                            mMustReach;
    ::ll::TypedStorage<1, 1, bool>                            mGlobalMustSee;
    ::ll::TypedStorage<1, 1, bool>                            mTargetMustSee;
    ::ll::TypedStorage<4, 4, int>                             mTargetMustSeeForgetTicks;
    ::ll::TypedStorage<1, 1, bool>                            mFilterFailure;
    ::ll::TypedStorage<4, 4, int>                             mFilterFailureTicks;
    ::ll::TypedStorage<4, 4, int>                             mGlobalMustSeeForgetTicks;
    ::ll::TypedStorage<4, 4, int>                             mPersistTargetTicks;
    ::ll::TypedStorage<4, 4, int>                             mReachCache;
    ::ll::TypedStorage<4, 4, int>                             mReachCacheTime;
    ::ll::TypedStorage<4, 4, int>                             mUnseenTicks;
    ::ll::TypedStorage<4, 4, float>                           mWithinDefault;
    ::ll::TypedStorage<1, 1, bool>                            mReevaluateTarget;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mTargetTypes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual bool isTargetGoal() const /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 10
    virtual bool _canAttack(
        ::Mob*                  testMob,
        ::Actor*                target,
        bool                    allowInvulnerable,
        bool                    mustSee,
        ::MobDescriptor const** outDescriptorMatch
    );

    // vIndex: 0
    virtual ~TargetGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canAttack(::Actor* target, bool outDescriptorMatch, ::MobDescriptor const** allowInvulnerable);

    MCAPI bool _canReach(::Actor& target);

    MCAPI bool
    _matchesTargetTypes(::Mob* testMob, ::Actor* target, bool mustSee, ::MobDescriptor const** outDescriptorMatch);

    MCAPI bool _withinRange(::Actor const& target);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isTargetGoal() const;

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCFOLD void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $_canAttack(
        ::Mob*                  testMob,
        ::Actor*                target,
        bool                    allowInvulnerable,
        bool                    mustSee,
        ::MobDescriptor const** outDescriptorMatch
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
