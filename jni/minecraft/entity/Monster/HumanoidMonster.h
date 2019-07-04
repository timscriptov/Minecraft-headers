/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"

class Mob;
class Actor;

class HumanoidMonster : public Mob, public Actor, public Monster
{
public:
	//char filler_HumanoidMonster[UNKNOW_SIZE];
public:
	virtual ~HumanoidMonster();
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void doHurtTarget(Actor*);
	virtual void getExperienceReward() const;
public:
	HumanoidMonster(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
public:
	static HumanoidMonster * MAX_PICKUP_LOOT_CHANCE;
	static HumanoidMonster * MAX_WEARING_ARMOR_CHANCE;
	static HumanoidMonster * MAX_ENCHANTED_ARMOR_CHANCE;
	static HumanoidMonster * MAX_ENCHANTED_WEAPON_CHANCE;
};
