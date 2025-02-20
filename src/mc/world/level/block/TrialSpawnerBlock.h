#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/ActorBlockBase.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockLegacy;
class BlockPos;
class GetCollisionShapeInterface;
class IConstBlockSource;
struct Brightness;
// clang-format on

class TrialSpawnerBlock : public ::ActorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 126
    virtual ::Brightness getLightEmission(::Block const& block) const /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 138
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 0
    virtual ~TrialSpawnerBlock() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::AABB
    $getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI ::Brightness $getLightEmission(::Block const& block) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCFOLD bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
