#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemDescriptionData_v1_21_60 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf70788;
    ::ll::UntypedStorage<8, 56> mUnk12e0d4;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDescriptionData_v1_21_60(ComponentItemDescriptionData_v1_21_60 const&);
    ComponentItemDescriptionData_v1_21_60();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ComponentItemDescriptionData_v1_21_60& operator=(::ComponentItemDescriptionData_v1_21_60&&);

    MCAPI ::ComponentItemDescriptionData_v1_21_60& operator=(::ComponentItemDescriptionData_v1_21_60 const&);

    MCAPI ~ComponentItemDescriptionData_v1_21_60();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
