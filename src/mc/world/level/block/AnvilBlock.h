#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class HashedString;
class IConstBlockSource;
class Player;
struct BlockAnimateTickData;
namespace mce { class Color; }
// clang-format on

class AnvilBlock : public ::FallingBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 9
    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    // vIndex: 139
    virtual bool use(::Player&, ::BlockPos const&, uchar) const /*override*/;

    // vIndex: 150
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    // vIndex: 151
    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    // vIndex: 124
    virtual void animateTick(::BlockAnimateTickData const&) const /*override*/;

    // vIndex: 152
    virtual bool falling() const /*override*/;

    // vIndex: 153
    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 30
    virtual bool isCraftingBlock() const /*override*/;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 13
    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const
        /*override*/;

    // vIndex: 138
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 23
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    // vIndex: 0
    virtual ~AnvilBlock() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AABB const& _getShape(::BlockPos const& pos, ::Block const& block, ::AABB& bufferValue);

    MCAPI static int getDamageForName(::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB
    $getCollisionShape(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCFOLD bool $use(::Player&, ::BlockPos const&, uchar) const;

    MCFOLD ::mce::Color $getDustColor(::Block const&) const;

    MCFOLD ::std::string $getDustParticleName(::Block const&) const;

    MCFOLD void $animateTick(::BlockAnimateTickData const&) const;

    MCFOLD bool $falling() const;

    MCAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isCraftingBlock() const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCFOLD bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCFOLD bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
