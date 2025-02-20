#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ExplorationMapData;
// clang-format on

class ExplorationMapRegistry {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::array<::ExplorationMapData, 11> const& _getRegistry();

    MCAPI static ::ExplorationMapData const* getExplorationMapDataByFeatureName(::std::string const& featureName);
    // NOLINTEND
};
