#pragma once
#include <string>
#include <memory>
#include <map>

class Dimension
{
public:
	//Fields
	char filler_Dimension[UNKNOW_SIZE];
public:
	//Virtual Tables
	virtual ~Dimension();
	virtual ~Dimension();
	virtual void onBlockChanged(BlockSource&, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
	virtual void onBlockEvent(BlockSource&, int, int, int, int, int);
	virtual void onNewChunk(BlockSource&, LevelChunk&);
	virtual void onChunkLoaded(LevelChunk&);
	virtual void onLevelDestruction(std::string const&);
	virtual void init();
	virtual void tick();
	virtual void tickRedstone();
	virtual void updateLightRamp();
	virtual void isNaturalDimension() const;
	virtual void isValidSpawn(int, int) const;
	virtual void getFogColor(float) const;
	virtual void getMaxFogEnd() const;
	virtual void getMaxFogStart() const;
	virtual void isFoggyAt(int, int) const;
	virtual void getCloudHeight() const;
	virtual void getDefaultBiome() const;
	virtual void mayRespawn() const;
	virtual void hasGround() const;
	virtual void getSpawnPos() const;
	virtual void getSpawnYPosition() const;
	virtual void hasBedrockFog();
	virtual void getClearColorScale();
	virtual void showSky() const;
	virtual void isDay() const;
	virtual void getSunIntensity(float, Vec3 const&, float) const;
	//pure virtual method
	virtual void deserialize(CompoundTag const&);
	virtual void serialize(CompoundTag&) const;
	virtual void sendBroadcast(Packet const&, Player*);
	virtual void startLeaveGame();
	virtual void getTimeOfDay(int, float) const;
	//pure virtual method
public:
	//Methods
	Dimension(Level&, AutomaticID<Dimension, int>, short, Scheduler&, std::string);
	void setCeiling(bool);
	void setSkylight(bool);
	void setUltraWarm(bool);
	void setBrightnessRamp(unsigned int, float);
	void getLevel() const;
	void getWorldGenerator() const;
	void forEachPlayer(std::function<bool (Player&)>);
	void getChunkSource() const;
	void getId() const;
	void getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD() const;
	void fetchEntity(ActorUniqueID, bool);
	void hasCeiling() const;
	void getWeather() const;
	void getSkyDarken(float) const;
	void getSunriseColor(float) const;
	void getBrightnessRamp() const;
	void getCloudColor(float);
	void getStarBrightness(float);
	void getSkyColor(BlockSource&, BlockPos const&, float) const;
	void getSunAngle(float) const;
	void getMoonPhase() const;
	void getTimeOfDay(float) const;
	void getSkyDarken() const;
	void getSkyColor(Actor const&, float) const;
	void _registerEntity(Actor&);
	void getEntityIdMapConst() const;
	void getVillageManager() const;
	void sendPacketForEntity(Actor const&, Packet const&, Player const*);
	void getEntityIdMap() const;
	void tryAssignNewRegionAt(ChunkPos const&, Actor&);
	void flagEntityforChunkMove(Actor&);
	void distanceToNearestPlayerSqr2D(Vec3);
	void getTickingAreasConst() const;
	void fetchNearestPlayer(Actor&, float);
	void removeActorByID(ActorUniqueID const&);
	void fetchNearestPlayer(float, float, float, float, bool);
	void getMoonBrightness() const;
	void getCircuitSystem();
	void removeWither(ActorUniqueID const&);
	void addWither(ActorUniqueID const&);
	void fetchNearestAttackablePlayer(BlockPos, float, Actor*);
	void fetchNearestAttackablePlayer(Actor&, float);
	void hasSkylight() const;
	void forEachPlayer(std::function<bool (Player const&)>) const;
	void isRedstoneTick();
	void transferEntity(Vec3 const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> >);
	void isUltraWarm() const;
	void getLevelConst() const;
	void getSeasons();
	void addBlockToLighting(BlockPos const&);
	void getOldSkyDarken(float);
	void getTickingAreas();
	void isLeaveGameDone();
	void onChunkDiscarded(LevelChunk&);
	void _unregisterEntity(Actor&);
	void _onNewTickingEntity(Actor&);
	void _tickEntityChunkMoves();
	void backgroundTickSeasons();
	void sendPacketForPosition(BlockPos const&, Packet const&, Player const*);
	void upgradeOldLimboEntity(CompoundTag&, LimboEntitiesVersion);
	void _completeEntityTransfer(BlockSource&, std::unique_ptr<Actor, std::default_delete<Actor> >);
	void forceSaveVillageManager();
	void processTickingAreaRemoves();
	void processTickingAreaUpdates();
	void _runChunkGenerationWatchdog();
	void tryGarbageCollectStructures();
	void _captureChunkMapDebugDrawData();
	void transferEntityToUnloadedChunk(Vec3 const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> >);
	void findPlayer(std::function<bool (Player const&)>) const;
	void getSunlightDirection(float) const;
	void getPopCap(int, bool) const;
public:
	//Objects
	static Dimension * STRUCTURE_PRUNE_INTERVAL;
	static Dimension * MOON_BRIGHTNESS_PER_PHASE;
	static Dimension * CurrentLimboEntitiesVersion;
};//Dimension
