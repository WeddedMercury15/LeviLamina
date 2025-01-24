#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/world/phys/HitResultType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Vec3;
class WeakEntityRef;
struct AABBHitResult;
// clang-format on

class HitResult {
public:
    [[nodiscard]] constexpr explicit operator bool() const {
        return mType == HitResultType::Tile || mType == HitResultType::Entity;
    }

    HitResult(::HitResult&&)      = default;
    HitResult(::HitResult const&) = default;

public:
    // member variables
    // NOLINTBEGIN
    ::Vec3          mStartPos;
    ::Vec3          mRayDir;
    ::HitResultType mType;
    uchar           mFacing;
    ::BlockPos      mBlock;
    ::Vec3          mPos;
    ::WeakEntityRef mEntity;
    bool            mIsHitLiquid;
    uchar           mLiquidFacing;
    ::BlockPos      mLiquid;
    ::Vec3          mLiquidPos;
    bool            mIndirectHit;
    // NOLINTEND

public:
    // prevent constructor by default
    HitResult(HitResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HitResult();

    MCAPI explicit HitResult(::AABBHitResult const& hit);

    MCAPI HitResult(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity);

    MCAPI HitResult(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Vec3 const& rayEnd);

    MCAPI HitResult(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity, ::Vec3 const& pos);

    MCAPI HitResult(
        ::Vec3 const&     startPos,
        ::Vec3 const&     rayDir,
        ::BlockPos const& blockPos,
        uchar             facing,
        ::Vec3 const&     pos
    );

    MCAPI float distanceTo(::Actor const& otherEntity) const;

    MCAPI ::Actor* getEntity() const;

    MCAPI ::HitResult& operator=(::HitResult&&);

    MCAPI ::HitResult& operator=(::HitResult const&);

    MCAPI void setIsHitLiquid(bool isHit, ::HitResult const& liquidHit);

    MCAPI ~HitResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::AABBHitResult const& hit);

    MCAPI void* $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity);

    MCAPI void* $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Vec3 const& rayEnd);

    MCAPI void* $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::Actor& entity, ::Vec3 const& pos);

    MCAPI void*
    $ctor(::Vec3 const& startPos, ::Vec3 const& rayDir, ::BlockPos const& blockPos, uchar facing, ::Vec3 const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
