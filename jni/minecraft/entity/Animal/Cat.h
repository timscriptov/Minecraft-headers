/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Animal.h"

class Actor;
class Mob;

class Cat : public Mob, public Actor, public Animal
{
public:
	//char filler_Cat[UNKNOW_SIZE];
public:
	virtual ~Cat();
	virtual void onTame();
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void getAmbientSound();
	virtual void aiStep();
	virtual void _serverAiMobStep();
public:
	Cat(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getLieOnPlayer();
	void getLieDownAmount(float);
	void updateLieDownAmount();
	void getLieDownAmountTail(float);
public:
	static Cat * SNEAK_SPEED_MOD;
	static Cat * SPRINT_SPEED_MOD;
};
