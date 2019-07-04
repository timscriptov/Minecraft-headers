#pragma once

class Mob;
class Actor;
class Animal;

class Llama
 : public Mob
// : public Actor
// : public Animal
{
public:
	//char filler_Llama[UNKNOW_SIZE];
public:
	virtual ~Llama();
	virtual void onFailedTame();
	virtual void causeFallDamage(float);
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void _playStepSound(BlockPos const&, Block const&);
	virtual void getArmorValue();
	virtual void useNewAi() const;
public:
	Llama(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
