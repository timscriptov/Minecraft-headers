/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Animal.h"

class Actor;
class Mob;

class Panda : public Mob, public Actor, public Animal
{
public:
	//char filler_Panda[UNKNOW_SIZE];
public:
	virtual ~Panda();
	virtual void normalTick();
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void onSizeUpdated();
	virtual void getAmbientSound();
	virtual void setTransitioningSitting(bool);
	virtual void getExperienceReward() const;
public:
	Panda(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getSitAmount(float) const;
	void getRollCounter() const;
	void getSneezeCounter() const;
	void getUnhappyCounter() const;
	void getLieOnBackAmount(float) const;
	void updateLaying();
	void updateSitting();
	void updateRollAmount();
	void isSneezing() const;
	void getRollAmount(float) const;
};
