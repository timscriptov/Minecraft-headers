/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Mob;
class Actor;
class Monster;
class HumanoidMonster;

class VindicationIllager
 : public Mob
// : public Actor
// : public Monster
// : public HumanoidMonster
{
public:
	//char filler_VindicationIllager[UNKNOW_SIZE];
public:
	//Virtual Tables
	virtual ~VindicationIllager();
	virtual void getRidingHeight();
	virtual void canExistInPeaceful() const;
	virtual void _getWalkTargetValue(BlockPos const&);
	virtual void useNewAi() const;
public:
	VindicationIllager(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};