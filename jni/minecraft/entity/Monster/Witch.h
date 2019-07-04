/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"
#include "HumanoidMonster.h"

class Mob;
class Actor;

class Witch : public Mob, public Actor, public Monster, public HumanoidMonster
{
public:
	//char filler_Witch[UNKNOW_SIZE];
public:
	virtual ~Witch();
	virtual void canAttack(Actor*, bool) const;
	virtual void performRangedAttack(Actor&, float);
	virtual void handleEntityEvent(ActorEvent, int);
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void onSizeUpdated();
	virtual void aiStep();
	virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int);
public:
	Witch(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void isUsingItem();
	void setUsingItem(bool);
public:
	static Witch * SPEED_MODIFIER_DRINKING;
	static Witch * SPEED_MODIFIER_DRINKING_UUID;
};
