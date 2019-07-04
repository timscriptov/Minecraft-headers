/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "../Mob.h"
#include "../Actor.h"

class Ghast
 : public Mob
// : public Actor
{
public:
	//char filler_Ghast[UNKNOW_SIZE];
public:
	virtual ~Ghast();
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void getAmbientSoundPostponeTicks();
	virtual void useNewAi() const;
	virtual void newServerAiStep();
	virtual void getExperienceReward() const;
public:
	Ghast(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void isCharging();
	void _canReach(Vec3 const&, float);
};
