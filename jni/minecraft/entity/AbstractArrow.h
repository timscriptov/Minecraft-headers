/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class AbstractArrow
{
public:
	//char filler_AbstractArrow[UNKNOW_SIZE];
public:
	virtual ~AbstractArrow();
	virtual void lerpTo(Vec3 const&, Vec2 const&, int);
	virtual void lerpMotion(Vec3 const&);
	virtual void normalTick();
	virtual void getShadowHeightOffs();
	virtual void getShadowRadius() const;
	virtual void playerTouch(Player&);
	virtual void getSourceUniqueID() const;
	virtual void canChangeDimensions() const;
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void shoot(Vec3 const&, float, float, Vec3 const&);
	virtual void _playPickupSound();
public:
	AbstractArrow(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void _canPickup(Player const&) const;
	void _isPlayerOwned() const;
	void setIsCreative(bool);
	void setFavoredSlot(int);
	void getBaseDamage();
	void setBaseDamage(float);
	void setIsPlayerOwned(bool);
	void _defineEntityData();
};
