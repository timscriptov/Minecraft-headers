#pragma once
#include <string>
#include <memory>
#include <map>

class LevelStorage
{
public:
	//Fields
	char filler_LevelStorage[UNKNOW_SIZE];
public:
	//Virtual Tables
	virtual ~LevelStorage();
	virtual ~LevelStorage();
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	virtual void startSyncBatch();
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	virtual void clonePlayerData(gsl::basic_string_span<char const, -1>, gsl::basic_string_span<char const, -1>);
	//pure virtual method
	//pure virtual method
	//pure virtual method
	virtual void loadData(gsl::basic_string_span<char const, -1>, std::string&) const;
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	//pure virtual method
	virtual void freeCaches();
	//pure virtual method
	//pure virtual method
	virtual void corruptLevel();
	//pure virtual method
public:
	//Methods
	void savePlayerData(gsl::basic_string_span<char const, -1>, CompoundTag const&);
	void loadLocalPlayerData();
	void loadPlayerDataFromTag(gsl::basic_string_span<char const, -1>);
	void saveData(std::string const&, CompoundTag const&);
	void loadAllPlayerIDs() const;
	void getServerId(PlayerStorageIds const&);
	void getServerId(Player const&, bool);
	void loadLostPlayerData(Player const&, bool);
	void loadServerPlayerData(Player const&, bool);
	void save(Actor&);
	void loadPlayerData(PlayerStorageIds const&, bool);
public:
	//Objects
	static LevelStorage * LOCAL_PLAYER_TAG;
};//LevelStorage
