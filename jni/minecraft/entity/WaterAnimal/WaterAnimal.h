/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;

class WaterAnimal : public Mob, public Actor
{
public:
	//char filler_WaterAnimal[UNKNOW_SIZE];
public:
	virtual ~WaterAnimal();
	virtual void aiStep();
	virtual void checkSpawnRules(bool);
	virtual void useNewAi() const;
public:
	WaterAnimal(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
