/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"
#include "HumanoidMonster.h"

class Mob;
class Actor;

class EvocationIllager : public Mob, public Actor, public Monster, public HumanoidMonster
{
public:
	//char filler_EvocationIllager[UNKNOW_SIZE];
public:
	virtual ~EvocationIllager();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	virtual void getRidingHeight();
	virtual void canExistInPeaceful() const;
	virtual void die(ActorDamageSource const&);
	virtual void aiStep();
	virtual void isAlliedTo(Mob*);
	virtual void getArmorValue();
	virtual void useNewAi() const;
	virtual void getExperienceReward() const;
public:
	EvocationIllager(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
