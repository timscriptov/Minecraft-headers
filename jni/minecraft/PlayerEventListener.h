/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class PlayerActionType;

class PlayerEventListener
{
public:
	//char filler_PlayerEventListener[UNKNOW_SIZE];
public:
	void onPlayerHurt(Player&, ActorDamageSource&);
	void onPlayerMove(Player&);
	void onPlayerTurn(Player&, Vec2&);
	void onPlayerAction(Player&, PlayerActionType, BlockPos const&, int);
	void onPlayerCreated(LocalPlayer&);
	void onPlayerOnGround(Player&);
	void onPlayerNamedItem(Player&, ItemDescriptor const&);
	void onPlayerTeleported(Player&);
	void onPlayerCraftedItem(Player&, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool);
	void onStartDestroyBlock(Player&, BlockPos const&, unsigned char&);
	void onLocalPlayerRespawn(IClientInstance&, LocalPlayer&);
	void onPlayerItemEquipped(Player&, ItemInstance const&, int);
	void onPlayerAttackedActor(Player&, Actor&);
	void onPlayerEnchantedItem(Player&, ItemStack const&, ItemEnchants const&);
	void onPlayerEquippedArmor(Player&, ItemDescriptor const&);
	void onPlayerDestroyedBlock(Player&, BlockLegacy const&);
	void onPlayerDestroyedBlock(Player&, int, int, int);
	void onPlayerItemUseInteraction(Player&, ItemInstance const&);
	void onPlayerItemPlaceInteraction(Player&, ItemInstance const&);
	void onPlayerTick(Player&);
	void onPlayerInput(Player&, MoveInputHandler&);
	void onLocalPlayerDeath(IClientInstance&, LocalPlayer&);
	void onPlayerStopRiding(Player&, bool, bool, bool);
	void onPlayerStartRiding(Player&, Actor&);
};
