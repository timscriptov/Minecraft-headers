/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class ScreenContext;
class Vec4;
class Vec2;
class BaseActorRenderContext;
class LightTexture;

class ActorShaderManager
{
public:
//	char filler_ActorShaderManager[UNKNOW_SIZE];
public:
	virtual ~ActorShaderManager();
	virtual void _getOverlayColor(Actor&, float) const;
public:
	ActorShaderManager();
	void getOverlayColor(Actor&, float);
	void setupShaderParameters(ScreenContext&, BaseActorRenderContext&, Actor&, Color const&, Color const&, Color const&, Vec4 const&, float, float, bool);
	void setupShaderParameters(ScreenContext&, BaseActorRenderContext&, Actor&, Color const&, Color const&, Color const&, float, bool);
	void setupShaderParameters(ScreenContext&, BaseActorRenderContext&, Actor&, Color const&, float, bool);
	void setupShaderParameters(ScreenContext&, BaseActorRenderContext&, Actor&, float);
	void setupShaderParameters(ScreenContext&, BaseActorRenderContext&, Actor&, Color const&, float, Vec4 const&);
	void setupShaderParameters(ScreenContext&, float, Color const&, bool);
	void setupShaderParameters(ScreenContext&, BlockSource&, BlockPos const&, float, bool, LightTexture&, Vec2 const&, Vec4 const&);
	void getTransparentEntityMaterial();
	void setupShaderParameters(ScreenContext&, BaseActorRenderContext&, Actor&, Color const&, Color const&, Color const&, Color const&, float, float, float, float, Vec2 const&, Vec4 const&, float, bool);
	void setupFoilShaderParameters(ScreenContext&, BaseActorRenderContext&, Actor&, Color const&, Color const&, Vec2 const&, float, bool, bool);
	void setupShaderParameters(ScreenContext&, Color const&, Color const&, Color const&);
	void setupFoilShaderParameters(ScreenContext&, BaseActorRenderContext&, Actor&, Color const&, Color const&, TextureUVCoordinateSet const&, float);
	void setupFoilShaderParameters(ScreenContext&, TextureUVCoordinateSet const&);
	void setupFoilShaderParameters(ScreenContext&, BaseActorRenderContext&, Actor&, TextureUVCoordinateSet const&, float);
	void getEntityMaterial();
	void getStaticMaterial();
	void setupFoilShaderParameters(ScreenContext&, Color const&, Color const&, Color const&, Vec2 const&);
	void setupShaderParameters(ScreenContext&, BlockSource&, BlockPos const&, Color const&, Color const&, float, LightTexture&, Vec2 const&, bool);
	void setupShaderParameters(ScreenContext&, BaseActorRenderContext&, Actor&, Color const&, Color const&, Color const&, float, float, float, float, Vec2 const&, float);
	void setupShaderParameters(ScreenContext&, Color const&, Color const&, Color const&, Color const&, float, float, float, float, Vec2 const&, Vec4 const&, float);
	void setupFoilShaderParameters(ScreenContext&, BaseActorRenderContext&, Actor&, Color const&, Color const&, Color const&, Vec2 const&, Vec4 const&, float, bool, bool);
	void setupFoilShaderParameters(ScreenContext&, Vec2 const&);
	void setupFoilShaderParameters(ScreenContext&, Color const&, Vec2 const&);
public:
	static ActorShaderManager * GLINT_TEXTURE_LOCATION;
	static ActorShaderManager * GLINT_SCROLL_SCALE_L1;
	static ActorShaderManager * GLINT_SCROLL_SCALE_L2;
};//ActorShaderManager
