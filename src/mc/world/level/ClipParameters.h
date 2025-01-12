#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class Vec3;
// clang-format on

struct ClipParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Vec3 const&> mA;
    ::ll::TypedStorage<8, 8, ::Vec3 const&> mB;
    ::ll::TypedStorage<8, 8, ::Actor*>      mActor;
    ::ll::TypedStorage<1, 1, bool>          mLiquid;
    ::ll::TypedStorage<1, 1, bool>          mFullOnly;
    ::ll::TypedStorage<1, 1, bool>          mIgnoreBorderBlocks;
    ::ll::TypedStorage<1, 1, ::ShapeType>   mShapeType;
    ::ll::TypedStorage<4, 4, int>           mMaxDistance;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const>
        mShouldCheckBlock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClipParameters(::Vec3 const& a, ::Vec3 const& b);

    MCAPI ClipParameters(
        ::Vec3 const&                                                            a,
        ::Vec3 const&                                                            b,
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& shouldCheckBlock
    );

    MCAPI ~ClipParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Vec3 const& a, ::Vec3 const& b);

    MCAPI void* $ctor(
        ::Vec3 const&                                                            a,
        ::Vec3 const&                                                            b,
        ::std::function<bool(::BlockSource const&, ::Block const&, bool)> const& shouldCheckBlock
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
