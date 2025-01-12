#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/NodeType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class PathfinderNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk62bf72;
    ::ll::UntypedStorage<4, 4>  mUnkc2992d;
    ::ll::UntypedStorage<4, 4>  mUnk51c963;
    ::ll::UntypedStorage<4, 4>  mUnke68e8d;
    ::ll::UntypedStorage<4, 4>  mUnk84468c;
    ::ll::UntypedStorage<4, 4>  mUnkac9ee6;
    ::ll::UntypedStorage<4, 4>  mUnk5e6080;
    ::ll::UntypedStorage<4, 4>  mUnk675361;
    ::ll::UntypedStorage<8, 8>  mUnk2901ae;
    ::ll::UntypedStorage<4, 12> mUnk41a7d6;
    ::ll::UntypedStorage<1, 1>  mUnkcf5c02;
    // NOLINTEND

public:
    // prevent constructor by default
    PathfinderNode& operator=(PathfinderNode const&);
    PathfinderNode();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PathfinderNode(::PathfinderNode const& node);

    MCAPI PathfinderNode(::BlockPos const& pos, ::NodeType type);

    MCAPI float distanceTo(::PathfinderNode* to) const;

    MCAPI float distanceToSqr(::PathfinderNode* to) const;

    MCAPI bool equals(::PathfinderNode* o);

    MCFOLD ::NodeType getType() const;

    MCAPI bool inOpenSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PathfinderNode const& node);

    MCAPI void* $ctor(::BlockPos const& pos, ::NodeType type);
    // NOLINTEND
};
