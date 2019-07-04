/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Animal.h"

class Actor;
class Mob;

class MushroomCow : public Mob, public Actor, public Animal
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
