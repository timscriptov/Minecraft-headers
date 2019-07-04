/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"

class Mob;
class Actor;

class WitherBoss : public Mob, public Actor, public Monster
{
public:
	//char filler_WitherBoss[UNKNOW_SIZE];
public:
	virtual ~WitherBoss();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	//virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
	virtual void remove();
	virtual void getFiringPos() const;
	virtual void startRiding(Actor&);
	virtual void makeStuckInBlock(float);
	virtual void isInvulnerableTo(ActorDamageSource const&) const;
	virtual void handleEntityEvent(ActorEvent, int);
	virtual void causeFallDamage(float);
	virtual void canBeAffected(MobEffectInstance const&) const;
	virtual void canBeAffectedByArrow(MobEffectInstance const&) const;
	virtual void die(ActorDamageSource const&);
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
	virtual void aiStep();
	virtual void getArmorValue();
	virtual void newServerAiStep();
	virtual void getExperienceReward() const;
public:
	WitherBoss(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getHeadRot(int);
	void getOverlayAlpha();
	void getSwellAmount(float) const;
	void getInvulnerableTicks() const;
	void isPowered() const;
	void getPlayerParty() const;
	void wantsToMove();
	void setIsPathing(bool);
	void setShotDelay(int);
	void setWantsToMove(bool);
	void canDestroy(Block const&);
	void addSkeleton();
	void changePhase();
	void removeSkeleton();
	void setAerialAttack(bool);
	void makeInvulnerable();
	void canSummonSkeleton();
	void performRangedAttack(Mob&, float);
	void _performRangedAttack(int, Actor&);
	void _performRangedAttack(int, Vec3 const&, bool);
	void getAlternativeTarget(int);
	void setAlternativeTarget(int, ActorUniqueID);
	void setInvulnerableTicks(int);
	void canShoot();
	void getPhase();
	void getHeadPos(int) const;
	void getAerialAttack() const;
	void awardSpawnWitherAchievement() const;
public:
	static WitherBoss * TIME_BEFORE_MOVING;
	static WitherBoss * MAX_HEALTH_CAP_UUID;
};
