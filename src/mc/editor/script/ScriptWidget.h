#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/editor/script/ScriptWidget_ComponentInterface.h"
#include "mc/editor/script/ScriptWidget_GroupInterface.h"
#include "mc/editor/script/ScriptWidget_ServiceInterface.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::Network { class WidgetStateChangePayload; }
namespace Editor::ScriptModule { class ScriptClipboardItem; }
namespace Editor::ScriptModule { class ScriptWidgetComponentBase; }
namespace Editor::ScriptModule { class ScriptWidgetComponentClipboard; }
namespace Editor::ScriptModule { class ScriptWidgetComponentClipboardOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentEntity; }
namespace Editor::ScriptModule { class ScriptWidgetComponentEntityOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetComponentGizmo; }
namespace Editor::ScriptModule { class ScriptWidgetComponentGizmoOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentGuideSensor; }
namespace Editor::ScriptModule { class ScriptWidgetComponentGuideSensorOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrim; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_AxialSphere; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Box; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Disc; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Line; }
namespace Editor::ScriptModule { class ScriptWidgetComponentSpline; }
namespace Editor::ScriptModule { class ScriptWidgetComponentSplineOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentText; }
namespace Editor::ScriptModule { class ScriptWidgetComponentTextOptions; }
namespace Editor::ScriptModule { class ScriptWidgetCreateOptions; }
namespace Editor::ScriptModule { class ScriptWidgetErrorInvalidObject; }
namespace Editor::ScriptModule { class ScriptWidgetGroup; }
namespace Editor::ScriptModule { class ScriptWidgetGroupErrorInvalidObject; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace Editor::ScriptModule { class ScriptWidgetStateChangeEventParameters; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidget : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptWidget>,
                     public ::Editor::ScriptModule::ScriptWidget_GroupInterface,
                     public ::Editor::ScriptModule::ScriptWidget_ServiceInterface,
                     public ::Editor::ScriptModule::ScriptWidget_ComponentInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3fd115;
    ::ll::UntypedStorage<8, 8>  mUnkc2fe43;
    ::ll::UntypedStorage<8, 8>  mUnke49379;
    ::ll::UntypedStorage<1, 1>  mUnk46d2f6;
    ::ll::UntypedStorage<8, 16> mUnk20db35;
    ::ll::UntypedStorage<8, 32> mUnkded1eb;
    ::ll::UntypedStorage<4, 12> mUnka64629;
    ::ll::UntypedStorage<1, 1>  mUnk281f36;
    ::ll::UntypedStorage<1, 1>  mUnkca16b6;
    ::ll::UntypedStorage<1, 1>  mUnk495ae4;
    ::ll::UntypedStorage<1, 1>  mUnk50a450;
    ::ll::UntypedStorage<4, 4>  mUnk256c17;
    ::ll::UntypedStorage<4, 12> mUnkb83306;
    ::ll::UntypedStorage<1, 1>  mUnkd3135e;
    ::ll::UntypedStorage<1, 1>  mUnk3faea0;
    ::ll::UntypedStorage<1, 1>  mUnk1d10b8;
    ::ll::UntypedStorage<1, 1>  mUnkcc57da;
    ::ll::UntypedStorage<8, 88> mUnk30dd27;
    ::ll::UntypedStorage<8, 64> mUnkfa8e26;
    ::ll::UntypedStorage<8, 24> mUnk100eaa;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidget& operator=(ScriptWidget const&);
    ScriptWidget(ScriptWidget const&);
    ScriptWidget();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual ~ScriptWidget() = default;

    // vIndex: 0
    virtual void _performDeleteWidget(bool suppressClientMessage) /*override*/;

    // vIndex: 1
    virtual void _setValid(bool valid) /*override*/;

    // vIndex: 2
    virtual void _handleWidgetStateChangePayload(::Editor::Network::WidgetStateChangePayload const& payload
    ) /*override*/;

    // vIndex: 3
    virtual void
    _handleWidgetComponentStateChangePayload(::Editor::Network::WidgetComponentStateChangePayload const& payload
    ) /*override*/;

    // vIndex: 4
    virtual void _servicePendingStateChanges() /*override*/;

    // vIndex: 5
    virtual void _setSelectedNoBroadcast(bool selected) /*override*/;

    // vIndex: 0
    virtual ::Scripting::WeakLifetimeScope& _getScope() /*override*/;

