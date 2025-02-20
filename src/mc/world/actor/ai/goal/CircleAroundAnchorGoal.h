#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec3;
struct FloatRange;
// clang-format on

class CircleAroundAnchorGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>       mMob;
    ::ll::TypedStorage<4, 4, float>        mRadiusModifier;
    ::ll::TypedStorage<4, 4, float>        mRadiusChangeChance;
    ::ll::TypedStorage<4, 4, float>        mHeightChangeChance;
    ::ll::TypedStorage<4, 4, float>        mGoalRadiusSquared;
    ::ll::TypedStorage<4, 4, float>        mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>        mAngleModifier;
    ::ll::TypedStorage<4, 8, ::FloatRange> mRadiusRange;
    ::ll::TypedStorage<4, 8, ::FloatRange> mHeightOffsetRange;
    ::ll::TypedStorage<4, 8, ::FloatRange> mAboveTargetRange;
    ::ll::TypedStorage<4, 4, float>        mClockwise;
    ::ll::TypedStorage<4, 4, float>        mCurrentAngle;
    ::ll::TypedStorage<4, 4, float>        mCurrentHeight;
    ::ll::TypedStorage<4, 4, float>        mCurrentRadius;
    ::ll::TypedStorage<4, 12, ::Vec3>      mAnchorPoint;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~CircleAroundAnchorGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _selectNext();

    MCAPI void _setAnchorAboveGround();

    MCAPI void _setAnchorAboveTarget();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start();

    MCFOLD void $stop();

    MCFOLD bool $canUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
