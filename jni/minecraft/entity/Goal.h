/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Goal
{
public:
	//char filler_Goal[UNKNOW_SIZE];
public:
	virtual ~Goal();
	virtual void canContinueToUse();
	virtual void canBeInterrupted();
	virtual void start();
	virtual void stop();
	virtual void tick();
	virtual void isTargetGoal() const;
	//virtual void onPlayerDimensionChanged(Player*, AutomaticID<Dimension, int>);
public:
	Goal();
	void getRequiredControlFlags() const;
	void setRequiredControlFlags(int);
};
