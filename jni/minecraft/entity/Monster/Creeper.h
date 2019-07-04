/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"

class Mob;
class Actor;

class Creeper : public Mob, public Actor, public Monster
{
public:
	//char filler_Creeper[UNKNOW_SIZE];
public:
	virtual ~Creeper();
	virtual void normalTick();
	virtual void die(ActorDamageSource const&);
	virtual void onSizeUpdated();
	virtual void useNewAi() const;
public:
	Creeper(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getSwellDir();
	void getSwelling(float) const;
	void _setSwellDir(int);
	void _setOldSwell(int);
	void _setSwell(int);
	void _getOldSwell() const;
	void _getSwell() const;
};
