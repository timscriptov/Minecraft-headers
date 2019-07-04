/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

//#include "../Mob.h"
//#include "../Actor.h"

class Zombie;
class Mob;
class Actor;
class Monster;
class HumanoidMonster;
class Profession;

class ZombieVillager
// : public Mob
// : public Actor
// : public Monster
// : public Zombie
// : public HumanoidMonster
{
public:
	//char filler_ZombieVillager[UNKNOW_SIZE];
public:
	virtual ~ZombieVillager();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	virtual void handleEntityEvent(ActorEvent, int);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
public:
	ZombieVillager(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getProfession();
	void setProfession(Profession);
	void setSpawnedFromVillage();
};
