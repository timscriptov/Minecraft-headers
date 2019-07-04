/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Actor;
class Mob;

class Bat : public Mob, public Actor
{
public:
	//char filler_Bat[UNKNOW_SIZE];
public:
	virtual ~Bat();
	virtual void normalTick();
	virtual void checkFallDamage(float, bool);
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void pushActors();
	virtual void useNewAi() const;
	virtual void newServerAiStep();
	virtual void getExperienceReward() const;
public:
	Bat(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
