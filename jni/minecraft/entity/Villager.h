/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Actor;
class Mob;

class Villager : public Mob, public Actor
{
public:
	//char filler_Villager[UNKNOW_SIZE];
public:
	virtual ~Villager();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	//virtual void se::reloadComponents(Actor::InitializationMethod, VariantParameterList const&);
	//virtual void se::interactPreventDefault();
	//virtual void se::onLightningHit();
	//virtual void se::handleEntityEvent(ActorEvent, int);
	virtual void buildDebugInfo(std::string&) const;
	//virtual void se::readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	//virtual void se::addAdditionalSaveData(CompoundTag&);
	//virtual void se::onSizeUpdated();
	//virtual void se::useNewAi() const;
	//virtual void se::_serverAiMobStep();
public:
	Villager(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
};
