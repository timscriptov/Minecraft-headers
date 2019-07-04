/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;
class Monster;

class Guardian
 : public Mob
// : public Actor
// : public Monster
{
public:
	//char filler_Guardian[UNKNOW_SIZE];
public:
	virtual ~Guardian();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	//virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
	virtual void canSeeInvisible() const;
	virtual void setTarget(Actor*);
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void onSizeUpdated();
	virtual void getAmbientSoundPostponeTicks();
	virtual void aiStep();
	virtual void checkSpawnRules(bool);
	virtual void getMaxHeadXRot();
	virtual void getExperienceReward() const;
	virtual void isDarkEnoughToSpawn() const;
public:
	Guardian(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getAttackAnimationScale(float);
	void getTargetEntity() const;
	void isElder() const;
	void isElderGhost() const;
	void getEyeTarget();
	void getTailAnimation(float);
	void getSpikesAnimation(float);
	void setElderGhost();
	void getMoveEyeVector();
	void setElder(bool);
	void setAttackTime(int);
	void getAttackDuration();
	void makeStepSound();
	void getWalkTargetValue(BlockPos const&);
	void registerLoopingSounds();
public:
	static Guardian * ATTACK_TIME;
	static Guardian * FIRST_DAMAGE_TIME;
};
