#pragma once

//#include "../Actor.h"
//#include "../Mob.h"

class Animal;
class Actor;
class Mob;
class HorseFlags;

class Horse
 : public Mob
// : public Actor
// : public Animal
{
public:
	//char filler_Horse[UNKNOW_SIZE];
public:
	virtual ~Horse();
	//virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
	virtual void getInterpolatedRidingOffset(float) const;
	virtual void normalTick();
	virtual void positionRider(Actor&, float);
	virtual void getShadowRadius() const;
	virtual void isImmobile() const;
	virtual void onFailedTame();
	virtual void setStanding(bool);
	virtual void feed(int);
	virtual void getControllingPlayer() const;
	virtual void causeFallDamage(float);
	virtual void handleFallDistanceOnServer(float, bool);
	virtual void openContainerComponent(Player&);
	virtual void die(ActorDamageSource const&);
	virtual void _hurt(ActorDamageSource const&, int, bool, bool);
	virtual void _playStepSound(BlockPos const&, Block const&);
	virtual void getAmbientSoundPostponeTicks();
	virtual void travel(float, float, float);
	virtual void aiStep();
	virtual void getArmorValue();
	virtual void useNewAi() const;
	virtual void setType(int);
	virtual void getType() const;
	virtual void setEating(bool);
	virtual void getStandAnim(float) const;
	virtual void canWearArmor() const;
	virtual void getHasReproduced() const;
	virtual void setBred(bool);
	virtual void setReproduced(bool);
	virtual void isAmuletHorse();
	virtual void isUndead() const;
	virtual void isSterile() const;
	virtual void isAdult() const;
	virtual void isEating() const;
	virtual void isBred() const;
	virtual void makeMad();
	virtual void nameYOffset();
	virtual void tameToPlayer(Player*, bool);
	virtual void getClosestMommy(Actor*, float);
	virtual void getMadSound();
public:
	Horse(ActorDefinitionGroup*, ActorDefinitionIdentifier const&);
	void getHorseFlag(HorseFlags) const;
	void doPlayerRide(Player*);
	void isHorseArmor(Item*);
	void setHorseFlag(HorseFlags, bool);
	void rideableEntity();
	void createInventory();
	void generateRandomSpeed();
	void generateRandomMaxHealth();
	void generateRandomJumpStrength();
	void openMouth();
	void isReadyForParenting() const;
public:
	static Horse * DONKEY_CHEST_COUNT;
	static Horse * DATA_AGE;
};
