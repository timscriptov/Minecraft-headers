/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Mob.h"
#include "Actor.h"
#include "Monster.h"
#include "HumanoidMonster.h"

class VariantParameterList;

class Zombie
 : public Mob
// : public Actor
// : public Monster
// : public HumanoidMonster
{
class ZombieType;
public:
	//char filler_Zombie[UNKNOW_SIZE];
public:
	virtual ~Zombie();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	virtual void getRidingHeight();
	virtual void die(ActorDamageSource const&);
	virtual void checkSpawnRules(bool);
	virtual void getArmorValue();
	virtual void useNewAi() const;
	virtual void getExperienceReward() const;
public:
	Zombie(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void setZombieType(Zombie::ZombieType);
	void getZombieType() const;
public:
	static Zombie * SPAWN_BONUS_UUID;
	static Zombie * SPAWN_REINFORCEMENTS_CHANCE;
};