    // vIndex: 1
    virtual void _deleteComponent(::mce::UUID const& componentId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidget(
        ::Editor::ServiceProviderCollection&                                          serviceProviders,
        ::Editor::ScriptModule::ScriptWidgetService&                                  parentService,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup> group,
        ::Vec3 const&                                                                 position,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetCreateOptions> const&     options,
        ::Scripting::WeakLifetimeScope const&                                         scope
    );

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetComponentClipboard>,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Scripting::Error>
    _addClipboardComponent(
        ::std::string const& componentName,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptClipboardItem>> const&
                                                                                              optionalClipboardItem,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions> const& options
    );

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetComponentEntity>,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Scripting::Error>
    _addEntityComponent(
        ::std::string const&                                                               componentName,
        ::std::string const&                                                               actorNameId,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentEntityOptions> const& options
    );

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetComponentGizmo>,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Scripting::Error>
    _addGizmoComponent(
        ::std::string const&                                                              componentName,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentGizmoOptions> const& options
    );

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetComponentGuideSensor>,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Scripting::Error>
    _addGuideSensorComponent(
        ::std::string const&                                                                    componentName,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentGuideSensorOptions> const& options
    );

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetComponentRenderPrim>,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Scripting::Error>
    _addRenderPrimComponent(
        ::std::string const& componentName,
        ::std::variant<
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Box,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Line,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Disc,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere> const&    primitiveType,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentRenderPrimOptions> const& options
    );

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetComponentSpline>,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Scripting::Error>
    _addSplineComponent(
        ::std::string const&                                                               componentName,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentSplineOptions> const& options
    );

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetComponentText>,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Scripting::Error>
    _addTextComponent(
        ::std::string const&                                                             componentName,
        ::std::string const&                                                             textString,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentTextOptions> const& options
    );

    MCAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent,
        ::Scripting::Error>
    _deleteComponentCommand(::std::variant<
                            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetComponentBase>,
                            ::std::string> componentHandleOrName);

    MCAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject,
        ::Scripting::Error>
    _deleteWidget();

    MCAPI void _forEachComponent(
        ::std::function<bool(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetComponentBase>)>
            func
    ) const;

    MCAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetComponentBase>>,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _getAllComponents() const;

    MCAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _getBindPositionToBlockCursor() const;

    MCAPI ::Scripting::Result<float, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _getCollisionRadius() const;

    MCAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _getCollisionRadiusVisible() const;

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetComponentBase>,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Scripting::Error>
    _getComponentByName(::std::string const& componentName) const;

    MCAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject> _getLockToSurface() const;

    MCAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject> _getSnapToBlock() const;

    MCAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _scriptGetCollisionOffset() const;

    MCAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _scriptGetPosition() const;

    MCAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _scriptGetSelectable() const;

    MCAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject> _scriptGetSelected() const;

    MCAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _scriptGetShowBoundingBox() const;

    MCAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject> _scriptGetVisible() const;

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _scriptSetCollisionOffset(::Vec3 const& position);

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _scriptSetPosition(::Vec3 const& position);

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject, ::Scripting::Error>
    _scriptSetSelected(bool selected);

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _scriptSetShowBoundingBox(bool visible);

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _scriptSetVisible(bool visible);

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _setBindPositionToBlockCursor(bool bindToBlockCursor);

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject> _setChangeEventClosure(
        ::std::optional<
            ::Scripting::Closure<void(::Scripting::StrongTypedObjectHandle<
                                      ::Editor::ScriptModule::ScriptWidgetStateChangeEventParameters>)>> const& closure
    );

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject, ::Scripting::Error>
    _setCollisionRadius(float radius);

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _setCollisionRadiusVisible(bool visible);

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _setLockToSurface(bool lockToSurface);

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _setSnapToBlock(bool snapToBlock);

    MCAPI void _setVisible(bool visible);

    MCAPI ::mce::UUID const& getGroupId() const;

    MCAPI bool isValid() const;

    MCAPI void setPosition(::Vec3 const& pos);

    MCAPI ::Scripting::Result<void, ::Scripting::Error> setSelected(bool selected);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidget> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                          serviceProviders,
        ::Editor::ScriptModule::ScriptWidgetService&                                  parentService,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup> group,
        ::Vec3 const&                                                                 position,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetCreateOptions> const&     options,
        ::Scripting::WeakLifetimeScope const&                                         scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_performDeleteWidget(bool suppressClientMessage);

    MCFOLD void $_setValid(bool valid);

    MCAPI void $_handleWidgetStateChangePayload(::Editor::Network::WidgetStateChangePayload const& payload);

    MCAPI void
    $_handleWidgetComponentStateChangePayload(::Editor::Network::WidgetComponentStateChangePayload const& payload);

    MCAPI void $_servicePendingStateChanges();

    MCAPI void $_setSelectedNoBroadcast(bool selected);

    MCFOLD ::Scripting::WeakLifetimeScope& $_getScope();

    MCAPI void $_deleteComponent(::mce::UUID const& componentId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForScriptWidgetGroupInterface();

    MCAPI static void** $vftableForScriptWidgetComponentInterface();

    MCAPI static void** $vftableForScriptWidgetServiceInterface();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
