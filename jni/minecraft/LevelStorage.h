/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class PlayerStorageIds;

class LevelStorage
{
public:
	//char filler_LevelStorage[UNKNOW_SIZE];
public:
	virtual ~LevelStorage();
	virtual void startSyncBatch();
	//virtual void clonePlayerData(gsl::basic_string_span<char const, -1>, gsl::basic_string_span<char const, -1>);
	//virtual void loadData(gsl::basic_string_span<char const, -1>, std::string&) const;
	virtual void freeCaches();
	virtual void corruptLevel();
public:
	//void savePlayerData(gsl::basic_string_span<char const, -1>, CompoundTag const&);
	void loadLocalPlayerData();
	//void loadPlayerDataFromTag(gsl::basic_string_span<char const, -1>);
	void saveData(std::string const&, CompoundTag const&);
	void loadAllPlayerIDs() const;
	void getServerId(PlayerStorageIds const&);
	void getServerId(Player const&, bool);
	void loadLostPlayerData(Player const&, bool);
	void loadServerPlayerData(Player const&, bool);
	void save(Actor&);
	void loadPlayerData(PlayerStorageIds const&, bool);
public:
	static LevelStorage * LOCAL_PLAYER_TAG;
};
