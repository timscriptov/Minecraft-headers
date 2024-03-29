/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "ItemEnchants.h"
#include "BlockActor.h"

class BlockLegacy;
class Tick;

class ItemInstance
{
public:
	//char filler_ItemInstance[UNKNOW_SIZE];
public:
	ItemInstance(ItemStack const&);
	ItemInstance();
	ItemInstance(ItemInstance const&);
	ItemInstance(Item const&, int, int);
	ItemInstance(Item const&);
	ItemInstance(Item const&, int, int, CompoundTag const*);
	ItemInstance(Item const&, int);
	ItemInstance(BlockLegacy const&, int);
	ItemInstance(Block const&, int, CompoundTag const*);
	ItemInstance(BlockLegacy const&, int, short);
	~ItemInstance();
	void getAuxValue() const;
	void getId() const;
	void operator!=(ItemInstance const&) const;
	void getDescriptor() const;
	void operator=(ItemInstance const&);
	void isNull() const;
	void getUserData() const;
	void isStackable(ItemInstance const&) const;
	void isStackable() const;
	void getMaxDamage() const;
	void getChargedItem() const;
	void getDamageValue() const;
	void isDamageableItem() const;
	void getIdAuxEnchanted() const;
	void getColor() const;
	void isDamaged() const;
	void getName() const;
	void getLegacyBlock() const;
	void isEnchanted() const;
	void getPickupTime() const;
	void getHoverName() const;
	void getEffectName() const;
	void getIdAux() const;
	void getFormattedHovertext(Level&, bool) const;
	void hasCustomHoverName() const;
	void hasUserData() const;
	void getRawNameId() const;
	void getEnchantsFromUserData() const;
	void setAuxValue(short);
	void setDamageValue(short);
	void set(int);
	void getMaxStackSize() const;
	void isValidAuxValue(int) const;
	void addComponents(Json::Value const&, std::string&);
	void setUserData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> >);
	void sameItemAndAux(ItemInstance const&) const;
	void isWearableItem() const;
	void isPotionItem() const;
	void setNull();
	void matchesItem(ItemStack const&) const;
	void matchesItem(ItemInstance const&) const;
	void matches(ItemStack const&) const;
	void matches(ItemInstance const&) const;
	void operator==(ItemInstance const&) const;
	void isPattern() const;
	void isOffhandItem() const;
	void wasJustBrewed() const;
	void clone() const;
	void setCustomName(std::string const&);
	void isExperimental() const;
	void saveEnchantsToUserData(ItemEnchants const&);
	void getEnchantValue() const;
	void hurtAndBreak(int, Actor*);
	void deserializeComponents(IDataInput&);
	void getCategoryName() const;
	void isMusicDiscItem() const;
	void isEnchantingBook() const;
	void serializeComponents(IDataOutput&) const;
	void releaseUsing(Player*, int);
	//void setCustomLore(std::vector<std::string, std::allocator<std::string> > const&);
	void setJustBrewed(bool);
	//void setPickupTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long long, std::ratio<1ll, 1000000000ll> > >);
	void setPickupTime();
	void setRepairCost(int);
	void setShowPickUp(bool);
	void resetHoverName();
	void setChargedItem(ItemInstance const&, bool);
	void _initComponents();
	void _loadComponents(CompoundTag const&);
	void _setChargedItem(ItemInstance const&);
	void setBlockingTick(Tick);
	void updateComponent(std::string const&, Json::Value const&);
	void useTimeDepleted(Level*, Player*);
	void _cloneComponents(ItemStack const&);
	void _cloneComponents(ItemInstance const&);
	void clearChargedItem();
	void isValidComponent(std::string const&);
	void addCustomUserData(BlockActor&, BlockSource&);
	void retrieveIDFromIDAux(int);
	void _updateCompareHashes();
	void refreshedInContainer(Level&);
	void retrieveAuxValFromIDAux(int);
	void retrieveEnchantFromIDAux(int);
	void _makeChargedItemFromUserData();
	void add(int);
	void init(BlockLegacy const&, int);
	void init(Item const&, int, int, CompoundTag const*);
	void init(int, int, int);
	void load(CompoundTag const&);
	void load(CompoundTag const&, Level&);
	void snap(Player*);
	void remove(int);
	void fromTag(CompoundTag const&);
	void _setItem(int);
	void setBlock(Block const*);
	void _loadItem(CompoundTag const&);
	void mineBlock(Block const&, int, int, int, Mob*);
	void useAsFuel();
	void canDestroy(Block const*) const;
	void canPlaceOn(Block const*) const;
	void isInstance(BlockLegacy const&) const;
	void isArmorItem() const;
	void isFullStack() const;
	void isThrowable() const;
	void canBeCharged() const;
	void hasComponent(std::string const&) const;
	void isExplodable() const;
	void getCustomLore() const;
	void getCustomName() const;
	void getRendererId() const;
	void startCoolDown(Player*) const;
	void _hasComponents() const;
	void getEnchantSlot() const;
	void hasChargedItem() const;
	void _saveComponents(CompoundTag&) const;
	void componentsMatch(ItemStack const&) const;
	void componentsMatch(ItemInstance const&) const;
	void getAttackDamage() const;
	void getBlockingTick() const;
	void getUseAnimation() const;
	void hasSameAuxValue(ItemInstance const&) const;
	void hasSameUserData(ItemStack const&) const;
	void hasSameUserData(ItemInstance const&) const;
	void hasSameUserData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&) const;
	void isStackedByData() const;
	void getDescriptionId() const;
	void isHorseArmorItem() const;
	void isLiquidClipItem() const;
	void canDestroySpecial(Block const&) const;
	void getBaseRepairCost() const;
	void getMaxUseDuration() const;
	void isEquivalentArmor(ItemInstance const&) const;
	void getNetworkUserData() const;
	void matchesChargedItem(ItemStack const&) const;
	void matchesChargedItem(ItemInstance const&) const;
	void getIsValidPickupTime() const;
	void getPickupPopPercentage() const;
	void getStrippedNetworkItem() const;
	void playSoundIncrementally(Mob&) const;
	void hasCompoundTextUserData() const;
	void _getHoverFormattingPrefix() const;
	void showsDurabilityInCreative() const;
	void save() const;
	void getIcon(int, bool) const;
	void isBlock() const;
	void isGlint() const;
	void getBlock() const;
	void sameItem(ItemInstance const&) const;
	void toString() const;
public:
	static ItemInstance * EMPTY_ITEM;
	static ItemInstance * TAG_DISPLAY;
	static ItemInstance * TAG_ENCHANTS;
	static ItemInstance * MAX_STACK_SIZE;
	static ItemInstance * TAG_CAN_DESTROY;
	static ItemInstance * TAG_REPAIR_COST;
	static ItemInstance * TAG_CAN_PLACE_ON;
	static ItemInstance * TAG_CHARGED_ITEM;
	static ItemInstance * TAG_DISPLAY_NAME;
	static ItemInstance * TAG_STORE_CAN_DESTROY;
	static ItemInstance * TAG_STORE_CAN_PLACE_ON;
	static ItemInstance * TAG_LORE;
};
