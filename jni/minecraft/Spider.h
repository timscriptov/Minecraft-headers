/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Mob.h"
#include "Actor.h"
#include "Monster.h"

class Spider
 : public Mob
// : public Actor
// : public Monster
{
public:
	//char filler_Spider[UNKNOW_SIZE];
public:
	virtual ~Spider();
	virtual void normalTick();
	virtual void makeStuckInBlock(float);
	virtual void getShadowRadius() const;
	virtual void findAttackTarget();
	virtual void shouldRender() const;
	virtual void canBeAffected(MobEffectInstance const&) const;
	virtual void _playStepSound(BlockPos const&, Block const&);
	virtual void aiStep();
	virtual void useNewAi() const;
	virtual void getModelScale() const;
	virtual void getSpiderType() const;
public:
	Spider(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
