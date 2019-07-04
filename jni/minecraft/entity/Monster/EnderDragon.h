/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"

class Mob;
class Actor;
class EndDragonFight;
class Node;
class PathCompletionType;
class EnderCrystal;

class EnderDragon : public Mob, public Actor, public Monster
{
public:
	//char filler_EnderDragon[UNKNOW_SIZE];
public:
	virtual ~EnderDragon();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	virtual void remove();
	virtual void canExistInPeaceful() const;
	virtual void getShadowRadius() const;
	virtual void getHeadLookVector(float);
	virtual void isImmobile() const;
	virtual void isFishable() const;
	virtual void setSitting(bool);
	virtual void isInvulnerableTo(ActorDamageSource const&) const;
	virtual void handleEntityEvent(ActorEvent, int);
	virtual void canChangeDimensions() const;
	virtual void canBePulledIntoVehicle() const;
	virtual void canBeAffected(MobEffectInstance const&) const;
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void onSizeUpdated();
	virtual void aiStep();
	virtual void shouldDespawn() const;
	virtual void getExperienceReward() const;
	virtual void tickDeath();
public:
	EnderDragon(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getLatencyPos(int, float) const;
	void getNearestCrystal() const;
	//void getHeadPartYOffset(int, std::vector<float, std::allocator<float> > const&, std::vector<float, std::allocator<float> > const&) const;
	void checkWalls(AABB);
	void reallyHurt(ActorDamageSource const&, float);
	void dieNaturally();
	void setTargetPos(Vec3);
	void setTurnSpeed(float);
	void checkCrystals();
	void setDragonFight(EndDragonFight*);
	void findClosestNode(Vec3);
	void findClosestNode();
	void reconstructPath(Node&, Node&, PathCompletionType);
	void resetFlameCount();
	void onCrystalDestroyed(EnderCrystal const&, BlockPos, ActorDamageSource const&);
	void incrementFlameCount();
	void _hurt(AABB*, ActorDamageSource const&, float);
	void findPath(int, int, Node*);
	void getHeadPos() const;
	void getTargetPos() const;
	//void hurtEntities(std::vector<Actor*, std::allocator<Actor*> > const&) const;
	void getFlameCount() const;
	void getDragonFight() const;
	void getHeadYOffset(float) const;
	void isPathRegionLoaded() const;
	//void knockBack(std::vector<Actor*, std::allocator<Actor*> > const&) const;
public:
	static EnderDragon * MAX_PATH_RADIUS;
	static EnderDragon * GROWL_INTERVAL_MAX;
	static EnderDragon * GROWL_INTERVAL_MIN;
	static EnderDragon * SITTING_ALLOWED_DAMAGE_PERCENTAGE;
};
