/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class BlockSource;
class BlockPos;
class Block;
class BlockActor;
class ActorBlockSyncMessage;

class BlockSourceListener
{
public:
	//char filler_BlockSourceListener[UNKNOW_SIZE];
public:
	virtual ~BlockSourceListener();
	virtual void onSourceCreated(BlockSource&);
	virtual void onSourceDestroyed(BlockSource&);
	virtual void onAreaChanged(BlockSource&, BlockPos const&, BlockPos const&);
	virtual void onBlockChanged(BlockSource&, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
	virtual void onBrightnessChanged(BlockSource&, BlockPos const&);
	virtual void onBlockEntityChanged(BlockSource&, BlockActor&);
	virtual void onBlockEntityAboutToBeRemoved(BlockSource&, std::shared_ptr<BlockActor>);
	virtual void onEntityChanged(BlockSource&, Actor&);
	virtual void onBlockEvent(BlockSource&, int, int, int, int, int);
};
