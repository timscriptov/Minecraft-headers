/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class ContainerContentChangeListener;
class SemVersion;

class PlayerInventoryProxy
// : public non-virtual thunk to PlayerInventoryProxy
{
public:
	//char filler_PlayerInventoryProxy[UNKNOW_SIZE];
public:
	virtual ~PlayerInventoryProxy();
	virtual void containerSizeChanged(int);
	virtual void containerContentChanged(int);
	virtual void createTransactionContext(std::function<void (Container&, int, ItemStack const&, ItemStack const&)>, std::function<void ()>);
public:
	//PlayerInventoryProxy(std::unique_ptr<Inventory, std::default_delete<Inventory> >);
	void selectSlot(int, ContainerID);
	void getSelectedItem();
	void dropSlot(int, bool, bool, ContainerID, bool);
	void getSelectedSlot() const;
	void getContainerSize(ContainerID) const;
	void getItem(int, ContainerID) const;
	void getHotbarSize() const;
	void setContainerSize(int, ContainerID);
	void clearInventoryWithDefault(bool);
	void setItem(int, ItemStack const&, ContainerID);
	void clearSlot(int, ContainerID);
	void _getInventoryContainer();
	void addListener(ContainerContentChangeListener*);
	void getItemCount(ItemDescriptor const&);
	void removeListener(ContainerContentChangeListener*);
	void getSlots() const;
	void getSelectedContainerId();
	void swapSlots(int, int);
	void getSlotWithItem(ItemStack const&, bool, bool) const;
	void getFirstEmptySlot() const;
	void removeItem(int, int, ContainerID);
	void setSelectedItem(ItemStack const&);
	void add(ItemStack&, bool);
	void canAdd(ItemStack const&) const;
	void hasResource(int);
	void clearInventory(int);
	void getAllContainerIds();
	void _getHudContainerManagerModel();
	//void init(std::weak_ptr<HudContainerManagerModel>);
	void load(ListTag const&, SemVersion const&, Level&);
	void save();
	void tick();
	void dropAll(bool);
	void getComplexItems(ContainerID) const;
	void removeResource(ItemStack const&);
	void removeResource(ItemStack const&, bool, bool, int);
	void removeResource(int);
	void setContainerChanged(int);
	void getAndRemoveResource(ItemStack&, bool, bool);
	void setItemWithoutSlotLinking(int, ItemStack const&, ContainerID);
	void getSlotCopies(ContainerID) const;
	void _getHudContainer() const;
	void getEmptySlotsCount() const;
};
