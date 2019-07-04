/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Animal/Horse.h"

class Goal;

class SkeletonHorseTrapGoal
// : public Goal
{
public:
	//char filler_SkeletonHorseTrapGoal[UNKNOW_SIZE];
public:
	virtual ~SkeletonHorseTrapGoal();
	virtual void canUse();
	virtual void start();
	virtual void tick();
	virtual void appendDebugInfo(std::string&) const;
public:
	SkeletonHorseTrapGoal(Horse&, int, float);
	void _createHorse(Difficulty const&);
	void _createSkeleton(Difficulty const&, Horse const&);
	void _getClosestPlayer() const;
};
