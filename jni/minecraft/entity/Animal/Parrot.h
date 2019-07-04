/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;
class Animal;

class Parrot
 : public Mob
// : public Actor
// : public Animal
{
public:
	//char filler_Parrot[UNKNOW_SIZE];
public:
	virtual ~Parrot();
	//virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
	virtual void getInterpolatedRidingPosition(float) const;
	virtual void getShadowRadius() const;
	virtual void setSitting(bool);
	virtual void rideLanded(Vec3 const&, Vec3 const&);
	virtual void isInvulnerableTo(ActorDamageSource const&) const;
	virtual void canBePulledIntoVehicle() const;
	virtual void _playStepSound(BlockPos const&, Block const&);
	virtual void _makeFlySound() const;
	virtual void playAmbientSound();
	virtual void getAmbientSound();
	virtual void aiStep();
	virtual void _getWalkTargetValue(BlockPos const&);
	virtual void useNewAi() const;
	virtual void getExperienceReward() const;
public:
	Parrot(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getFlapSpeed() const;
	void getFlap() const;
	void _getImitatedSound(ActorType);
	void _calculateFlapping();
	void _imitateNearbyMobs();
	void getOFlapSpeed() const;
	void getOFlap() const;
};
