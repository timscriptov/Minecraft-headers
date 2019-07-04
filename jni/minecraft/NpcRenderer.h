/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "HumanoidMobRenderer.h"
#include "ActorShaderManager.h"
#include "ActorRenderer.h"

class MobRenderer;
class BaseActorRenderContext;
class ActorRenderData;
class ActorResourceDefinition;

class NpcRenderer : public HumanoidMobRenderer, public ActorShaderManager, public MobRenderer, public ActorRenderer
{
public:
	//char filler_NpcRenderer[UNKNOW_SIZE];
public:
	virtual ~NpcRenderer();
	virtual void render(BaseActorRenderContext&, ActorRenderData&);
public:
	NpcRenderer(ActorResourceDefinition const&, mce::TextureGroup&);
	void _getSkinTexture(unsigned int);
};
