#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackReport;
class PackSettings;
class PackStats;
class ResourcePack;
class SemVersion;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class PackInstance {
public:
    // PackInstance inner types define
    using Callback = ::std::function<void(::Core::Path const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 256, ::PackReport>                              mPackReport;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                             mPackSettings;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourcePack>> mPack;
    ::ll::TypedStorage<4, 16, ::PackStats>                                mStats;
    ::ll::TypedStorage<4, 4, int>                                         mSubpackIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackInstance(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        int                                           subpackIndex,
        bool                                          packSettings,
        ::PackSettings*                               isDependent
    );

    MCAPI PackInstance(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        ::std::string const&                          subpackName,
        bool                                          packSettings,
        ::PackSettings*                               isDependent
    );

    MCAPI ::std::string const& getFolderName() const;

    MCAPI ::PackManifest const& getManifest() const;

    MCAPI ::PackManifest& getManifest();

    MCAPI ::PackCategory getPackCategory() const;

    MCAPI ::mce::UUID const getPackId() const;

    MCAPI ::PackOrigin getPackOrigin() const;

    MCAPI ::std::string const& getSubpackFolderName() const;

    MCAPI ::SemVersion const& getVersion() const;

    MCAPI bool isBaseGamePack() const;

    MCAPI ::Bedrock::Resources::PreloadedPathHandle preloadPath(::Core::Path const& packRelativePath) const;

    MCAPI ~PackInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        int                                           subpackIndex,
        bool                                          packSettings,
        ::PackSettings*                               isDependent
    );

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        ::std::string const&                          subpackName,
        bool                                          packSettings,
        ::PackSettings*                               isDependent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
