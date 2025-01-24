#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
class CreativeItemEntry;
class CreativeItemRegistry;
class HashedString;
class ItemInstance;
// clang-format on

class CreativeGroupInfo : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CreativeItemCategory>  mCategory;
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*> mRegistry;
    ::ll::TypedStorage<8, 48, ::HashedString>         mName;
    ::ll::TypedStorage<8, 128, ::ItemInstance>        mIcon;
    ::ll::TypedStorage<4, 4, uint>                    mIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>    mItemIndexes;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeGroupInfo& operator=(CreativeGroupInfo const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CreativeGroupInfo() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreativeGroupInfo(::CreativeGroupInfo const&);

    MCAPI void addCreativeItem(::CreativeItemEntry* itemEntry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CreativeGroupInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
