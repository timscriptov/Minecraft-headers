/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class BlockTickingQueue;
class Brightness;
class Bounds;
class TickingQueueType;
class BlockVolume;

class BlockSource
{
public:
	//char filler_BlockSource[UNKNOW_SIZE];
public:
	virtual ~BlockSource();
public:
	BlockSource(Level&, Dimension&, ChunkSource&, bool, bool);
	void getLevel();
	void getMaterial(BlockPos const&) const;
	void fetchEntities2(ActorType, AABB const&, bool);
	void getBlock(BlockPos const&) const;
	void setTickingQueue(BlockTickingQueue&);
	void setRandomTickingQueue(BlockTickingQueue&);
	void getBiome(BlockPos const&);
	void setBlock(BlockPos const&, Block const&, int, ActorBlockSyncMessage const*);
	void getChunkAt(BlockPos const&) const;
	void getHeightmap(BlockPos const&) const;
	void getDimension();
	void isEmptyBlock(BlockPos const&);
	void setExtraBlock(BlockPos const&, Block const&, int);
	void getBlockEntity(BlockPos const&);
	void isEmptyWaterBlock(BlockPos const&) const;
	void clip(Vec3 const&, Vec3 const&, bool, bool, int, bool, bool);
	void fetchEntities(Actor*, AABB const&);
	void blockEvent(int, int, int, int, int);
	void fireBlockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
	void hasBlock(BlockPos const&) const;
	void fireAreaChanged(BlockPos const&, BlockPos const&);
	void getLightColor(BlockPos const&, Brightness);
	void fetchCollisionShapes(AABB const&, float*, bool, Actor*);
	void getBrightnessPair(BlockPos const&) const;
	void getChunkSource();
	void getLiquidBlock(BlockPos const&);
	void getBlock(int, int, int) const;
	void isConsideredSolidBlock(BlockPos const&);
	void isSolidBlockingBlockAndNotSignalSource(BlockPos const&);
	void getExtraBlock(BlockPos const&) const;
	void getWaterColor(BlockPos const&) const;
	void canProvideSupport(BlockPos const&, unsigned char, BlockSupportType) const;
	void isSolidBlockingBlock(BlockPos const&) const;
	void getChunk(ChunkPos const&) const;
	void getRawBrightness(BlockPos const&, bool, bool) const;
	void getDimensionId() const;
	//void fetchBlockEntities(AABB const&, std::vector<BlockActor*, std::allocator<BlockActor*> >&);
	void isPositionUnderLiquid(Vec3 const&, MaterialType);
	void getBrightness(BlockPos const&) const;
	void checkBlockPermissions(Actor&, BlockPos const&, unsigned char, ItemStack const&, bool);
	void getVisualLiquidHeight(Vec3 const&);
	void checkBlockDestroyPermissions(Actor&, BlockPos const&, ItemStack const&, bool);
	void addListener(BlockSourceListener&);
	void removeListener(BlockSourceListener&);
	void isEmptyBlock(int, int, int);
	void mayPlace(Block const&, BlockPos const&, unsigned char, Actor*, bool);
	void getLevel() const;
	void getDimensionConst() const;
	void isInWall(Vec3 const&);
	void hasChunksAt(BlockPos const&, int);
	void getAllocatedHeightAt(BlockPos const&);
	void hasChunksAt(Bounds const&);
	void fetchEntities(ActorType, AABB const&, Actor*);
	void canSeeSky(BlockPos const&) const;
	void areChunksFullyLoaded(BlockPos const&, int);
	void findNextTopSolidBlockUnder(BlockPos&);
	void fetchAABBs(AABB const&, bool);
	void hasChunksAt(AABB const&);
	void hasBorderBlock(BlockPos);
	void containsMaterial(AABB const&, MaterialType);
	void containsAnyLiquid(AABB const&);
	void containsFireBlock(AABB const&);
	void fireEntityChanged(Actor&);
	void getAboveTopSolidBlock(BlockPos const&, bool, bool);
	void fetchActors(ActorDefinitionIdentifier const&, AABB const&);
	void fetchNearestEntityOfType(Actor*, AABB const&, ActorType);
	void getDimension() const;
	void getHeightmapPos(BlockPos const&) const;
	void findNextTopSolidBlockAbove(BlockPos&);
	void isSolidBlockingBlock(int, int, int) const;
	void containsAnySolidBlocking(AABB const&);
	void removeBlock(BlockPos const&);
	void setBlock(int, int, int, Block const&, int);
	void getMaterial(int, int, int) const;
	void isOnTopOfBlock(AABB const&, std::function<bool (Block const&)>);
	void isUnobstructedByEntities(AABB const&, Actor*);
	void canSeeSkyFromBelowWater(BlockPos const&);
	void containsLiquid(AABB const&, MaterialType);
	void getAboveTopSolidBlock(int, int, bool, bool);
	void findNextSpawnBlockUnder(BlockPos&, MaterialType);
	void removeBlock(int, int, int);
	void getConstBiome(BlockPos const&) const;
	void allowsRunes(BlockPos const&);
	void blockEvent(BlockPos const&, int, int);
	void setWaterColor(int, BlockPos const&, int);
	void getHeightmap(int, int);
	void fireBlockEntityChanged(BlockActor&);
	void updateNeighborsAt(BlockPos const&);
	void setBlock(BlockPos const&, Block const&, int, std::shared_ptr<BlockActor>, ActorBlockSyncMessage const*);
	void getBlockEntity(int, int, int);
	void addToTickingQueue(BlockPos const&, Block const&, int, int);
	void removeBlockEntity(BlockPos const&);
	void isInstaticking(BlockPos const&) const;
	void clearDeletedEntities();
	void updateNeighborsAtExceptFromFacing(BlockPos const&, BlockPos const&, int);
	void addToRandomTickingQueue(BlockPos const&, Block const&, int, int);
	void hasTickNextTick(BlockPos const&) const;
	void getGrassColor(BlockPos const&) const;
	void tryGetBiome(BlockPos const&) const;
	void getPublicSource() const;
	void setBlockNoUpdate(int, int, int, Block const&);
	void isUnderWater(Vec3 const&, Block const&);
	void containsAny(BlockPos const&, BlockPos const&);
	void getTopBlock(int, int&, int);
	void hasChunksAt(BlockPos const&, BlockPos const&);
	void hasChunksAt(int, int, int, int);
	void addVoidFloor(AABB const&);
	void _blockChanged(BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
	//void fetchEntities(buffer_span<Actor*>, AABB const&);
	void setGrassColor(int, BlockPos const&, int);
	void fireBlockEvent(int, int, int, int, int);
	void getSeenPercent(Vec3 const&, AABB const&);
	void isOnTopOfBlock(AABB const&, BlockLegacy const&);
	void setBorderBlock(BlockPos const&, bool);
	void setLiquidBlock(BlockPos const&, Block const&, bool, int);
	void neighborChanged(BlockPos const&, BlockPos const&);
	void _getLiquidHeight(BlockPos const&, MaterialType, bool);
	void getRawBrightness(int, int, int, bool);
	void getWritableChunk(ChunkPos const&);
	void onChunkDiscarded(LevelChunk&);
	void setBlockNoUpdate(BlockPos const&, Block const&);
	void updateNeighborsAt(BlockPos const&, BlockPos const&);
	void _addToTickingQueue(BlockPos const&, Block const&, int, int, TickingQueueType);
	void fetchBlockEntities(AABB const&);
	void isTouchingMaterial(BlockPos const&, MaterialType);
	void _getBlockPermissions(BlockPos const&, bool);
	void clearCachedLastChunk();
	void isNearUnloadedChunks(ChunkPos const&);
	void fireBrightnessChanged(BlockPos const&);
	void addUnloadedChunksAABBs(AABB const&);
	void containsAnyBlockOfType(BlockPos const&, BlockPos const&, Block const&);
	void isConsideredSolidBlock(int, int, int);
	void removeFromTickingQueue(BlockPos const&, Block const&);
	void _removeFromTickingQueue(BlockPos const&, Block const&, TickingQueueType);
	void fetchNearestEntityOfType(Actor*, Vec3 const&, float, ActorType);
	//void isUnobstructedByEntities(AABB const&, buffer_span<Actor*>);
	void generateUnloadedChunkAABB(ChunkPos const&);
	void _fetchBorderBlockCollisions(AABB const&, Actor*, bool);
	void fetchNearestEntityNotOfType(Actor*, Vec3 const&, float, ActorType);
	void removeFromRandomTickingQueue(BlockPos const&, Block const&);
	void fireBlockEntityAboutToBeRemoved(std::shared_ptr<BlockActor>);
	void hasBlock(int, int, int);
	void setBlock(int, int, int, Block const&, int, std::shared_ptr<BlockActor>);
	void getChunkAt(int, int, int) const;
	void fetchBlocks(BlockPos const&, BlockVolume&) const;
	void _hasChunksAt(Bounds const&) const;
	void ticksFromNow(BlockPos const&, TickingQueueType, int) const;
	void _getSkyDarken() const;
	void getLevelConst() const;
	void isOwnerThread() const;
	void hasTickNextTick(BlockPos const&, TickingQueueType) const;
	void _getTickingQueue(BlockPos const&, TickingQueueType) const;
	void shouldFireEvents(LevelChunk&) const;
	void countBlocksOfType(BlockLegacy const&, BlockPos const&, BlockPos const&, unsigned int) const;
	void areAllChunksLoaded(BlockPos const&, BlockVolume&) const;
	void hasTickInCurrentTick(BlockPos const&) const;
	void hasTickInCurrentTick(BlockPos const&, TickingQueueType) const;
	void getHardcodedEntitySpawn(BlockPos const&, ActorType) const;
	void getNextTickUpdateForPos(BlockPos const&, TickingQueueType, Tick&) const;
	void getBlock(BlockPos const&, unsigned int) const;
	void getChunk(int, int) const;
	void canSeeSky(int, int, int) const;
};
