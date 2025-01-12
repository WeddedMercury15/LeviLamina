#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITreeCanopyWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb352c6;
    // NOLINTEND

public:
    // prevent constructor by default
    ITreeCanopyWrapper& operator=(ITreeCanopyWrapper const&);
    ITreeCanopyWrapper(ITreeCanopyWrapper const&);
    ITreeCanopyWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ITreeCanopyWrapper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
