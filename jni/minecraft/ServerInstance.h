/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "AppPlatformListener.h"

class ServerInstanceEventCoordinator;

class ServerInstance : public AppPlatformListener
{
public:
	//char filler_ServerInstance[UNKNOW_SIZE];
public:
	virtual ~ServerInstance();
	virtual void onLowMemory();
	virtual void onLevelCorrupt();
	virtual void onGameModeChanged();
	virtual void onTick(int, int);
	virtual void onInternetUpdate();
	virtual void onGameSessionReset();
	virtual void onLevelExit();
	virtual void updateScreens();
public:
	ServerInstance(IMinecraftApp&, ServerInstanceEventCoordinator&);
	void leaveGameSync();
	void startLeaveGame();
	//void initializeServer(IMinecraftApp&, Whitelist&, PermissionsFile*, Core::FilePathManager*, std::chrono::duration<long long, std::ratio<1ll, 1ll> >, std::string, std::string, std::string, LevelSettings, int, bool, ConnectionDefinition, bool, std::vector<std::string, std::allocator<std::string> > const&, std::string, mce::UUID const&, IMinecraftEventing&, ResourcePackRepository&, ContentTierManager const&, ResourcePackManager&, std::function<std::unique_ptr<LevelStorage, std::default_delete<LevelStorage> > (Scheduler&)>, std::string const&, LevelData*, std::string, std::string, std::unique_ptr<EducationOptions, std::default_delete<EducationOptions> >, ResourcePackManager*, std::function<void ()>, std::function<void ()>, ServerMetrics*, DebugEndPoint*, bool);
	void startServerThread();
	void resume();
	void suspend();
	void isLeaveGameDone() const;
	void getLevelId();
	void getScriptEngine();
	void _threadSafeExecute(std::function<void ()>);
	void setWakeupFrequency(int);
	void getEventCoordinator();
	void queueForServerThread(std::function<void ()>);
	void disconnectAllClientsWithMessage(std::string);
	void stop();
	void _update();
	void _running() const;
public:
	static ServerInstance * SERVER_MAX_DELAY_BEFORE_SLOWDOWN;
};
