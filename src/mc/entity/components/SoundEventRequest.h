#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class StrictEntityContext;
class Vec3;
struct ActorDataFlagComponent;
struct ActorDefinitionIdentifier;
// clang-format on

struct SoundEventRequest {
public:
    // SoundEventRequest inner types declare
    // clang-format off
    struct ActorLocationData;
    struct PlainData;
    struct SoundData;
    struct SynchronizedPlainData;
    // clang-format on

    // SoundEventRequest inner types define
    struct PlainData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnk36ff99;
        ::ll::UntypedStorage<1, 1>   mUnkad3962;
        ::ll::UntypedStorage<1, 1>   mUnk9a24f2;
        ::ll::UntypedStorage<4, 4>   mUnkd9e8f3;
        ::ll::UntypedStorage<8, 176> mUnkefd30c;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlainData& operator=(PlainData const&);
        PlainData(PlainData const&);
        PlainData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PlainData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct SoundData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkdd15c3;
        ::ll::UntypedStorage<4, 4> mUnkff6589;
        // NOLINTEND

    public:
        // prevent constructor by default
        SoundData& operator=(SoundData const&);
        SoundData(SoundData const&);
        SoundData();
    };

    struct SynchronizedPlainData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnka2d7c8;
        ::ll::UntypedStorage<1, 1>   mUnkf05fad;
        ::ll::UntypedStorage<1, 1>   mUnk53aaf0;
        ::ll::UntypedStorage<4, 4>   mUnk8f8bf9;
        ::ll::UntypedStorage<8, 176> mUnkfe2a62;
        // NOLINTEND

    public:
        // prevent constructor by default
        SynchronizedPlainData& operator=(SynchronizedPlainData const&);
        SynchronizedPlainData(SynchronizedPlainData const&);
        SynchronizedPlainData();
    };

    struct ActorLocationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnk5be6b0;
        ::ll::UntypedStorage<4, 4> mUnk9ef37b;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActorLocationData& operator=(ActorLocationData const&);
        ActorLocationData(ActorLocationData const&);
        ActorLocationData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkd425f1;
    ::ll::UntypedStorage<8, 200> mUnka153ce;
    ::ll::UntypedStorage<4, 16>  mUnk866f2e;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundEventRequest& operator=(SoundEventRequest const&);
    SoundEventRequest(SoundEventRequest const&);
    SoundEventRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SoundEventRequest(::SoundEventRequest&&);

    MCAPI ~SoundEventRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::SoundEventRequest> tryPlaySound(
        ::DimensionType                        dimension,
        ::ActorDataFlagComponent const&        actorData,
        ::ActorDefinitionIdentifier const&     id,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::StrictEntityContext const&           entity,
        ::ActorLocation                        location,
        int                                    data
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SoundEventRequest&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
