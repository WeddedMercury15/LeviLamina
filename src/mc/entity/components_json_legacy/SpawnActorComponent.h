#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
struct SpawnActorEntry;
// clang-format on

class SpawnActorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SpawnActorEntry>> mSpawnEntries;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnActorComponent& operator=(SpawnActorComponent const&);
    SpawnActorComponent(SpawnActorComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::SpawnActorComponent& operator=(::SpawnActorComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const&, ::DataLoadHelper&);
    // NOLINTEND
};
