/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Item.h"

class BlockSource;
class ArmorSlot;
class Color;

class ArmorItem : public Item
{
public:
class ArmorMaterial
{
	~ArmorMaterial();
};
public:
	//char filler_ArmorItem[UNKNOW_SIZE];
public:
	virtual ~ArmorItem();
	virtual void isArmor() const;
	virtual void appendFormattedHovertext(ItemInstance const&, Level&, std::string&, bool) const;
	virtual void isValidRepairItem(ItemInstance const&, ItemInstance const&) const;
	virtual void getEnchantSlot() const;
	virtual void getEnchantValue() const;
	virtual void getArmorValue() const;
	virtual void getDamageChance(int) const;
	virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&, ItemDescriptor const&) const;
	virtual void isTintable() const;
	virtual void use(ItemStack&, Player&) const;
	virtual void dispense(BlockSource&, Container&, int, Vec3 const&, unsigned char) const;
	virtual void hurtEnemy(ItemStack&, Mob*, Mob*) const;
	virtual void mineBlock(ItemStack&, Block const&, int, int, int, Actor*) const;
	virtual void getIcon(int, int, bool) const;
	virtual void setIcon(std::string const&, int);
public:
	ArmorItem(std::string const&, int, ArmorItem::ArmorMaterial const&, int, ArmorSlot);
	void isFlyEnabled(ItemInstance const&);
	void isElytra(ItemDescriptor const&);
	void isElytra() const;
	void getSlotForItem(ItemStack const&);
	void isDamageable(ItemDescriptor const&);
	void dispenseArmor(BlockSource&, Container&, int, Vec3 const&, unsigned char, ArmorSlot);
	void isElytraBroken(int);
	void getArmorForSlot(ArmorSlot, int);
	void clearColor(ItemStack&) const;
	void getTierItem() const;
	void hasCustomColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&) const;
	void playEquipSound(BlockSource&, ArmorSlot, Player&) const;
	void setColor(ItemStack&, Color const&) const;
public:
	static ArmorItem * mHealthPerSlot;
	static ArmorItem * GOLD;
	static ArmorItem * IRON;
	static ArmorItem * CHAIN;
	static ArmorItem * ELYTRA;
	static ArmorItem * TURTLE;
	static ArmorItem * DIAMOND;
	static ArmorItem * LEATHER;
};
