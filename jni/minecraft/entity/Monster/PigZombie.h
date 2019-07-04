/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"
#include "Zombie.h"
#include "HumanoidMonster.h"

class Mob;
class Actor;

class PigZombie : public Zombie, public Mob, public Actor, public Monster, public HumanoidMonster
{
public:
	//char filler_PigZombie[UNKNOW_SIZE];
public:
	virtual ~PigZombie();
	virtual void normalTick();
	virtual void findAttackTarget();
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void checkSpawnRules(bool);
	virtual void getAttackTime();
	virtual void getExperienceReward() const;
public:
	PigZombie(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void _alert(Mob&);
public:
	static PigZombie * SPEED_MODIFIER_ATTACK_UUID;
};
