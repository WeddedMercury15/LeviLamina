#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class SpawnActorComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SpawnActorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb31eff;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnActorDefinition& operator=(SpawnActorDefinition const&);
    SpawnActorDefinition(SpawnActorDefinition const&);
    SpawnActorDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& component, ::SpawnActorComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SpawnActorDefinition>>& root
    );
    // NOLINTEND
};
