#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/serviceproviders/EditorPersistenceServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/persistence/PersistentDataType.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Persistence { struct PersistentData; }
namespace Scripting { struct Error; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Services {

class EditorPersistenceService : public ::Editor::Services::IEditorService,
                                 public ::Editor::Services::EditorPersistenceServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk7b2522;
    ::ll::UntypedStorage<8, 48> mUnkff56eb;
    ::ll::UntypedStorage<8, 8>  mUnk5f20cb;
    ::ll::UntypedStorage<8, 16> mUnkbccd2b;
    ::ll::UntypedStorage<8, 16> mUnk3eb25a;
    ::ll::UntypedStorage<8, 16> mUnkfb39fc;
    ::ll::UntypedStorage<8, 16> mUnkd0e172;
    ::ll::UntypedStorage<1, 1>  mUnkf68ffb;
    ::ll::UntypedStorage<1, 1>  mUnkc98305;
    ::ll::UntypedStorage<1, 1>  mUnka0de9e;
    ::ll::UntypedStorage<4, 4>  mUnk6933a5;
    ::ll::UntypedStorage<8, 8>  mUnkc95860;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorPersistenceService& operator=(EditorPersistenceService const&);
    EditorPersistenceService(EditorPersistenceService const&);
    EditorPersistenceService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorPersistenceService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    listenForPersistDataChanged(::std::function<void(::Editor::Persistence::PersistentData const&)> func) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> listenForPersistDataRemoved(
        ::std::function<void(::HashedString const&, ::Editor::Services::PersistentDataType)> func
    ) /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> addOrUpdatePersistData(::Editor::Persistence::PersistentData const& data
    ) /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> addPersistData(::Editor::Persistence::PersistentData const& data) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> updatePersistData(::Editor::Persistence::PersistentData const& data) /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result<void>
    removePersistData(::HashedString const& key, ::Editor::Services::PersistentDataType const dataType) /*override*/;

    // vIndex: 5
    virtual ::Scripting::Result<::std::string, ::Scripting::Error>
    getPersistData(::HashedString const& key, ::Editor::Services::PersistentDataType const dataType) const /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<bool, ::Scripting::Error>
    hasData(::HashedString const& key, ::Editor::Services::PersistentDataType const dataType) const /*override*/;

    // vIndex: 6
    virtual ::Scripting::Result<::std::vector<::HashedString>, ::Scripting::Error>
    getKeysStartWith(::std::string const prefix, ::Editor::Services::PersistentDataType const dataType) const
        /*override*/;

    // vIndex: 7
    virtual void _removePersistData(::HashedString const&, ::Editor::Services::PersistentDataType const);

    // vIndex: 8
    virtual void _tick(::Editor::ServiceProviderCollection&);

    // vIndex: 10
    virtual ::std::unique_ptr<::cereal::ReflectionCtx>& getCerealContext() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorPersistenceService(::Editor::ServiceProviderCollection& providers);

    MCAPI void _updatePersistData(::Editor::Persistence::PersistentData const& data);

    MCAPI bool isTimeOut() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::Scripting::Result<void> $ready();

    MCAPI ::std::string_view $getServiceName() const;

    MCFOLD ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $listenForPersistDataChanged(::std::function<void(::Editor::Persistence::PersistentData const&)> func);

    MCAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> $listenForPersistDataRemoved(
        ::std::function<void(::HashedString const&, ::Editor::Services::PersistentDataType)> func
    );

    MCAPI ::Scripting::Result<void> $addOrUpdatePersistData(::Editor::Persistence::PersistentData const& data);

    MCAPI ::Scripting::Result<void> $addPersistData(::Editor::Persistence::PersistentData const& data);

    MCAPI ::Scripting::Result<void> $updatePersistData(::Editor::Persistence::PersistentData const& data);

    MCAPI ::Scripting::Result<void>
    $removePersistData(::HashedString const& key, ::Editor::Services::PersistentDataType const dataType);

    MCAPI ::Scripting::Result<::std::string, ::Scripting::Error>
    $getPersistData(::HashedString const& key, ::Editor::Services::PersistentDataType const dataType) const;

    MCAPI ::Scripting::Result<bool, ::Scripting::Error>
    $hasData(::HashedString const& key, ::Editor::Services::PersistentDataType const dataType) const;

    MCAPI ::Scripting::Result<::std::vector<::HashedString>, ::Scripting::Error>
    $getKeysStartWith(::std::string const prefix, ::Editor::Services::PersistentDataType const dataType) const;

    MCFOLD void $_removePersistData(::HashedString const&, ::Editor::Services::PersistentDataType const);

    MCFOLD void $_tick(::Editor::ServiceProviderCollection&);

    MCFOLD ::std::unique_ptr<::cereal::ReflectionCtx>& $getCerealContext();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEditorPersistenceServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
