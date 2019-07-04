/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"

class Mob;
class Actor;

class Endermite : public Mob, public Actor, public Monster
{
public:
	//char filler_Endermite[UNKNOW_SIZE];
public:
	virtual ~Endermite();
	virtual void normalTick();
	virtual void getRidingHeight();
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void onSizeUpdated();
	virtual void aiStep();
	virtual void checkSpawnRules(bool);
	virtual void getExperienceReward() const;
public:
	Endermite(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
