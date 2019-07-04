/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "AbstractArrow.h"

class Actor;

class ThrownTrident : public Actor, public AbstractArrow
{
public:
	//char filler_ThrownTrident[UNKNOW_SIZE];
public:
	virtual ~ThrownTrident();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	virtual void normalTick();
	virtual void playerTouch(Player&);
	virtual void isEnchanted() const;
	virtual void despawn();
	virtual void outOfWorld();
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void shoot(Vec3 const&, float, float, Vec3 const&);
	virtual void _getPickupItem() const;
public:
	ThrownTrident(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getClientSideReturnTridentTickCount() const;
	void getPickupItem() const;
	void setTridentItem(ItemStack const&);
	void returnWithLoyalty(int);
};
