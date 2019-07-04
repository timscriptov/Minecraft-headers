/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"

class Mob;
class Actor;

class Phantom : public Mob, public Actor, public Monster
{
public:
	//char filler_Phantom[UNKNOW_SIZE];
public:
	virtual ~Phantom();
	virtual void normalTick();
	virtual void shouldRender() const;
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void checkSpawnRules(bool);
public:
	Phantom(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
