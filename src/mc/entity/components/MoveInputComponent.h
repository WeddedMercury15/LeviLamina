#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
class Vec3;
struct MoveInputState;
// clang-format on

struct MoveInputComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::MoveInputState>                       mInputState;
    ::ll::TypedStorage<4, 40, ::MoveInputState>                       mRawInputState;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mHoldAutoJumpInWaterUntil;
    ::ll::TypedStorage<4, 8, ::Vec2>                                  mMove;
    ::ll::TypedStorage<4, 8, ::Vec2>                                  mLookDelta;
    ::ll::TypedStorage<4, 8, ::Vec2>                                  mInteractDir;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mDisplacement;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mDisplacementDelta;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mCameraOrientation;
    ::ll::TypedStorage<1, 1, bool>                                    mSneaking;
    ::ll::TypedStorage<1, 1, bool>                                    mSprinting;
    ::ll::TypedStorage<1, 1, bool>                                    mWantUp;
    ::ll::TypedStorage<1, 1, bool>                                    mWantDown;
    ::ll::TypedStorage<1, 1, bool>                                    mJumping;
    ::ll::TypedStorage<1, 1, bool>                                    mAutoJumpingInWater;
    ::ll::TypedStorage<1, 1, bool>                                    mMoveInputStateLocked;
    ::ll::TypedStorage<1, 1, bool>                                    mPersistSneak;
    ::ll::TypedStorage<1, 1, bool>                                    mAutoJumpEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mIsCameraRelativeMovementEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mIsRotControlledByMoveDirection;
    ::ll::TypedStorage<1, 2, ::std::array<bool, 2>>                   mIsPaddling;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveInputComponent(MoveInputComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::MoveInputComponent& operator=(::MoveInputComponent&&);

    MCAPI ::MoveInputComponent& operator=(::MoveInputComponent const&);
    // NOLINTEND
};
