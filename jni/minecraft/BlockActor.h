/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class DataLoadHelper;
class UIProfanityContext;
class LevelChunk;
class BlockActorType;
class BlockActorRendererId;
class AABB;

class BlockActor
{
public:
	//char filler_BlockActor[UNKNOW_SIZE];
public:
	virtual ~BlockActor();
	virtual void load(Level&, CompoundTag const&, DataLoadHelper&);
	virtual void save(CompoundTag&) const;
	virtual void saveItemInstanceData(CompoundTag&);
	virtual void saveBlockData(CompoundTag&, BlockSource&) const;
	virtual void loadBlockData(CompoundTag const&, BlockSource&, DataLoadHelper&);
	virtual void onCustomTagLoadDone(BlockSource&);
	virtual void tick(BlockSource&);
	virtual void isFinished();
	virtual void onChanged(BlockSource&);
	virtual void isMovable(BlockSource&);
	virtual void isCustomNameSaved();
	virtual void getUpdatePacket(BlockSource&);
	virtual void onPlace(BlockSource&);
	virtual void onUpdatePacket(CompoundTag const&, BlockSource&);
	virtual void onMove();
	virtual void onRemoved(BlockSource&);
	virtual void triggerEvent(int, int);
	virtual void clearCache();
	virtual void onNeighborChanged(BlockSource&, BlockPos const&);
	virtual void getShadowRadius(BlockSource&) const;
	virtual void hasAlphaLayer() const;
	virtual void getCrackEntity(BlockSource&, BlockPos const&);
	//virtual void getDebugText(std::vector<std::string, std::allocator<std::string> >&, BlockPos const&);
	virtual void getCustomName() const;
	virtual void getFilteredCustomName(UIProfanityContext const&);
	virtual void getName() const;
	virtual void getImmersiveReaderText(BlockSource&);
	virtual void getRepairCost() const;
	virtual void getOwningPiston(BlockSource&);
	virtual void getContainer();
	virtual void getDeletionDelayTimeSeconds() const;
	virtual void onChunkLoaded(LevelChunk&);
	virtual void onChunkUnloaded(LevelChunk&);
public:
	BlockActor(BlockActorType, BlockPos const&, std::string const&);
	void isType(BlockActorType) const;
	void getType() const;
	void getPosition() const;
	void isInWorld() const;
	void getRendererId() const;
	void getAABB() const;
	void distanceToSqr(Vec3 const&);
	void getBlock() const;
	void getEntityTerrainInterlockData();
	void canRenderCustomName() const;
	void getEntityTerrainInterlockDataConst() const;
	void setChanged();
	void isType(BlockActor&, BlockActorType);
	void getDisplayName() const;
	void setCustomName(std::string const&);
	void _resetAABB();
	void loadStatic(Level&, CompoundTag const&, DataLoadHelper&);
	void setMovable(bool);
	void stopDestroy();
	void setRendererId(BlockActorRendererId);
	void initBlockEntities();
	void setClientSideOnly(bool);
	void setCustomNameSaved(bool);
	void assignBlockIfNotAssigned(BlockSource&);
	void setBB(AABB);
	void setId(BlockActorType, std::string const&);
	void moveTo(BlockPos const&);
	void shutdown();
	void isClientSideOnly() const;
public:
	static BlockActor * mClassIdMap;
	static BlockActor * mIdClassMap;
};
