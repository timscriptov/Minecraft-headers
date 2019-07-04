/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;
class Animal;

class PolarBear
 : public Mob
// : public Actor
// : public Animal
{
public:
	//char filler_PolarBear[UNKNOW_SIZE];
public:
	virtual ~PolarBear();
	virtual void normalTick();
	virtual void getExperienceReward() const;
public:
	PolarBear(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getStandingAnimationScale(float);
public:
	static PolarBear * STAND_ANIMATION_TICKS;
};
