/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;
class Monster;

class Slime
 : public Mob
// : public Actor
// : public Monster
{
public:
	//char filler_Slime[UNKNOW_SIZE];
public:
	virtual ~Slime();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	virtual void remove();
	virtual void normalTick();
	virtual void getShadowRadius() const;
	virtual void playerTouch(Player&);
	virtual void findAttackTarget();
	virtual void onSynchedDataUpdate(int);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void aiStep();
	virtual void checkSpawnRules(bool);
	virtual void _getWalkTargetValue(BlockPos const&);
	virtual void useNewAi() const;
	virtual void getExperienceReward() const;
	virtual void canDealDamage();
	virtual void getSquishSound();
	virtual void setSlimeSize(int);
	virtual void doPlayJumpSound();
	virtual void doPlayLandSound();
	virtual void playJumpSound();
	virtual void playLandSound();
	virtual void decreaseSquish();
	virtual void createChild(int);
public:
	Slime(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getSquishValue() const;
	void getOldSquishValue() const;
	void getSlimeSize() const;
	void justJumped();
	void justLanded();
	void _getRandomSeedFromSlimeChunk(ChunkPos);
	void getTargetSquish() const;
};
