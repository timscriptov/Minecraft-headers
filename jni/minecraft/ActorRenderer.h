/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "mce.h"

class BaseActorRenderContext;
class ActorRenderData;
class Vec2;
class Model;
class Tessellator;
class RopePoints;

class ActorRenderer
{
public:
//	char filler_ActorRenderer[UNKNOW_SIZE];
public:
	virtual ~ActorRenderer();
	//pure virtual method
	virtual void renderDebug(BaseActorRenderContext&, ActorRenderData&);
	virtual void renderEffects(BaseActorRenderContext&, ActorRenderData&);
	virtual void renderTrading(BaseActorRenderContext&, ActorRenderData&, float);
	virtual void renderFlame(BaseActorRenderContext&, ActorRenderData&);
	virtual void renderLeash(BaseActorRenderContext&, ActorRenderData&);
	virtual void renderWaterHole(BaseActorRenderContext&, ActorRenderData&);
	virtual void addAdditionalRenderingIfNeeded(mce::TextureGroup&);
	virtual void getRenderBounds(Actor const&) const;
	virtual void getLeashOffset(Actor&, float, float, float, bool, bool);
public:
	ActorRenderer(mce::TextureGroup&, Vec2 const&, Vec3 const&, bool);
	ActorRenderer(std::unique_ptr<Model, std::default_delete<Model> >, mce::TextureGroup&, Vec2 const&, Vec3 const&, bool);
	//void extractText(Tessellator&, Actor&, std::string const&, std::vector<int, std::allocator<int> > const&, Vec3, bool, float);
	void resetFireTexture();
	void setBaseRenderBounds(Vec2 const&, Vec3 const&);
	void hasWaterHole() const;
	void _getLeashPins(Actor&, float, Vec3&, Vec3&, Vec3&, Vec3&, Vec3&);
	void _drawRopeRange(BaseActorRenderContext&, int, int, Vec3 const&, Vec3 const&, Vec3 const&, RopePoints const&, mce::TexturePtr&, float, Vec3*, Vec3*);
	void _buildFlameMesh(Tessellator&);
	void getAtlasTexture();
	void _drawClassicLeash(BaseActorRenderContext&, Vec3 const&, Vec3 const&, mce::TexturePtr&);
	void getModel();
	void renderGui(BaseActorRenderContext&, ActorRenderData&);
	void _calcLeashOffset(Vec3&, float) const;
	void getBaseRenderBounds() const;
	void getBaseRenderBoundsOffset() const;
	void getModel() const;
public:
	static ActorRenderer * mFlameMesh;
	static ActorRenderer * mFlameTexture;
	static ActorRenderer * mFlameMaterial;
	static ActorRenderer * DEFAULT_RENDER_BOUNDS;
};//ActorRenderer
