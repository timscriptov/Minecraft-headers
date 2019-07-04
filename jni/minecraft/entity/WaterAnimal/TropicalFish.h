/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "WaterAnimal.h"

class Actor;
class Mob;

class TropicalFish : public Mob, public Actor, public WaterAnimal
{
public:
	//char filler_TropicalFish[UNKNOW_SIZE];
public:
	//virtual ~TropicalFish();
	//virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
	virtual void normalTick();
	virtual void startRiding(Actor&);
	virtual void playerTouch(Player&);
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void createAIGoals();
public:
	TropicalFish(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
