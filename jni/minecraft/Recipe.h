/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Util.h"

class Recipe
{
public:
	//char filler_Recipe[UNKNOW_SIZE];
public:
	virtual ~Recipe();
	virtual void getId() const;
	virtual void getItemPack() const;
	virtual void isMultiRecipe() const;
	virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&) const;
	virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*) const;
	virtual void itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*) const;
public:
	Recipe(std::string, Util::HashString);
	Recipe(Recipe&&);
	void getPriority() const;
	void getRecipeId() const;
	void getTag() const;
	void getWidth() const;
	void getHeight() const;
	void countQuantityOfIngredient(ItemInstance const&);
	void isAnyAuxValue(ItemDescriptor const&);
	void getIngredients() const;
	void operator==(Recipe const&) const;
};
