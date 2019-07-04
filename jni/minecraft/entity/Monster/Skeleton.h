/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "WitherBoss.h"

class Mob;
class Actor;
class Monster;
class HumanoidMonster;

class Skeleton
 : public Mob
// : public Actor
// : public Monster
// : public HumanoidMonster
{
class SkeletonType;
public:
	//char filler_Skeleton[UNKNOW_SIZE];
public:
	virtual ~Skeleton();
	virtual void normalTick();
	virtual void getRidingHeight();
	virtual void setTarget(Actor*);
	//virtual void getDebugText(std::vector<std::string, std::allocator<std::string> >&);
	virtual void die(ActorDamageSource const&);
	virtual void doHurtTarget(Actor*);
	virtual void useNewAi() const;
public:
	Skeleton(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void setWitherParent(WitherBoss*);
	void setSkeletonType(Skeleton::SkeletonType);
	void getSkeletonType() const;
public:
	static Skeleton * SPEED_MODIFIER_ATTACK_UUID;
};
