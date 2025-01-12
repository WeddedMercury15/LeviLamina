#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DynamicProperties;
class ILevelStorageManagerConnector;
class LevelStorage;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DynamicPropertiesManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkde8f1d;
    ::ll::UntypedStorage<4, 4>  mUnke0cd59;
    ::ll::UntypedStorage<8, 16> mUnk3126ff;
    ::ll::UntypedStorage<8, 8>  mUnkf1bef4;
    ::ll::UntypedStorage<8, 24> mUnk52c501;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicPropertiesManager& operator=(DynamicPropertiesManager const&);
    DynamicPropertiesManager(DynamicPropertiesManager const&);
    DynamicPropertiesManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DynamicPropertiesManager(::cereal::ReflectionCtx const& ctx);

    MCAPI void addBytesSaved(::DynamicProperties const& properties);

    MCAPI ::DynamicProperties& getOrAddLevelDynamicProperties();

    MCFOLD uint64 getTotalBytesSaved() const;

    MCAPI void readFromLevelStorage(::LevelStorage& levelStorage);

    MCAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI void tick();

    MCAPI void writeToLevelStorage(::LevelStorage& levelStorage);

    MCAPI ~DynamicPropertiesManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
