/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "App.h"
#include "AppPlatformListener.h"
#include "BlockSourceListener.h"
#include "LevelListener.h"
#include "ResourcePackListener.h"
#include "Realms.h"
#include "SerialWorkList.h"
#include "Social.h"
#include "ui.h"
#include "BedrockEngine.h"
#include "LevelSettings.h"

class ActivationArguments;
class IClientInstance;
class ResetCallbackObject;
class UIEventCoordinator;
class TextureAtlasStatus;
class HolographicPlatform;
class Timer;
class ResourcePackResponse;
class PackType;
class ResourcePacksInfoData;
class MultiplayerLockedContext;
class TestAssetCommandType;
class TestCommandType;
class ContentIdentity;
class StartIntent;
class ActorUniqueID;
class CodeBuilderObserver;

class MinecraftGame : public BedrockEngine::AppIsland, public App, public AppPlatformListener, public BlockSourceListener, public LevelListener, public ResourcePackListener
// : public Core::Observer<OptionsObserver, Core::SingleThreadedLock>
{
public:
	//char filler_MinecraftGame[UNKNOW_SIZE];
public:
	virtual ~MinecraftGame();
	virtual void processActivationArguments(ActivationArguments const&);
	virtual void audioEngineOn();
	virtual void audioEngineOff();
	virtual void update();
	virtual void handleBack(bool);
	virtual void play(std::string const&, Vec3 const&, float, float);
	virtual void playUI(std::string const&, float, float);
	virtual void stopSound(std::string const&);
	virtual void stopSounds();
	virtual void useTouchscreen();
	virtual void setUISizeAndScale(int, int, float);
	virtual void setRenderingSize(int, int);
	virtual void setSmoothFontStyle();
	virtual void setUIFontStyle();
	virtual void startLocalServer(std::string const&, std::string const&, ContentIdentity const&, LevelSettings, StartIntent);
	virtual void createAndUploadWorldToRealm(std::string const&, std::string const&, ContentIdentity const&, LevelSettings, Realms::World, std::function<void ()>);
	virtual void getSoundEngine() const;
	virtual void getTextToSpeechSystem();
	virtual void getTextToSpeechSystem() const;
	virtual void onLowMemory();
	virtual void onAppFocusLost();
	virtual void onAppFocusGained();
	virtual void onAppPaused();
	virtual void onAppUnpaused();
	virtual void onAppPreSuspended();
	virtual void onAppSuspended();
	virtual void onAppResumed();
	virtual void hasNetworkPrivileges(bool);
	virtual void onPlayerLoaded(IClientInstance&, Player&);
	virtual void onDimensionChanged();
	virtual void setDisableInputForAllOtherClients(int, bool);
	virtual void onGameEventNotification(ui::GameEventNotification);
	virtual void playerListChanged();
	virtual void onLevelDestruction(std::string const&);
	virtual void setTransferCallback(std::function<void (IClientInstance&)>);
	virtual void requestLeaveGame(bool, bool);
	virtual void startLeaveGame();
	virtual void isLeaveGameDone() const;
	virtual void destroyGame();
	virtual void setupCommandParser();
	virtual void setupCoreCommandEnums();
	virtual void onClientCreatedLevel(IClientInstance&);
	virtual void getGameRenderer() const;
	virtual void getPatchNotesManager() const;
	virtual void getUIDefRepo() const;
	virtual void joinRealmsGame(Realms::World const&, Social::GameConnectionInfo const&);
	virtual void joinRealmFromInvite(Realms::World const&);
	virtual void joinRealmFromInvite(Social::MultiplayerGameInfo const&);
	virtual void setRealmsLoadingLink(bool);
	virtual void joinMultiplayerGame(std::string const&, Social::MultiplayerServiceIdentifier);
	virtual void joinMultiplayer(Social::GameConnectionInfo, bool);
	virtual void isLocalPlayer(ActorUniqueID const&) const;
	virtual void hasConnectionToRemoteServer() const;
	virtual void setHasConnectionToRemoteServer(bool);
	virtual void setLeaveGameInProgressAsReadyToContinue();
	virtual void getPrimaryClientInstance();
	virtual void getPrimaryClientInstance() const;
	virtual void getClientInstanceMap() const;
	virtual void tryGetClientInstanceFromPlayerUUID(mce::UUID const&) const;
	virtual void getUIRenderClient() const;
	virtual void getClientInstanceCount() const;
	virtual void forEachClientInstance(std::function<void (IClientInstance&)>);
	virtual void getPrimaryLocalPlayer();
	virtual void getPrimaryLocalPlayer() const;
	virtual void isPrimaryLevelCrossPlatformMultiplayer() const;
	virtual void isPrimaryLevelMultiplayer() const;
	virtual void getPrimaryGuiData();
	virtual void getPrimaryUserOptions();
	virtual void getPrimaryUserOptions() const;
	virtual void isPrimaryUserSigninInProgress() const;
	virtual void resetInput();
	virtual void getDpadScale() const;
	virtual void canActivateKeyboard();
	virtual void reloadAnimationAndGeometryData(bool);
	virtual void getGeometryGroup() const;
	virtual void getParticleEffectGroup() const;
	virtual void getContentAcquisition() const;
	virtual void getOfferRepository() const;
	virtual void getTrialManager() const;
	virtual void getPersonaService() const;
	virtual void getContentCatalogService() const;
	virtual void getStoreCatalogConfig() const;
	virtual void getStoreCatalog() const;
	virtual void getLessonProgressionService();
	virtual void getLibraryService() const;
	virtual void getChannelService() const;
	virtual void getLibraryRepository() const;
	virtual void getActorAnimationGroup() const;
	virtual void getActorAnimationControllerGroup() const;
	virtual void getThirdPartyServerRepository() const;
	virtual void getSkinRepository() const;
	virtual void getPersonaRepository() const;
	virtual void getWorldTemplateManager() const;
	virtual void getResourcePackRepository() const;
	virtual void getResourcePackManager() const;
	virtual void getServerResourcePackManager();
	virtual void getPackManifestFactory();
	virtual void getKeyProvider() const;
	virtual void getAccessibilityProvider() const;
	virtual void getContentTierManager() const;
	virtual void getPackSourceFactory() const;
	virtual void getResourcePackDownloadManager(std::string const&) const;
	virtual void getResourceLoadManager();
	virtual void getLevelListCache();
	virtual void hasAllValidCrossPlatformSkin() const;
	virtual void isMultiplayerServiceManagerReady() const;
	virtual void getCodeBuilder();
	virtual void stopCodeBuilder();
	virtual void addCodeBuilderObserver(CodeBuilderObserver&);
	virtual void isCodeBuilderInProgress();
	virtual void getMultiplayerServiceManager() const;
	virtual void getInteractivityManager() const;
	virtual void isMixerInteractiveEnabled();
	virtual void getUserManager() const;
	virtual void getEventing() const;
	virtual void getServerInstance();
	virtual void getClientNetworkSystem();
	virtual void getClientNetworkSystem() const;
	virtual void getActiveDirectoryIdentity();
	virtual void clearCache();
	virtual void releaseClientSubId(unsigned char);
	virtual void isStartingGame() const;
	virtual void addSubClientInstanceAndAssociateToUser(int);
	virtual void retrieveCIDToClientMap();
	virtual void setHoloscreenHalfWidth(float);
	virtual void getHoloscreenHalfWidth();
	virtual void getForceMonoscopic() const;
	virtual void isReadyToRender() const;
	virtual void registerUpsellScreen();
	virtual void getPrimarySceneFactory() const;
	virtual void getMainSceneStack() const;
	virtual void getUIRouter();
	virtual void getRealms();
	virtual void getRealmsContentService();
	virtual void getClubsService();
	virtual void getPresenceManager();
	virtual void getPrimaryMinecraft();
	virtual void getAutomationClient() const;
	virtual void getWebSocketCommManager();
	virtual void isDedicatedServer() const;
	virtual void isEduMode() const;
	virtual void onNetworkMaxPlayersChanged(unsigned int);
	//virtual void setTestExecuteCommandCallback(std::function<void (TestCommandType, std::vector<std::string, std::allocator<std::string> > const&)> const&);
	//virtual void setTestAssetCommandCallback(std::function<void (TestAssetCommandType, std::vector<std::string, std::allocator<std::string> > const&)> const&);
	//virtual void runTestExecuteCommandCallback(TestCommandType, std::vector<std::string, std::allocator<std::string> > const&) const;
	//virtual void runTestAssetCommandCallback(TestAssetCommandType, std::vector<std::string, std::allocator<std::string> > const&) const;
	virtual void getLaunchedForHMDPlatform() const;
	virtual void getFileArchiver();
	virtual void getWeakFileArchiver();
	virtual void getCurrentInputMode() const;
	virtual void getContentManager();
	virtual void getResourceContentManager();
	virtual void getMultiplayerDisabledTextTitle(MultiplayerLockedContext) const;
	virtual void getMultiplayerDisabledTextBody(MultiplayerLockedContext) const;
	virtual void getLocalServerLevel() const;
	virtual void getHolosceneRenderer() const;
	virtual void getExternalServer() const;
	virtual void getTextures() const;
	virtual void getStoreCacheTextures() const;
	virtual void getMinecraftGraphics();
	virtual void getTextureAtlas() const;
	virtual void getUIRepository() const;
	virtual void getSeasonsRenderer();
	virtual void getFilePathManager();
	virtual void setUseFontOverrides(bool);
	virtual void getFontHandle() const;
	virtual void getRuneFontHandle() const;
	virtual void getUnicodeFontHandle() const;
	virtual void getSmoothFontHandle() const;
	virtual void getUIFontHandle() const;
	virtual void getEmoticonManager() const;
	virtual void getTextToIconMapper() const;
	virtual void getMouseGrabbed() const;
	virtual void getActorResourceDefinitionGroup() const;
	virtual void getActorResourceDefinitionGroupMutable();
	virtual void getRenderControllerGroup() const;
	virtual void getRenderControllerGroup();
	virtual void requestScreenshot(ScreenshotOptions&);
	virtual void onActiveResourcePacksChanged(ResourcePackManager&);
	virtual void onFullPackStackInvalid();
	virtual void onLanguageSubpacksChanged();
	virtual void onBaseGamePackDownloadComplete();
	virtual void displayActiveDirectoryLoginDialog();
	virtual void handleReloadUIDefinitions();
	virtual void onPushNotificationReceived(PushNotificationMessage const&);
	virtual void getTreatmentService() const;
	virtual void getTreatmentPackDownloadMonitor() const;
	virtual void getEntitlementManager();
	virtual void getDateManager() const;
	virtual void grabMouse();
	virtual void releaseMouse();
	virtual void muteAudio();
	virtual void unMuteAudio();
	virtual void generateClientId(bool, bool&, unsigned long long, std::shared_ptr<Social::User>);
	virtual void setResourcePacksInfoData(ResourcePacksInfoData const&);
	virtual void getResourcePacksInfoData();
	virtual void handleResourcePackConfirmation(ResourcePackResponse, bool);
	virtual void addDownloadingCachedPack(std::string, unsigned long long);
	virtual void updateDownloadingCachedPack(std::string const&, unsigned long long);
	virtual void finishDownloadingCachedPack(std::string const&, PackType, Core::Path const&);
	virtual void getResourcePackProgress();
	virtual void getResourcePackDownloadingProgress(std::string&);
	virtual void isHostingLocalDedicatedServer() const;
	virtual void pauseContentDownloads();
	virtual void resumeContentDownloads();
	virtual void getUIMeasureStrategy();
	virtual void copyInternalSettingsFolderToExternalLocation() const;
	virtual void onClientLevelExit(IClientInstance&, unsigned int);
	virtual void AllowedToProcedePastStartMenu();
	virtual void isInGame() const;
	virtual void isInRealm() const;
	virtual void fadeOutMusic();
	virtual void isInitialized() const;
	virtual void useMinecraftVersionOfXBLUI() const;
	virtual void isWin10MobileDevice() const;
	virtual void setProfilerIsOn(bool);
	//virtual void setTestAutomationCallback(std::function<void (std::vector<std::string, std::allocator<std::string> > const&)>);
	virtual void getOptionsSetforAutomation() const;
	virtual void onPrimaryUserReconnect(Social::UserPlatformConnectionResult, bool);
	virtual void getCubemapBackgroundResources();
	virtual void onForceCloudSave();
	virtual void onOptionsLoadBegin();
	virtual void onOptionsLoadComplete();
	virtual void shouldShowRatingsPrompt() const;
	virtual void getApp();
	virtual void getSuspended();
	virtual void getScreenshotRecorder();
	virtual void getClientBlobCache();
	virtual void getFileLogEndPoint() const;
	virtual void getEDUSystems();
	virtual void queueSubclientRemoval(unsigned char);
	virtual void logoffAllSubclients();
	virtual void setIsInGame(bool);
	virtual void getInput() const;
	virtual void initImpl();
	virtual void refocusMouse();
	virtual void trySyncLegacyOffers();
	virtual void checkForPiracy();
	virtual void getDevConsoleLogger() const;
public:
	MinecraftGame(int, char**);
	void setTextboxText(std::string const&, int);
	void SetRunningOnTestCloud(bool);
	void doPrimaryClientReadyWork(std::function<void ()>);
	void _initAudio(SerialWorkList::WorkSections&);
	void _initPacks(SerialWorkList::WorkSections&);
	void _initPostA(SerialWorkList::WorkSections&);
	void _initPostB(SerialWorkList::WorkSections&);
	void _initPostC(SerialWorkList::WorkSections&);
	void _initPostE(SerialWorkList::WorkSections&);
	void _initStep1(SerialWorkList::WorkSections&);
	void _initStep2(SerialWorkList::WorkSections&);
	void _initStep3(SerialWorkList::WorkSections&);
	void _initStep5(SerialWorkList::WorkSections&);
	void startFrame();
	void _initFinish(SerialWorkList::WorkSections&);
	void _initStep2A(SerialWorkList::WorkSections&);
	void _initStep2B(SerialWorkList::WorkSections&);
	void preShutDown();
	void updateAudio(IClientInstance&, Timer const&);
	void updateStats();
	void _InitStarted();
	void _initLogging(SerialWorkList::WorkSections&);
	void handleInvite(Social::MultiplayerServiceIdentifier);
	void initEventing();
	void onUserSignin(unsigned int, Social::IdentityType);
	void setDpadScale(float);
	void _InitComplete();
	void _initDatabase(SerialWorkList::WorkSections&);
	void _initEventing(SerialWorkList::WorkSections&);
	void _waitForAudio(SerialWorkList::WorkSections&);
	void getServerGUID();
	void onUserSignout();
	void openPauseMenu();
	void setupRenderer(HolographicPlatform&);
	void _onResumeBegin(SerialWorkList::WorkSections&);
	void getLevelLoader();
	void shutdownServer();
	void updateGraphics(IClientInstance&, Timer const&);
	void _getShaderGroup();
	void _initAppConfigs();
	void _onResumeFinish(SerialWorkList::WorkSections&);
	void _updateProfiler();
	void isServerVisible();
	void onFrameRendered();
	void reloadMaterials();
	void _initFontHandles(SerialWorkList::WorkSections&);
	void getDeferredTasks();
	void teardownRenderer(bool);
	void _buildClientStack(bool);
	void _initDefaultFonts(SerialWorkList::WorkSections&);
	void _initFontMetadata(SerialWorkList::WorkSections&);
	void _initUserComplete(SerialWorkList::WorkSections&);
	void _loadLanguageData();
	void continueLeaveGame();
	void getClientInstance(unsigned char);
	void setLaunchedForHMD(ARVRPlatform);
	//void _initHummingbirdUI(SerialWorkList::WorkSections&, std::shared_ptr<MinecraftGame::InitContext>&);
	void _initMinecraftGame();
	void _initPostFontAsync(SerialWorkList::WorkSections&);
	void _loadSoundAndMusic();
	//void _setSuspendedState(MinecraftGame::SuspendState);
	void _topSceneIsLoading();
	void handleIdentityLost();
	void setupDocumentation();
	void _initMultiplayerMgr(SerialWorkList::WorkSections&);
	void _initNetworkHandler(SerialWorkList::WorkSections&);
	void _initResourceLoader(SerialWorkList::WorkSections&);
	void _onInitRemoteSystem(std::function<void ()>);
	void _onTTSOptionChanged();
	void initOptionObservers(IClientInstance&);
	void onKeyboardDismissed(int);
	void setAppWillTerminate(bool);
	void updateFoliageColors();
	void _initUILoadAsyncWait(SerialWorkList::WorkSections&);
	void _initWaitForSkinRepo(SerialWorkList::WorkSections&);
	void cleanReloadMaterials();
	void handleIdentityGained();
	void handleLicenseChanged();
	void resetThreadCallbacks();
	void waitAsyncSuspendWork();
	void _initPostFontBlocking(SerialWorkList::WorkSections&);
	void _initWaitForOfferRepo(SerialWorkList::WorkSections&);
	void _onTextureAtlasStatus(TextureAtlasStatus const&);
	void createDynamicTextures(ResourcePackManager&);
	void generateDocumentation();
	void getUIEventCoordinator();
	void handleInputPaneHidden();
	void setUIEventCoordinator(std::unique_ptr<UIEventCoordinator, std::default_delete<UIEventCoordinator> >&&);
	void _deinitOptionObservers(IClientInstance&);
	void _getLevelStorageSource();
	void _initPatchNotesManager();
	void _initWaitForPatchNotes(SerialWorkList::WorkSections&);
	void _onEntitlementsChanged();
	void destroyDynamicTextures();
	void doUserManagerReadyWork(std::function<void ()>);
	void handleShowUpsellScreen(bool);
	void setResetCallbackObject(ResetCallbackObject*);
	void _onResumeReloadTextures(SerialWorkList::WorkSections&);
	void getServerNetworkHandler();
	void setKeyboardForcedHeight(float, bool);
	void _beginReloadingResources();
	void _buildClientStartupStack();
	//void _initCreatePrimaryClient(SerialWorkList::WorkSections&, std::shared_ptr<MinecraftGame::InitContext>&);
	void _initTestClientInterface(SerialWorkList::WorkSections&);
	void _initWaitForFrameBuilder(SerialWorkList::WorkSections&);
	void _initWaitForLocalization(SerialWorkList::WorkSections&);
	void _initWaitForOfferLicense(SerialWorkList::WorkSections&);
	void _loadGlobalResourcePacks(SerialWorkList::WorkSections&);
	void _onResumeRestartServices(SerialWorkList::WorkSections&);
	void _pushAlwaysActiveScreens();
	void _removePendingSubclients();
	void _finishReloadingResources(ResourcePackManager&, bool);
	void _getIpAddressForTelemetry();
	void _loadInitialPackResources(ResourcePackManager&, bool);
	//void _initPrimaryClientComplete(SerialWorkList::WorkSections&, std::shared_ptr<MinecraftGame::InitContext>&);
	void _initWaitForContentManager(SerialWorkList::WorkSections&);
	void _onStorageDirectoryChanged(Core::Path const&);
	void setOptionsSetForAutomation(bool);
	void _cycleRoundRobinClientSubId();
	void _initPerUserOptionObservers(IClientInstance&);
	void _initPushAlwaysActiveScreen(SerialWorkList::WorkSections&);
	void _onResumeFontReloadTextures(SerialWorkList::WorkSections&);
	void _performNetworkReadyActions();
	void _registerOnInitUriListeners();
	void adjustClientsUISizeAndScale(int, int, float);
	void adjustClientsUISizeAndScale();
	void _initFileSystemSpaceTracking(SerialWorkList::WorkSections&);
	void _loadAdditionalPackResources(bool);
	void _onResumeQueueReloadTextures(SerialWorkList::WorkSections&);
	void _initWaitForMainMenuResources(SerialWorkList::WorkSections&);
	void _onActiveResourcePacksChanged(ResourcePackManager&, bool);
	void _onPrimaryUserConnectComplete(Social::UserPlatformConnectionResult, bool, bool);
	void _unregisterOnInitUriListeners();
	void currentScreenShouldStealMouse();
	void onClientUISizeAndScaleChanged();
	void _initPerMachineOptionObservers();
	void _initWaitForDefaultFontsToLoad(SerialWorkList::WorkSections&);
	void _initWaitForFontMetadataToLoad(SerialWorkList::WorkSections&);
	void _initWaitForResourceRepository(SerialWorkList::WorkSections&);
	void navigateToPlayScreenFriendsTab();
	void _deserializeGlobalResourcePacks();
	void _notifyOnFullVanillaPackOnStack(SerialWorkList::WorkSections&);
	void _waitForFileSystemSpaceTracking(SerialWorkList::WorkSections&);
	void _initWaitForWorldTemplateManager(SerialWorkList::WorkSections&);
	void _onResumeQueueFontReloadTextures(SerialWorkList::WorkSections&);
	void getClientInstanceEventCoordinator();
	void getServerInstanceEventCoordinator();
	void _platformShowsHdrCalibrationScreen();
	void _populateParticleComponentRegistry();
	void getFunctionalTestAutomationCallback();
	void _loadLastGlobalResourcePacksFromFile(bool, bool);
	void initFoliageAndBlockTextureTessellator();
	void _initNotifyOnActiveResourcePacksChanged(SerialWorkList::WorkSections&);
	void _initUpdateFontsBasedOffOfOverrideEnable(SerialWorkList::WorkSections&);
	void _addSubClientInstanceAndAssociateToUserInternal(int, bool);
	void returnJoinLobbyResultBasedOnPendingRealmsInvites();
	void onTick();
	void _initTTS(SerialWorkList::WorkSections&);
	void endFrame();
	void _initUser(SerialWorkList::WorkSections&);
	void joinRealm(Realms::World const&);
	void tickInput();
	void _isSuspended() const;
	void useController() const;
	void _serverIsActive() const;
	void isIPv4Supported() const;
	void isIPv6Supported() const;
	void hasDestroyedGame() const;
	void getClientInstance(unsigned char) const;
	void getDevicePerfTier() const;
	void isModalWorkPending() const;
	void primaryLevelExists() const;
	void isWaitingForPresent() const;
	void IsRunningOnTestCloud() const;
	void _isShowingLoadingScreen() const;
	void tryGetIdForNewSubClient(int, unsigned char&) const;
	void _buildTreatmentPackStack(bool) const;
	void getDevConsoleLogFileName() const;
	void getModalWorkItemsPending() const;
	void isSplitscreenJoinEnabled() const;
	void getModalWorkItemsComplete() const;
	void _getSwitchableMaterialList() const;
	void _shouldInGameLoadResources() const;
	void canAddSplitscreenSubClient(int) const;
	void _getDefaultNetworkMaxPlayers() const;
	void _isWaitingOnADAuthentication() const;
	void _runningServerWhileSuspended() const;
	void getOculusPlatformMessagePump() const;
	void isPrimaryClientInstanceReady() const;
public:
	static MinecraftGame * WORLD_PATH;
	static MinecraftGame * _hasInitedStatics;
};
