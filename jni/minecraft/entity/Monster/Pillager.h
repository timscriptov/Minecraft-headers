/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"
#include "HumanoidMonster.h"

class Mob;
class Actor;

class Pillager : public Mob, public Actor, public Monster, public HumanoidMonster
{
public:
	//char filler_Pillager[UNKNOW_SIZE];
public:
	virtual ~Pillager();
	virtual void normalTick();
	virtual void getRidingHeight();
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void getItemUseDuration();
	virtual void _getWalkTargetValue(BlockPos const&);
public:
	Pillager(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
