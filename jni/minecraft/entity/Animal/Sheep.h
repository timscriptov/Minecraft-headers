/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Animal.h"

class Actor;
class Mob;

class Sheep : public Mob, public Actor, public Animal
{
public:
	//char filler_Sheep[UNKNOW_SIZE];
public:
	virtual ~Sheep();
	virtual void handleEntityEvent(ActorEvent, int);
	virtual void getLootTable();
	virtual void getDefaultLootTable();
	virtual void aiStep();
	virtual void ate();
	virtual void useNewAi() const;
	virtual void jumpFromGround();
	virtual void newServerAiStep();
public:
	Sheep(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void isGrazing() const;
	void _getOffspringColor(Animal&, Animal&);
public:
	static Sheep * EAT_ANIMATION_TICKS;
};
