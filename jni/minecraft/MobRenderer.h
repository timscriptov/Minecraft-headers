/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "ActorShaderManager.h"
#include "ActorRenderer.h"

class Matrix;
class ResourceServiceTextureDescription;
class PerFrameHandleTracker;

class MobRenderer : public ActorShaderManager, public ActorRenderer
{
public:
//	char filler_MobRenderer[UNKNOW_SIZE];
public:
	virtual ~MobRenderer();
	virtual void render(BaseActorRenderContext&, ActorRenderData&);
	virtual void renderDebug(BaseActorRenderContext&, ActorRenderData&);
	virtual void prepareCarriedItem(Model&, Mob&, ItemStack const&);
	virtual void setupPosition(Actor const&, Vec3 const&, Matrix&) const;
	virtual void setupRotations(Actor const&, float, float, Matrix&, float) const;
	virtual void getAttackAnim(Mob&, float);
	virtual void getBob(Mob&, float);
	virtual void getFlipDegrees(Mob const&) const;
	virtual void setupScale(Mob const&, Matrix&, float) const;
	//virtual void renderModel(BaseActorRenderContext&, ActorRenderData&, Model&, gsl::span<mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const*, -1>);
	virtual void additionalRendering(BaseActorRenderContext&, Model&, Mob&, float, float, float, float, float, float);
	virtual void renderLayers(BaseActorRenderContext&, Actor&, float, float, float, float, float);
	virtual void drawLayers(ScreenContext&);
	virtual void getSneakingHeightOffset() const;
	virtual void getSwimmingHeightOffset() const;
	virtual void prepareArmor(ScreenContext&, BaseActorRenderContext&, Mob&, ArmorSlot, Model&, float);
	virtual void getSkinPtr(Actor const&) const;
public:
	//MobRenderer(std::unique_ptr<Model, std::default_delete<Model> >, mce::TextureGroup&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&, Vec2 const&, Vec3 const&);
	//void renderModel(BaseActorRenderContext&, ActorRenderData&, Model&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&);
	void setArmor(Model&);
	void renderModel(BaseActorRenderContext&, ActorRenderData&, Model&, mce::TexturePtr const&);
	void renderModel(BaseActorRenderContext&, ActorRenderData&, Model&, mce::TexturePtr const&, mce::TexturePtr const&);
	void renderModel(BaseActorRenderContext&, ActorRenderData&, Model&, mce::TexturePtr const&, mce::TexturePtr const&, mce::TexturePtr const&);
	//void renderModel(BaseActorRenderContext&, ActorRenderData&, Model&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&);
	//void renderModel(BaseActorRenderContext&, ActorRenderData&, Model&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&);
	void getArmor();
	void _applyGlobalMobAnimations(Mob const&, Matrix&, float) const;
};//MobRenderer
