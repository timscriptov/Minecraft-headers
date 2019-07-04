/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Actor;
class Mob;
class WaterAnimal;

class Fish
 : public Mob
// : public Actor
// : public WaterAnimal
{
public:
	//char filler_Fish[UNKNOW_SIZE];
public:
	virtual ~Fish();
	//virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
	virtual void normalTick();
	virtual void startRiding(Actor&);
	virtual void playerTouch(Player&);
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void createAIGoals();
public:
	Fish(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
