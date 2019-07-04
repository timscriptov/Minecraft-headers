/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "VillagerBase.h"
#include "../Mob.h"
#include "../Actor.h"

class VillagerV2
 : public Mob
// : public VillagerBase
// : public Actor
{
public:
	//char filler_VillagerV2[UNKNOW_SIZE];
public:
	virtual ~VillagerV2();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	virtual void remove();
	virtual void buildDebugInfo(std::string&) const;
	virtual void getInteraction(Player&, ActorInteraction&, Vec3 const&);
	virtual void die(ActorDamageSource const&);
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void travel(float, float, float);
	virtual void newServerAiStep();
public:
	VillagerV2(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
