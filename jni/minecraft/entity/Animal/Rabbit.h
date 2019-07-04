/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;
class Animal;

class Rabbit
 : public Mob
// : public Actor
// : public Animal
{
public:
	//char filler_Rabbit[UNKNOW_SIZE];
public:
	virtual ~Rabbit();
	virtual void onSynchedDataUpdate(int);
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void newServerAiStep();
public:
	Rabbit(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void setRabbitType(int);
	void getJumpCompletion(float);
	void getRandomRabbitType();
	void eatCarrot();
	void readyToEat() const;
	void getRabbitType() const;
	void wantsMoreFood() const;
};