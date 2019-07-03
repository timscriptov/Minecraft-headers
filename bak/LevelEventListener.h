#pragma once
#include <string>
#include <memory>
#include <map>

class LevelEventListener
{
public:
	//Fields
	char filler_LevelEventListener[UNKNOW_SIZE];
public:
	//Methods
	void onLevelTick();
	void onLevelSaveData(Level&, CompoundTag&);
	void onLevelAddedActor(Level&, Actor&);
	void onLevelAddedPlayer(Level&, Player&);
	void onLevelInitialized(Level&);
	void onLevelRemovedActor(Level&, Actor&);
	void onLevelRemovedPlayer(Level&, Player&);
	void onLevelWeatherChange(std::string const&, bool, bool);
};//LevelEventListener
