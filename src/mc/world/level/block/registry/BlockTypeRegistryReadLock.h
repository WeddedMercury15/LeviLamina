#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTypeRegistryReadLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkcc491f;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTypeRegistryReadLock& operator=(BlockTypeRegistryReadLock const&);
    BlockTypeRegistryReadLock(BlockTypeRegistryReadLock const&);
    BlockTypeRegistryReadLock();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockTypeRegistryReadLock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
