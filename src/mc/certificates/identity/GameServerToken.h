#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class GameServerToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkffc19b;
    // NOLINTEND

public:
    // prevent constructor by default
    GameServerToken();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameServerToken(::GameServerToken const& other);

    MCAPI ::Json::Value _getExtraData(::std::string const& key, ::Json::Value const& defaultValue) const;

    MCAPI ::mce::UUID getIdentity() const;

    MCAPI ::std::string getIdentityName() const;

    MCAPI ::std::string getTitleID() const;

    MCAPI ::std::string getXuid(bool trustSelfSigned) const;

    MCAPI ::GameServerToken const& operator=(::GameServerToken const& other);

    MCAPI ~GameServerToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GameServerToken const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
