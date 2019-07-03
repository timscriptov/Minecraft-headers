/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class GameCallbacks;
class Whitelist;
class PermissionsFile;
class GameModuleServer;
class ConnectionDefinition;

class Minecraft
{
public:
	//char filler_Minecraft[UNKNOW_SIZE];
public:
	virtual ~Minecraft();
	virtual void getEntityRegistry();
public:
	//Minecraft(IMinecraftApp&, GameCallbacks&, Whitelist&, PermissionsFile*, Core::FilePathManager*, std::chrono::duration<long long, std::ratio<1ll, 1ll> >, IMinecraftEventing&, NetworkHandler&, PacketSender&, unsigned char, Timer&, Timer&, ContentTierManager const&, ServerMetrics*);
	void getCommands();
	void hasCommands();
	void initCommands();
	void updateScreens();
	void startLeaveGame(bool);
	void setGameModeReal(GameType);
	void startClientGame(std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback> >);
	void getServerLocator();
	void resetGameSession();
	void joinWorldInProgress(std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback> >);
	void onClientCreatedLevel(std::unique_ptr<Level, std::default_delete<Level> >);
	void update();
	void getTimer();
	void getSimPaused() const;
	void isLeaveGameDone() const;
	void getLevel() const;
	void isOnlineClient();
	void getLastTimestep();
	void getNetworkHandler();
	void getResourceLoader();
	void getNetEventCallback();
	void getServerNetworkHandler();
	void init();
	void getServerLocator() const;
	void setSimTimePause(bool);
	void getGameModuleServer();
	void getStructureManager();
	void setGameModuleServer(std::unique_ptr<GameModuleServer, std::default_delete<GameModuleServer> >);
	void setSimTimeScale(float);
	void isModded();
	//void hostMultiplayer(std::string const&, std::unique_ptr<Level, std::default_delete<Level> >, Player*, mce::UUID const&, std::unique_ptr<NetEventCallback, std::default_delete<NetEventCallback> >, int, bool, bool, std::vector<std::string, std::allocator<std::string> > const&, std::string, ConnectionDefinition const&, std::unordered_map<PackIdVersion, std::string, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::string> > > const&, Scheduler&, TextFilteringProcessor*);
	void disconnectClient(NetworkIdentifier const&, std::string const&);
	void initAsDedicatedServer();
	void clientReset();
	void tickSimtime(int, int);
	void tickRealtime(int, int);
	void activateWhitelist();
	void setupServerCommands(std::string const&, std::string const&);
	void clearThreadCallbacks();
	void usesNonLocalConnection(NetworkIdentifier const&);
	void getEventing() const;
	void isInitialized() const;
	void getClientSubId() const;
	void getNetworkHandler() const;
	void getNetworkStatistics() const;
};
