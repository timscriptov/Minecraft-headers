/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class GameMode
{
public:
	//char filler_GameMode[UNKNOW_SIZE];
public:
	virtual ~GameMode();
	virtual void startDestroyBlock(BlockPos const&, unsigned char, bool&);
	virtual void destroyBlock(BlockPos const&, unsigned char);
	virtual void continueDestroyBlock(BlockPos const&, unsigned char, bool&);
	virtual void stopDestroyBlock(BlockPos const&);
	virtual void startBuildBlock(BlockPos const&, unsigned char);
	virtual void buildBlock(BlockPos const&, unsigned char);
	virtual void continueBuildBlock(BlockPos const&, unsigned char);
	virtual void stopBuildBlock();
	virtual void tick();
	virtual void getPickRange(InputMode const&, bool);
	virtual void useItem(ItemStack&);
	virtual void useItemOn(ItemStack&, BlockPos const&, unsigned char, Vec3 const&, Block const*);
	virtual void interact(Actor&, Vec3 const&);
	virtual void attack(Actor&);
	virtual void releaseUsingItem();
	virtual void setTrialMode(bool);
	virtual void isInTrialMode();
	virtual void registerUpsellScreenCallback(std::function<void (bool)>);
public:
	GameMode(Player&);
	void getDestroyBlockPos();
	void getContinueFacing() const;
	void getNextContinuePos() const;
	void hasStartedBuilding() const;
	void getContinueDirection() const;
	void getLastBuiltBlockPos() const;
	void hasContinueDirection() const;
	void isLastBuildBlockSnappable() const;
	void getDestroyProgress();
	void baseUseItem(ItemStack&);
	void getOldDestroyProgress();
	void getDestroyRate(Block const&);
	void _canDestroy(BlockPos const&, unsigned char);
	void _canUseBlock(Block const&);
	void getHitProgress(float);
	void toggleLongPickRange();
	void _creativeDestroyBlock(BlockPos const&, unsigned char);
	void _destroyBlockInternal(BlockPos const&, unsigned char);
	void _releaseUsingItemInternal();
	void _calculatePlacePos(BlockPos const&, unsigned char&) const;
public:
	static GameMode * PICKRANGE_MOUSE;
	static GameMode * PICKRANGE_GAMEPAD;
	static GameMode * PICKRANGE_VR_CREATIVE;
	static GameMode * PICKRANGE_VR_SURVIVAL;
	static GameMode * PICKRANGE_CLIENT_MAXIMUM;
	static GameMode * PICKRANGE_SERVER_MAXIMUM;
	static GameMode * PICKRANGE_TOUCH_CREATIVE;
	static GameMode * PICKRANGE_TOUCH_SURVIVAL;
};
