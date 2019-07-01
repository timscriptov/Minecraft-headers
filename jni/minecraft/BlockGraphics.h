/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "BlockGeometry.h"

class BlockPalette;
class BlockSoundType;
class BlockShape;
class TextureUVCoordinateSet;

class BlockGraphics
{
public:
	//char filler_BlockGraphics[UNKNOW_SIZE];
public:
	virtual ~BlockGraphics();
	virtual void getIconYOffset() const;
	virtual void getColor(int) const;
	virtual void getColor(BlockSource&, BlockPos const&) const;
	virtual void getColorForParticle(BlockSource&, BlockPos const&, int) const;
	virtual void isSeasonTinted(BlockSource&, BlockPos const&) const;
	virtual void onGraphicsModeChanged(bool, bool, bool);
	virtual void getRenderLayer(BlockSource&, BlockPos const&) const;
	virtual void getExtraRenderLayers();
	virtual void getVisualShape(Block const&, AABB&, bool) const;
	virtual void getVisualShape(unsigned short, AABB&, bool) const;
	virtual void getCarriedTexture(unsigned int, int) const;
	virtual void animateTick(BlockSource&, BlockPos const&, Random&);
	virtual void randomlyModifyPosition(BlockPos const&, int&) const;
	virtual void randomlyModifyPosition(BlockPos const&) const;
	virtual void setVisualShape(AABB const&);
	virtual void setVisualShape(Vec3 const&, Vec3 const&);
public:
	//BlockGraphics(Block const&, BlockGraphics::ConstructorToken);
	BlockGraphics(std::string const&);
	BlockGraphics(BlockGraphics const&);
	void initBlocks(ResourcePackManager&, BlockPalette const&);
	void getForBlock(Block const&);
	void setAtlasItemManager(std::shared_ptr<AtlasItemManager>);
	void getBlocks();
	void getAtlasItem(unsigned int) const;
	void getBlockShape() const;
	void getTextureDefaultVariations(unsigned int, int) const;
	void isValid() const;
	//void chooseRandomTexture(float, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet> > const&);
	void getBlock() const;
	void getForBlock(BlockLegacy const&);
	void getRenderLayer() const;
	void setMapColor(Color const&);
	void setTextures(BlockGraphics&, Json::Value const&);
	void lookupByName(std::string const&, bool);
	void setSoundType(BlockSoundType);
	void setSoundType(BlockGraphics&, Json::Value const&);
	void isAlphaTested();
	void isInitialized();
	void setBlockShape(BlockShape);
	void setBlockShape(BlockGraphics&, Json::Value const&);
	void findBlockModel(std::string const&);
	void getTextureItem(std::string const&);
	void setTextureItem(std::string const&);
	void setTextureItem(std::string const&, std::string const&, std::string const&);
	void setTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
	void teardownBlocks();
	void enableAllowSame();
	void isFullAndOpaque(Block const&);
	void _initBlockModels(ResourcePackManager&);
	void setBrightnessGamma(BlockGraphics&, Json::Value const&);
	void setCarriedTextures(BlockGraphics&, Json::Value const&);
	//void _chooseRandomTexture(float, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet> > const&);
	void _findOrAppendTexture(std::string const&);
	void findOrTessellateModel(std::string const&, BlockGeometry::Model const*);
	void loadCustomIconTexture(Json::Value const&);
	//void registerBlockGraphics(std::vector<Json::Value, std::allocator<Json::Value> >&, std::string const&, BlockShape);
	void setCarriedTextureItem(std::string const&);
	void setCarriedTextureItem(std::string const&, std::string const&, std::string const&);
	void setCarriedTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
	void getTextureUVCoordinateSet(std::string const&, int, int);
	void setDefaultCarriedTextures();
	//void _loadCustomBlockShapeModel(std::vector<std::string, std::allocator<std::string> > const&, Json::Value const&);
	void loadCustomBlockShapeModels(Json::Value const&);
	//void registerLooseBlockGraphics(std::vector<Json::Value, std::allocator<Json::Value> >&, BlockPalette const&);
	void getTexture(BlockPos const&, unsigned int, Block const&) const;
	void getTexture(BlockPos const&, unsigned int, int) const;
	void getTexture(unsigned int, Block const&) const;
	void getTexture(unsigned int, int) const;
	void getMapColor() const;
	void getSoundType() const;
	void useBlockModel() const;
	void getIconTexture(int) const;
	void isFullAndOpaque() const;
	void texturePaletteSize() const;
	void getTessellatedModel(std::string const&, BlockPos const&) const;
	void getTessellatedModel(int, BlockPos const&) const;
	void useTessellatedModel() const;
	void getPositionVariantIndex(int, BlockPos const&) const;
	void getTessellatedPartIndex(std::string const&) const;
	//void getTessellatedModelTextures(unsigned int, BlockPos const&, int, bool, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet> >&) const;
	void getTextureCarriedVariations(unsigned int, int) const;
	void isFull() const;
public:
	static BlockGraphics * SIZE_OFFSET;
	static BlockGraphics * mDummyBlock;
	static BlockGraphics * mInitialized;
	static BlockGraphics * mOwnedBlocks;
	static BlockGraphics * mBlockLookupMap;
	static BlockGraphics * mBlockModelAccess;
	static BlockGraphics * mTessellatedModels;
	static BlockGraphics * mTerrainTextureAtlas;
	static BlockGraphics * mBlocks;
	static BlockGraphics * mModels;
};
