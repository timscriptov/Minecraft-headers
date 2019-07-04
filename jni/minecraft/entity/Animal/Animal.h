/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;

class Animal : public Mob, public Actor
{
public:
	//char filler_Animal[UNKNOW_SIZE];
public:
	virtual ~Animal();
	virtual void isInvulnerableTo(ActorDamageSource const&) const;
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void onSizeUpdated();
	virtual void getAmbientSoundPostponeTicks();
	virtual void _getWalkTargetValue(BlockPos const&);
	virtual void getExperienceReward() const;
public:
	Animal(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
