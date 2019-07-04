/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "mce.h"
#include "ActorShaderManager.h"
#include "MobRenderer.h"
#include "ActorRenderer.h"

class BaseActorRenderContext;
class ActorRenderData;
class Model;
class Matrix;
class ScreenContext;
class HumanoidModel;

class HumanoidMobRenderer : public ActorShaderManager, public MobRenderer, public ActorRenderer
{
public:
//	char filler_HumanoidMobRenderer[UNKNOW_SIZE];
public:
	virtual ~HumanoidMobRenderer();
	virtual void render(BaseActorRenderContext&, ActorRenderData&);
	virtual void prepareCarriedItem(Model&, Mob&, ItemStack const&);
	virtual void setupRotations(Actor const&, float, float, Matrix&, float) const;
	virtual void additionalRendering(BaseActorRenderContext&, Model&, Mob&, float, float, float, float, float, float);
	virtual void prepareArmor(ScreenContext&, BaseActorRenderContext&, Mob&, ArmorSlot, Model&, float);
	virtual void prepareCarriedOffhandItem(Model&, Mob&, ItemStack const&);
public:
	//HumanoidMobRenderer(std::unique_ptr<HumanoidModel, std::default_delete<HumanoidModel> >, std::unique_ptr<HumanoidModel, std::default_delete<HumanoidModel> >, std::unique_ptr<HumanoidModel, std::default_delete<HumanoidModel> >, mce::TextureGroup&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> >, Vec2 const&, Vec3 const&);
	//HumanoidMobRenderer(std::unique_ptr<HumanoidModel, std::default_delete<HumanoidModel> >, std::unique_ptr<HumanoidModel, std::default_delete<HumanoidModel> >, std::unique_ptr<HumanoidModel, std::default_delete<HumanoidModel> >, std::unique_ptr<HumanoidModel, std::default_delete<HumanoidModel> >, mce::TextureGroup&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> >, Vec2 const&, Vec3 const&);
	void initTextures();
	void renderInternal(BaseActorRenderContext&, ActorRenderData&, HumanoidModel&);
	void getModel(Mob&) const;
public:
	static HumanoidMobRenderer * ELYTRA_TEXTURE_PATH;
	static HumanoidMobRenderer * PLAYER_SWIM_Y_OFFSET;
	static HumanoidMobRenderer * PLAYER_SWIM_Z_OFFSET;
	static HumanoidMobRenderer * DEFAULT_RENDER_BOUNDS;
};//HumanoidMobRenderer
