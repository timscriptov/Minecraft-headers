/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class IMinecraftEventing;

class RealmsAPI
{
public:
	//char filler_RealmsAPI[UNKNOW_SIZE];
public:
	virtual ~RealmsAPI();
	//virtual void applyContentOnRealm(Realms::RealmId, std::vector<Realms::Content, std::allocator<Realms::Content> > const&, std::function<void (Realms::GenericStatus)>);
	//virtual void fetchAppliedPacks(Realms::RealmId, std::function<void (Realms::GenericStatus, std::vector<Realms::Content, std::allocator<Realms::Content> >)>);
	//virtual void checkForExistingPack(std::string const&, std::string const&, std::function<void (Realms::GenericStatus, bool)>);
public:
	RealmsAPI(Social::XboxLiveUser&, IMinecraftEventing&, std::string const&, std::string const&);
	void initialize();
	void setOptions(std::weak_ptr<Options>);
	//void getInviteCount(std::function<void (Realms::GenericStatus, int)>);
	void update();
	//void joinWorld(Realms::RealmId, std::function<void (std::string const&, int, bool)>, std::function<void (Realms::GenericStatus, RealmsAPI::JoinStatus, RealmsAPI::FailureReason)>, std::function<void (int)>, IMinecraftEventing::RealmConnectionFlow);
	void isInitialized() const;
	void getCachedRealmsTrialAvailable() const;
	//void acceptLink(std::string const&, std::function<void (Realms::GenericStatus, RealmsAPI::FailureReason, Realms::World)>);
	//void closeWorld(Realms::RealmId, std::function<void (Realms::GenericStatus)>, std::function<void (int)>);
	//void leaveWorld(Realms::RealmId, std::function<void (Realms::GenericStatus)>);
	//void resetWorld(Realms::RealmId, std::function<void (Realms::GenericStatus)>, std::function<void (int)>);
	//void deleteRealm(Realms::RealmId, std::function<void (Realms::GenericStatus)>);
	//void fetchWorlds(std::function<void (Realms::GenericStatus, std::vector<Realms::World, std::allocator<Realms::World> >)>);
	//void listInvites(std::function<void (Realms::GenericStatus, std::vector<Realms::Invite, std::allocator<Realms::Invite> >)>);
	//void acceptInvite(Realms::InviteId, std::function<void (Realms::GenericStatus, RealmsAPI::FailureReason)>);
	//void getBlocklist(Realms::RealmId, std::function<void (Realms::GenericStatus, std::vector<std::string, std::allocator<std::string> >)>);
	//void rejectInvite(Realms::InviteId, std::function<void (Realms::GenericStatus)>);
	//void setWorldInfo(Realms::RealmId, std::string const&, std::string const&, int, int, bool, std::function<void (Realms::GenericStatus, RealmsAPI::FailureReason)>);
	//void restoreBackup(Realms::RealmId, std::string, std::function<void (Realms::GenericStatus)>, std::function<void (int)>);
	//void addToBlocklist(Realms::RealmId, std::string const&, std::function<void (Realms::GenericStatus)>);
	//void getWorldMembers(Realms::RealmId, std::function<void (Realms::GenericStatus, std::vector<Realms::Player, std::allocator<Realms::Player> >)>);
	//void initializeWorld(Realms::RealmId, std::string const&, std::string const&, std::function<void (Realms::GenericStatus, RealmsAPI::FailureReason)>);
	//void updateWhitelist(Realms::RealmId, std::map<std::string, RealmsAPI::InviteAction, std::less<std::string>, std::allocator<std::pair<std::string const, RealmsAPI::InviteAction> > >, std::function<void (Realms::GenericStatus, Realms::World)>);
	//void getOnlinePlayers(std::function<void (Realms::GenericStatus, std::vector<Realms::World, std::allocator<Realms::World> >)>);
	//void getWorldfromLink(std::string const&, std::function<void (Realms::GenericStatus, Realms::World)>);
	//void isValidClubsName(std::string, std::function<void (Realms::GenericStatus, RealmsAPI::FailureReason)>);
	void isValidRealmName(std::string);
	//void fetchWorldBackups(Realms::RealmId, std::function<void (Realms::GenericStatus, std::vector<Realms::Backup, std::allocator<Realms::Backup> >)>);
	//void setUserPermission(Realms::RealmId, std::string const&, PlayerPermissionLevel const&, std::function<void (Realms::GenericStatus)>);
	//void updateRealmsConfig(Realms::RealmId, std::string const&, std::function<void (Realms::GenericStatus, std::string)>);
	//void removeFromBlocklist(Realms::RealmId, std::string const&, std::function<void (Realms::GenericStatus)>);
	//void updateTrialAvailable(std::function<void (Realms::GenericStatus)>);
	//void getInfiniteInviteLink(Realms::RealmId, std::function<void (Realms::GenericStatus, Realms::InviteLink)>);
	//void setDefaultPermissions(Realms::RealmId, PlayerPermissionLevel const&, std::function<void (Realms::GenericStatus)>);
	//void getRealmsConfigDetails(Realms::RealmId, std::function<void (Realms::GenericStatus, Realms::ConfigInfo)>);
	//void getSubscriptionDetails(Realms::RealmId, std::function<void (Realms::GenericStatus, Realms::SubscriptionInfo)>);
	//void setTexturePacksRequired(Realms::RealmId, bool const&, std::function<void (Realms::GenericStatus, RealmsAPI::FailureReason)>);
	//void createInfiniteInviteLink(Realms::RealmId, std::function<void (Realms::GenericStatus, Realms::InviteLink)>);
	//void getInviteCountFriendsOnly(std::function<void (Realms::GenericStatus, int)>, std::vector<std::string, std::allocator<std::string> > const&);
	//void getUserMemberOfWorldCount(std::function<void (Realms::GenericStatus, bool)>);
	//void getWorld(Realms::RealmId, std::function<void (Realms::GenericStatus, Realms::World)>);
	//void openWorld(Realms::RealmId, std::function<void (Realms::GenericStatus)>, std::function<void (int)>);
	void isFeatureOn(std::string const&) const;
	//void _internalCall(RealmsAPI::ApiCallType, std::string, std::string const&, std::string const&, std::string const&, std::function<void (unsigned short, web::http::http_response&)>, RequestEventPriority, Social::XboxLiveUser*);
	//void checkCompatibility(std::function<void (Realms::GenericStatus, RealmsAPI::Compatibility)>);
	void updateFeatureFlags();
	void _setRealmsEndpoints(std::string const&, std::string const&);
	//void initiateWorldUpload(std::string const&, int, bool, std::function<void (Realms::GenericStatus, std::string, std::string)>);
	//void getGlobalCertificate(std::string const&, std::function<void (Realms::GenericStatus, std::string)>, Social::XboxLiveUser*);
	//void initiateWorldDownload(std::string const&, int, std::string const&, std::function<void (Realms::GenericStatus, std::string, std::string, unsigned long long)>, std::function<void (int)>);
	void _processExecutionQueue();
	//void extractBackupsAndMetadata(web::json::value&);
	void setCachedRealmsTrialPurchased(bool);
	void sync();
};//RealmsAPI
