/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class VanillaClientGameplayEventListener
// : public ActorEventListener
// : public non-virtual thunk to VanillaClientGameplayEventListener
// : public PlayerEventListener
{
public:
	//char filler_VanillaClientGameplayEventListener[UNKNOW_SIZE];
public:
	virtual ~VanillaClientGameplayEventListener();
	virtual void onPlayerInput(Player&, MoveInputHandler&);
	virtual void onPlayerTick(Player&);
	virtual void onLocalPlayerDeath(IClientInstance&, LocalPlayer&);
	virtual void onPlayerStartRiding(Player&, Actor&);
	virtual void onPlayerStopRiding(Player&, bool, bool, bool);
public:
	void _setRideInputFor(IClientInstance&, Actor&);
};
