#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IMapDataManagerOptions.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class MapDataManagerOptions : public ::IMapDataManagerOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka0070d;
    // NOLINTEND

public:
    // prevent constructor by default
    MapDataManagerOptions& operator=(MapDataManagerOptions const&);
    MapDataManagerOptions(MapDataManagerOptions const&);
    MapDataManagerOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isPremiumWorldTemplate() const /*override*/;

    // vIndex: 2
    virtual bool isLegacyLevel() const /*override*/;

    // vIndex: 3
    virtual bool hasMapsCenteredToOrigin() const /*override*/;

    // vIndex: 4
    virtual ::BlockPos const& getWorldCenter() const /*override*/;

    // vIndex: 0
    virtual ~MapDataManagerOptions() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isPremiumWorldTemplate() const;

    MCAPI bool $isLegacyLevel() const;

    MCAPI bool $hasMapsCenteredToOrigin() const;

    MCAPI ::BlockPos const& $getWorldCenter() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
