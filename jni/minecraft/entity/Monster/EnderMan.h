/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;
class Monster;

class EnderMan
 : public Mob
// : public Actor
// : public Monster
{
public:
	//char filler_EnderMan[UNKNOW_SIZE];
public:
	virtual ~EnderMan();
	virtual void normalTick();
	virtual void shouldRender() const;
	virtual void canBeAffectedByArrow(MobEffectInstance const&) const;
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void resolveDeathLoot(int, ActorDamageSource const&);
	virtual void getAmbientSound();
	virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
	virtual void aiStep();
	virtual void newServerAiStep();
public:
	EnderMan(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getCarryingBlock();
	void setCarryingBlock(Block const&);
	void shutdown();
	void _teleport();
public:
	static EnderMan * mMayTakeIsSetup;
	static EnderMan * SPEED_MODIFIER_ATTACKING;
	static EnderMan * SPEED_MODIFIER_ATTACKING_UUID;
	static EnderMan * mMayTake;
};