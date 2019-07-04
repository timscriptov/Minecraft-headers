/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "../Actor.h"
#include "../Mob.h"

class VillagerBase
 : public Mob
// : public Actor
{
public:
	//char filler_VillagerBase[UNKNOW_SIZE];
public:
	virtual ~VillagerBase();
	//virtual void reloadComponents(Actor::InitializationMethod, VariantParameterList const&);
	virtual void interactPreventDefault();
	virtual void onLightningHit();
	virtual void handleEntityEvent(ActorEvent, int);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void onSizeUpdated();
	virtual void useNewAi() const;
	virtual void _serverAiMobStep();
public:
	VillagerBase(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void setChasing(bool);
	void consumeLoveFood();
	void isWillingToBreed(bool);
	void setWillingToBreed(bool);
	void stopGoals();
	void isChasing() const;
	void _wantsItem(Item const&);
	void _addParticlesAroundSelf(ParticleType);
	void getBreedingStackIndex() const;
};
