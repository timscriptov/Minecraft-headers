/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Util.h"
#include "ItemInstance.h"

class Recipe
{
public:
	//char filler_Recipe[UNKNOW_SIZE];
public:
	virtual ~Recipe();// 376
	virtual void getId() const;// 4
	virtual void getItemPack() const;// 4
	virtual void isMultiRecipe() const;// 4
	virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&) const;// 64
	virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*) const;// 112
	virtual void itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*) const;// 326
public:
	Recipe(std::string, Util::HashString);// 372,  2,  376
	Recipe(Recipe&&);// 408
	void getPriority() const;// 4
	void getRecipeId() const;// 10
	void getTag() const;// 4
	void getWidth() const;// 4
	void getHeight() const;// 4
	void countQuantityOfIngredient(ItemInstance const&);// 838
	void isAnyAuxValue(ItemDescriptor const&);// 320
	void getIngredients() const;// 4
	void operator==(Recipe const&) const;// 618
};
