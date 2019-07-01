/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Enchant.h"

class ListTag;
class EnchantmentInstance;

class ItemEnchants
{
public:
	//char filler_ItemEnchants[UNKNOW_SIZE];
public:
	ItemEnchants(ItemEnchants&&);
	ItemEnchants(int);
	ItemEnchants(int, ListTag const&);
	void getAllEnchants() const;
	void getEnchants(int) const;
	void getEnchantNames() const;
	void count() const;
	void addEnchant(EnchantmentInstance, bool);
	void canEnchant(EnchantmentInstance, bool);
	void addEnchants(ItemEnchants const&, bool);
	void hasEnchant(Enchant::Type) const;
	void getTotalValue(bool) const;
	void getSlot() const;
	void _fromList(ListTag const&);
	void _toList() const;
	void isEmpty() const;
};
