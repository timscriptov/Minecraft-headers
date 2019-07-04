/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"

class Mob;
class Actor;

class Vex : public Mob, public Actor, public Monster
{
public:
	//char filler_Vex[UNKNOW_SIZE];
public:
	virtual ~Vex();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	//virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
	virtual void isInWall() const;
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void getExperienceReward() const;
public:
	Vex(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
