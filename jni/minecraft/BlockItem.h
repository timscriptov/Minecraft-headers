/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Item.h"

class ItemStack;
class ItemInstance;
class ItemDescriptor;
class Actor;
class BlockPos;
class CompoundTag;

class BlockItem : public Item
{
public:
	//char filler_BlockItem[UNKNOW_SIZE];
public:
	virtual ~BlockItem();
	virtual void isExperimental(ItemInstance const*) const;
	virtual void isDestructive(int) const;
	virtual void isValidAuxValue(int) const;
	virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&) const;
	virtual void isEmissive(int) const;
	virtual void getIcon(int, int, bool) const;
	virtual void getIconYOffset() const;
	virtual void _calculatePlacePos(ItemStack&, Actor&, unsigned char&, BlockPos&) const;
	virtual void _useOn(ItemStack&, Actor&, BlockPos, unsigned char, float, float, float) const;
public:
	BlockItem(std::string const&, int);
};
