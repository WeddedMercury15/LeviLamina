#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
struct SendEventData;
// clang-format on

class SendEventGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                          mCaster;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>            mTarget;
    ::ll::TypedStorage<8, 24, ::std::vector<::SendEventData>> mSpells;
    ::ll::TypedStorage<4, 4, int>                             mCurrentTick;
    ::ll::TypedStorage<4, 4, int>                             mCastTicksRemaining;
    ::ll::TypedStorage<4, 4, int>                             mCurrentSpellIndex;
    ::ll::TypedStorage<4, 4, int>                             mCurrentSpellStage;
    ::ll::TypedStorage<8, 8, uint64>                          mCooldownStopTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 0
    virtual ~SendEventGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int _selectBestSpell();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
