/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Monster.h"
#include "Spider.h"

class Mob;
class Actor;

class CaveSpider : public Mob, public Actor, public Spider, public Monster
{
public:
	//char filler_CaveSpider[UNKNOW_SIZE];
public:
	virtual ~CaveSpider();
	//virtual void getDebugText(std::vector<std::string, std::allocator<std::string> >&);
	virtual void getModelScale() const;
	virtual void getSpiderType() const;
public:
	CaveSpider(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
