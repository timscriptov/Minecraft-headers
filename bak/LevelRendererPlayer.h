#pragma once
#include <string>
#include <memory>
#include <map>

class LevelRendererPlayer
 : public LevelRendererCamera
 : public non-virtual thunk to LevelRendererPlayer
 : public BlockSourceListener
 : public LevelListener
{
public:
	//Fields
	char filler_LevelRendererPlayer[UNKNOW_SIZE];
public:
	//Virtual Tables
	virtual ~LevelRendererPlayer();
	virtual ~LevelRendererPlayer();
	virtual void addCameraListenerToRenderChunkCoordinator();
	virtual void tickLevelRendererCamera();
	virtual void tickRain();
	virtual void callRenderNameTags(ScreenContext&, ViewRenderObject const&, Font&);
	virtual void extractNameTags(ScreenContext&) const;
	virtual void callRenderCracks(BaseActorRenderContext&, ViewRenderObject const&);
	virtual void extractCracks(ScreenContext&) const;
	virtual void renderEntityEffects(BaseActorRenderContext&);
	virtual void renderBlockEntities(BaseActorRenderContext&, bool);
	virtual void renderHolographicCursor(ScreenContext&);
	virtual void renderVRHitFlash(ScreenContext&);
	virtual void getForceFog(Actor const&) const;
	virtual void setupFog(ScreenContext&, float);
	virtual void preRenderUpdate(ScreenContext&, LevelRenderPreRenderUpdateParameters&);
	virtual void isPositionTooCloseToCamera(Vec3 const&) const;
	virtual void blockEntityAboutToBeRemoved(BlockSource&, std::shared_ptr<BlockActor>);
	virtual void notifyGeoChangedForAffectedEntities(RenderChunkShared&, unsigned char);
	virtual void queueRenderEntities(LevelRenderPreRenderUpdateParameters const&);
	virtual void _getBlockForBlockEnity(BlockActor const&);
	virtual void _fetchAdditionalBlockEntities(std::vector<BlockActor*, std::allocator<BlockActor*> >&);
	virtual void levelSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
	virtual void levelEvent(LevelEvent, Vec3 const&, int);
	virtual void levelEvent(LevelEvent, CompoundTag const&);
	virtual void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
	virtual void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
	virtual void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
	virtual void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool);
	virtual void getUnderwaterVisionClarity();
public:
	//Methods
	LevelRendererPlayer(IClientInstance&, std::shared_ptr<Options>, Level&, LevelRenderer&, LocalPlayer&, SoundPlayer&, TextureAtlas const&, HolographicPlatform&, SoundMapping const&);
	void getRenderingParameters() const;
	void getNightVisionScale(Mob const&, float);
	void getUnderWaterVisionScale();
	void getComfortRenderAdj();
	void bobView(Matrix&, float);
	void stopSounds();
	void reinit(TextureAtlas const&);
	void stopSound(std::string const&);
	void playSound(std::string const&, Vec3 const&, float, float) const;
	void playRecord(std::string const&, Vec3 const&, float, float);
	void stopRecord(Vec3 const&);
	void setupCamera(mce::Camera&, float);
	void renderCracks(ScreenContext&, ViewRenderData const&, CrackRenderObjectCollection const&);
	void renderNameTags(ScreenContext&, ViewRenderData const&, NameTagRenderObjectCollection const&, Font&);
	void addDestroyBlock(BlockPos const&, float);
	void bobPlayerCamera(Matrix&, float);
	void computeCameraPos(float);
	void tryReassignSound(LevelSoundEvent&, Sound&, ActorDefinitionIdentifier const&, BlockSoundType&, Random&, bool&);
	void playDeferredSound(std::string const&, Vec3 const&, float, float);
	void isCameraUnderwater();
	void moveCameraToPlayer(Matrix&, float, mce::Camera const&, float);
	void removeDestroyBlock(BlockPos const&);
	void updateDestroyBlock(BlockPos const&, float);
	void clearInWorldCursors();
	void clearDestroyProgress();
	void getCurrentCameraDist();
	void tickUnderwaterVision();
	void addPortalCameraEffect(Matrix&, float);
	void updateDestroyProgress();
	void getProjectionAspectRatio();
	void _getTerrainTextureUVsFromBlock(Block const&);
	void _retrieveActorSoundWithFallback(LevelSoundEvent, LevelSoundEvent, ActorDefinitionIdentifier const&);
	void _adjustHeightOffsetNearLiquidSurface(float&, Actor const*, mce::Camera const&, float, BlockSource&);
	void _pruneBlockEntityDelayedDeletionList();
	void _crack(BlockSource&, Block const&, BlockPos const&, unsigned char);
	void getFov(float, bool);
	void bobHurt(Matrix&, float);
	void tickFov();
	void renderHitSelect(BaseActorRenderContext&, BlockSource&, BlockPos const&, bool) const;
	void canRenderNameTags(Actor&) const;
	void _getForcedMaterial(BlockActor*) const;
	void canRenderScoreTags(Actor&) const;
	void _playBabySoundEvent(Sound, Vec3 const&, Random&) const;
	void chooseOverlayMaterial(bool, BlockRenderLayer) const;
	void getCameraPosFromEntity(Actor const&, float) const;
	void _renderOutlineSelection(ScreenContext&, Block const&, BlockSource&, BlockPos const&) const;
	void checkPosForOneToOneClip(Vec3 const&) const;
	void createCrackRenderObject(ScreenContext&, BlockSource&, Block const&, BlockPos const&, float) const;
	void _renderHighlightSelection(BaseActorRenderContext&, BlockSource&, Block const&, BlockPos const&, bool, bool) const;
	void blockCanHaveCracksOverlay(Block const&) const;
	void blockCanHaveSelectionOverlay(Block const&) const;
	void playSound(Actor const&, ActorLocation, std::string const&, float, float) const;
};//LevelRendererPlayer
