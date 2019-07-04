/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;

class Monster : public Mob, public Actor
{
public:
	//char filler_Monster[UNKNOW_SIZE];
public:
	virtual ~Monster();
	virtual void normalTick();
	virtual void canExistInPeaceful() const;
	virtual void findAttackTarget();
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void aiStep();
	virtual void checkSpawnRules(bool);
	virtual void shouldDespawn() const;
	virtual void _getWalkTargetValue(BlockPos const&);
	virtual void getExperienceReward() const;
	virtual void isDarkEnoughToSpawn() const;
public:
	Monster(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
