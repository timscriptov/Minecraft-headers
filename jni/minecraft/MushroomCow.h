/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Actor.h"
#include "Mob.h"
#include "Animal.h"

class MushroomCow
 : public Mob
// : public Actor
// : public Animal
{
public:
	//char filler_MushroomCow[UNKNOW_SIZE];
public:
	virtual ~MushroomCow();
	virtual void checkSpawnRules(bool);
public:
	MushroomCow(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void _isFloorMycelium(BlockPos const&);
};
