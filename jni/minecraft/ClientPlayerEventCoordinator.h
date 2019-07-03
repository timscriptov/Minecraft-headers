/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class ClientPlayerEventCoordinator
{
public:
	//char filler_ClientPlayerEventCoordinator[UNKNOW_SIZE];
public:
	void sendPlayerCreated(LocalPlayer&);
	void sendPlayerInput(Player&, MoveInputHandler&);
	void sendLocalPlayerDeath(IClientInstance&, LocalPlayer&);
	void sendPlayerStopRiding(Player&, bool, bool, bool);
	void sendPlayerStartRiding(Player&, Actor&);
	void sendLocalPlayerRespawn(IClientInstance&, LocalPlayer&);
	void sendPlayerTurn(Player&, Vec2&);
	void sendStartDestroyBlock(Player&, BlockPos const&, unsigned char&);
	void sendPlayerDestroyedBlock(Player&, BlockLegacy const&);
};