/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "../Actor.h"
#include "../Mob.h"

class Squid
 : public Mob
// : public Actor
{
public:
	//char filler_Squid[UNKNOW_SIZE];
public:
	virtual ~Squid();
	virtual void handleEntityEvent(ActorEvent, int);
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void getAmbientSoundPostponeTicks();
	virtual void getJumpPower() const;
	virtual void travel(float, float, float);
	virtual void aiStep();
	virtual void checkSpawnRules(bool);
	virtual void checkSpawnObstruction() const;
	virtual void getExperienceReward() const;
public:
	Squid(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getXBodyRot() const;
	void getZBodyRot() const;
	void getXBodyRotO() const;
	void getZBodyRotO() const;
	void getTentacleAngle() const;
	void getOldTentacleAngle() const;
	void setXBodyRot(float&);
	void setZBodyRot(float&);
	void setXBodyRotO(float&);
	void setZBodyRotO(float&);
	void _randomInkDir();
	void spawnInkParticles();
	void getTy();
	void setTx(float);
	void setTy(float);
	void setTz(float);
};
