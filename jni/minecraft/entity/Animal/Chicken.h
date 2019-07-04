/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;
class Animal;

class Chicken
 : public Mob
// : public Actor
// : public Animal
{
public:
	//char filler_Chicken[UNKNOW_SIZE];
public:
	virtual ~Chicken();
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void _playStepSound(BlockPos const&, Block const&);
	virtual void aiStep();
	virtual void useNewAi() const;
	virtual void getExperienceReward() const;
public:
	Chicken(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getFlapSpeed() const;
	void getOFlapSpeed() const;
	void getFlap() const;
	void getOFlap() const;
};
