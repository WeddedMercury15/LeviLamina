#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EquipItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnkfc1de7;
    ::ll::UntypedStorage<1, 1>   mUnka52d45;
    ::ll::UntypedStorage<4, 4>   mUnk8bf4df;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipItemComponent& operator=(EquipItemComponent const&);
    EquipItemComponent(EquipItemComponent const&);
    EquipItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EquipItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
