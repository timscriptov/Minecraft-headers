/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Minecart
{
public:
	//char filler_Minecart[UNKNOW_SIZE];
public:
	virtual ~Minecart();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	//virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
	virtual void lerpTo(Vec3 const&, Vec2 const&, int);
	virtual void normalTick();
	virtual void getShadowHeightOffs();
	virtual void getShadowRadius() const;
	virtual void isPickable();
	virtual void isInvulnerableTo(ActorDamageSource const&) const;
	virtual void onBounceStarted(BlockPos const&, Block const&);
	virtual void getControllingPlayer() const;
	virtual void kill();
	virtual void canMakeStepSound() const;
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void destroy(ActorDamageSource const&, bool);
	virtual void getDefaultDisplayBlock() const;
	virtual void getDefaultDisplayData() const;
	virtual void getDefaultDisplayOffset() const;
	virtual void applyNaturalSlowdown();
	virtual void lazyInitDisplayBlock();
public:
	Minecart(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getDisplayBlock() const;
	void getDisplayOffset() const;
	void setCustomName(std::string const&);
	void setDisplayBlock(Block const&);
	void setCustomDisplay(bool);
	void setDisplayOffset(int);
	void registerLoopingSounds();
	void _reloadMinecartHardcodedValues();
	void getAName();
	void getCustomName() const;
	void hasCustomName() const;
	void hasCustomDisplay() const;
};
