#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorIsImmobileFlagComponent;
struct ActorIsKnockedBackOnDeathFlagComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct DamageNearbyMobsComponent;
struct DimensionTypeComponent;
struct FallDistanceComponent;
struct HorizontalCollisionFlagComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct MobFlagComponent;
struct MoveRequestComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct PlayerActionComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
struct RiptideTridentSpinAttackComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct SpinAttackResultsComponent;
struct StateVectorComponent;
// clang-format on

namespace SpinAttackSystem {
// functions
// NOLINTBEGIN
MCAPI void _fetchEntitiesForSpinAttack(
    ::StrictEntityContext const&                                  entity,
    ::AABBShapeComponent const&                                   aabb,
    ::ActorDataFlagComponent const&                               actorData,
    ::DimensionTypeComponent const&                               dimension,
    ::LocalSpatialEntityFetcherFactoryComponent&                  factory,
    ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>> mobView,
    ::EntityModifier<::SpinAttackResultsComponent>                modifier
);

MCAPI void _stopSpinAttack(
    ::StrictEntityContext const&                                entity,
    ::ActorDataFlagComponent&                                   actorData,
    ::ActorDataDirtyFlagsComponent&                             actorDataDirtyFlags,
    ::DamageNearbyMobsComponent&                                damageNearbyMobs,
    ::PlayerActionComponent&                                    playerAction,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent> modifier
);

MCAPI void _tickPostDamageNearbyMobs(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::StrictEntityContext const&                                entity,
    ::ActorDataFlagComponent&                                   actorData,
    ::ActorDataDirtyFlagsComponent&                             actorDataDirtyFlags,
    ::DamageNearbyMobsComponent&                                damageNearbyMobs,
    ::FallDistanceComponent&                                    fallDistance,
    ::PlayerActionComponent&                                    playerAction,
    ::StateVectorComponent&                                     svc,
    ::Optional<::OnGroundFlagComponent const>                   isOnGround,
    ::Optional<::HorizontalCollisionFlagComponent const>        hasHorizontalCollision,
    ::Optional<::SpinAttackResultsComponent const>              spinAttackResult,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent> modifier
);

MCAPI void _tickSpinAttackAction(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::StrictEntityContext const&               entity,
    ::ActorRotationComponent const&            actorRotation,
    ::RiptideTridentSpinAttackComponent const& riptideSpinAttack,
    ::ActorDataFlagComponent&                  actorData,
    ::ActorDataDirtyFlagsComponent&            dirtyFlags,
    ::DamageNearbyMobsComponent&               damageNearbyMobs,
    ::StateVectorComponent&                    svc,
    ::Optional<::OnGroundFlagComponent const>  onGround,
    ::ViewT<::StrictEntityContext, ::ActorDataFlagComponent const, ::Optional<::ActorIsImmobileFlagComponent const>>&
        actorView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::MobFlagComponent>,
        ::MovementAttributesComponent const,
        ::Optional<::ActorIsKnockedBackOnDeathFlagComponent const>>&                                mobView,
    ::ViewT<::StrictEntityContext, ::PlayerIsSleepingFlagComponent const, ::PlayerComponent const>& playerView,
    ::EntityModifier<
        ::MoveRequestComponent,
        ::RiptideTridentSpinAttackComponent,
        ::ShouldUpdateBoundingBoxRequestComponent> modifier
);

MCAPI void createSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace SpinAttackSystem
