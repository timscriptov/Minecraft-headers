/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;
class WaterAnimal;

class Dolphin
 : public Mob
// : public Actor
// : public WaterAnimal
{
public:
	//char filler_Dolphin[UNKNOW_SIZE];
public:
	virtual ~Dolphin();
	//virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
	virtual void canBePulledIntoVehicle() const;
	virtual void aiStep();
	virtual void createAIGoals();
	virtual void _getWalkTargetValue(BlockPos const&);
	virtual void getExperienceReward() const;
public:
	Dolphin(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
