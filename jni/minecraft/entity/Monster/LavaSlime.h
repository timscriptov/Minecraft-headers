/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"
#include "Slime.h"

class Mob;
class Actor;

class LavaSlime : public Mob, public Actor, public Slime, public Monster
{
public:
	//char filler_LavaSlime[UNKNOW_SIZE];
public:
	virtual ~LavaSlime();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	virtual void isInLava() const;
	virtual void getBrightness(float) const;
	virtual void isOnFire() const;
	virtual void checkSpawnRules(bool);
	virtual void getArmorValue();
	virtual void jumpFromGround();
	virtual void canDealDamage();
	virtual void doPlayLandSound();
	virtual void decreaseSquish();
	virtual void createChild(int);
public:
	LavaSlime(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
