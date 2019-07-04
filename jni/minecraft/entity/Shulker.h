/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Actor;
class Mob;

class Shulker : public Mob, public Actor
{
public:
	//char filler_Shulker[UNKNOW_SIZE];
public:
	virtual ~Shulker();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	virtual void setPos(Vec3 const&);
	virtual void normalTick();
	virtual void isInWall() const;
	virtual void getShadowRadius() const;
	virtual void canAttack(Actor*, bool) const;
	virtual void shouldRender() const;
	virtual void isInvulnerableTo(ActorDamageSource const&) const;
	virtual void getPickRadius();
	virtual void isLeashableType();
	virtual void updateEntitySpecificMolangVariables(RenderParams&);
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void onSizeUpdated();
	virtual void travel(float, float, float);
	virtual void aiStep();
	virtual void getMaxHeadXRot();
	virtual void getArmorValue();
	virtual void useNewAi() const;
	virtual void initBodyControl();
	virtual void getExperienceReward() const;
public:
	Shulker(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void calculateBB();
	void isValidAttach(BlockPos, unsigned char);
	void setAttachFace(unsigned char);
	void setPeekAmount(int);
	void teleportSomewhere();
	void setShulkerAttachPos(BlockPos);
	void getAttached() const;
	void getAttachFace() const;
	void getPeekAmount() const;
	void getMaxHeadYRot() const;
	void getClientPeekAmount(float) const;
	void getShulkerAttachPos() const;
	void getAttackAnimationTick() const;
	void getOldShulkerAttachPosition() const;
	void hasValidInterpolationPositions() const;
	void getClientSideTeleportInterpolation() const;
	void isClosed() const;
public:
	static Shulker * COVERED_ARMOR_MODIFIER;
	static Shulker * COVERED_ARMOR_MODIFIER_UUID;
};
