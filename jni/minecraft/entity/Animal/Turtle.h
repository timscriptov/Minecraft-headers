/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Animal.h"

class Actor;
class Mob;

class Turtle : public Mob, public Actor, public Animal
{
public:
	//char filler_Turtle[UNKNOW_SIZE];
public:
	virtual ~Turtle();
	virtual void normalTick();
	virtual void getShadowRadius() const;
	virtual void onLightningHit();
	virtual void die(ActorDamageSource const&);
	virtual void _getWalkTargetValue(BlockPos const&);
	virtual void getExperienceReward() const;
public:
	Turtle(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
