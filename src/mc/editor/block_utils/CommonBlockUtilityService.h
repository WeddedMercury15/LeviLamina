#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/serviceproviders/CommonBlockUtilityServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockSource;
class ChunkPos;
// clang-format on

namespace Editor::BlockUtils {

class CommonBlockUtilityService : public ::Editor::Services::IEditorService,
                                  public ::Editor::Services::PayloadStoreHelper,
                                  public ::Editor::BlockUtils::CommonBlockUtilityServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9a172d;
    ::ll::UntypedStorage<8, 8> mUnk3de541;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonBlockUtilityService& operator=(CommonBlockUtilityService const&);
    CommonBlockUtilityService(CommonBlockUtilityService const&);
    CommonBlockUtilityService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommonBlockUtilityService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::std::set<::ChunkPos> getChunksFromAABB(::AABB const& aabb) const /*override*/;

    // vIndex: 2
    virtual bool isChunkLoaded(::ChunkPos const& pos) const /*override*/;

    // vIndex: 3
    virtual bool isChunkFullyLoaded(::ChunkPos const& pos) const /*override*/;

    // vIndex: 4
    virtual bool areChunksLoaded(::std::set<::ChunkPos> const& chunks) const /*override*/;

    // vIndex: 5
    virtual bool isAreaLoaded(::AABB const& aabb) const /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<void> _implInit() = 0;

    // vIndex: 8
    virtual ::Scripting::Result<void> _implReady() = 0;

    // vIndex: 9
    virtual ::Scripting::Result<void> _implQuit() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockSource& _getBlockSource() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCFOLD ::Scripting::Result<void> $ready();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::std::set<::ChunkPos> $getChunksFromAABB(::AABB const& aabb) const;

    MCAPI bool $isChunkLoaded(::ChunkPos const& pos) const;

    MCAPI bool $isChunkFullyLoaded(::ChunkPos const& pos) const;

    MCAPI bool $areChunksLoaded(::std::set<::ChunkPos> const& chunks) const;

    MCAPI bool $isAreaLoaded(::AABB const& aabb) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIEditorService();

    MCAPI static void** $vftableForCommonBlockUtilityServiceProvider();
    // NOLINTEND
};

} // namespace Editor::BlockUtils
