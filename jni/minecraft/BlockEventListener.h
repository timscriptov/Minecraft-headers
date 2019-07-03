/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "PistonBlockActor.h"

class NewBlockID;

class BlockEventListener
{
public:
	//char filler_BlockEventListener[UNKNOW_SIZE];
public:
	void onBlockExploded(BlockPos const&, Block const&, Actor*);
	void onBlockModified(BlockPos const&, Block const&, Block const&);
	void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState);
	void onBlockInteractedWith(Player&, BlockPos const&);
	void onUnknownBlockReceived(Level&, NewBlockID const&, unsigned short);
	void onBlockDestroyedByPlayer(Player&, std::string, BlockPos const&);
	void onBlockDestructionStarted(Player&, BlockPos const&);
	void onBlockDestructionStopped(Player&, BlockPos const&, int);
};
