/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;
class Animal;

class Wolf
 : public Mob
// : public Actor
// : public Animal
{
public:
	//char filler_Wolf[UNKNOW_SIZE];
public:
	virtual ~Wolf();
	virtual void normalTick();
	virtual void addRider(Actor&);
	virtual void setSitting(bool);
	virtual void handleEntityEvent(ActorEvent, int);
	virtual void load(CompoundTag const&, DataLoadHelper&);
	virtual void onSynchedDataUpdate(int);
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void getAmbientSound();
	virtual void isAlliedTo(Mob*);
	virtual void doHurtTarget(Actor*);
	virtual void onBorn(Actor&, Actor&);
	virtual void newServerAiStep();
public:
	Wolf(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getTailAngle();
	void getHeadRollAngle(float);
	void getShakeAnim() const;
	void isShaking() const;
	void getWetShade(float);
	void setInterested(bool);
	void _avoidSnowBury();
	void _updateTintColor();
	void getBodyRollAngle(float, float);
	void setWet(bool);
	void isInterested() const;
	void isWet() const;
	void _isHurt() const;
};
