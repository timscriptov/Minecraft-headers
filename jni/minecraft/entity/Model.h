/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class AppPlatformListener;
class ModelPart;
class DataDrivenGeometry;
class RenderController;

class Model : public AppPlatformListener
{
public:
	//char filler_Model[UNKNOW_SIZE];
public:
	virtual ~Model();
	virtual void onAppSuspended();
	virtual void clear();
	virtual void preDraw(ScreenContext&);
	virtual void postDraw(ScreenContext&);
	virtual void render(ScreenContext&);
	virtual void render(ScreenContext&, Actor&, float, float, float, float, float, float);
	virtual void render(BaseActorRenderContext&);
	virtual void render(BaseActorRenderContext&, Actor&, float, float, float, float, float, float);
	virtual void setupAnim(float, float, float, float, float, float);
	virtual void setupAnim();
	virtual void prepareMobModel(Mob&, float, float, float);
	virtual void getLeashOffsetPosition(bool) const;
	virtual void getHeightAdjustment() const;
	virtual void buildAABB() const;
public:
	Model();
	void copyModelPart(ModelPart const&, ModelPart&);
	void prepareSkinning();
	//void draw(ScreenContext&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&);
	void findBoneMapping(HashedString const&) const;
	//void draw(ScreenContext&, gsl::span<mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const*, -1>);
	//void draw(ScreenContext&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&);
	void registerParts(ModelPart&);
	//void draw(ScreenContext&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&, MaterialVariants const&);
	void assignPartToGroup(ModelPart&, bool, DataDrivenGeometry*);
	void getBoneMapping(HashedString const&);
	void getBoneOrientations();
	//void dataDrivenDraw(RenderParams&, RenderController const*, gsl::span<mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const*, -1>);
	//void draw(ScreenContext&, gsl::span<mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const*, -1>, MaterialVariants const&);
	//void draw(ScreenContext&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&, MaterialVariants const&);
	//void draw(BaseActorRenderContext&, gsl::span<mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const*, -1>);
	//void draw(BaseActorRenderContext&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&);
	//void draw(BaseActorRenderContext&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&, mce::ClientResourcePointer<mce::ResourcePointer<mce::Texture, mce::ResourceBlockTemplate<mce::Texture, mce::PerFrameHandleTracker, mce::ResourceServiceTextureDescription>, std::shared_ptr> > const&);
	void getBoneOrientations() const;
};
