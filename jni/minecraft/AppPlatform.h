/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include <string>
#include <memory>

#include "CodeBuilder.h"
#include "Core.h"
#include "BedrockEngine.h"
#include "mce.h"

class AppAction;
class FilePickerSettings;
class PushNotificationMessage;
class PermissionRequestReason;
class FileStorageDirectory;
class PropertyBag;
class RectangleArea;
class ARVRPlatform;
class ResourceFileSystem;
class ExternalApp;
class VRControllerType;
class UriListener;
class ActivationUri;
class FullscreenMode;
class SecureStorageKey;
class NetworkChangeObserver;
class AppPlatformListener;
class UIScalingRules;

class AppPlatform
{
public:
	//char filler_AppPlatform[UNKNOW_SIZE];
public:
	virtual ~AppPlatform();
	virtual void restartRequested();
	virtual void getLoggingPath() const;
	virtual void isLowMemoryDevice() const;
	virtual void initializeScreenDependentResources();
	virtual void getHighPerformanceThreadsCount() const;
	virtual void getTotalHardwareThreadsCount() const;
	virtual void restartApp(bool);// 4
	virtual void getAchievementsListener() const;
	virtual void getAlternateDataUrl() const;
	virtual void loadPNG(mce::Image&, Core::Path const&);
	virtual void loadTGA(mce::Image&, Core::Path const&);
	virtual void loadJPEG(mce::Image&, Core::Path const&);
	virtual void loadTexture(Core::Path const&);// 128
	//virtual void loadTextureFromStream(buffer_span<unsigned char>);
	virtual void loadTextureFromStream(std::string const&);
	virtual void getKeyFromKeyCode(int, int, int);
	virtual void textEditComponentGainedFocus(std::string const&, int, bool, bool, bool);
	virtual void textEditComponentLostFocus();
	//virtual void showKeyboard(std::string const&, int, bool, bool, bool, int, glm::tvec2<float, (glm::precision)0> const&);// 6
	virtual void hideKeyboard();// 6
	virtual void blankLineDismissesChat() const;
	virtual void signWrapsTextEntry() const;
	virtual void isFullScreenKeyboard() const;
	virtual void actionSuspendsApp(AppAction) const;
	virtual void getKeyboardHeight() const;
	virtual void hideMousePointer();
	virtual void showMousePointer();
	virtual void getPointerFocus();// 4
	virtual void setPointerFocus(bool);// 4
	virtual void toggleSimulateTouchWithMouse();
	virtual void _fireLowMemory();// 34
	virtual void _fireAppSuspended();
	virtual void _fireAppResumed();// 44
	virtual void _fireAppFocusLost();
	virtual void _fireAppFocusGained();
	virtual void _fireResizeBegin();
	virtual void _fireResizeEnd();// 34
	virtual void _fireAppTerminated();
	virtual void hasFastAlphaTest() const;
	virtual void _fireAppConfigurationChanged();
	virtual void _fireAppPaused();// 34
	virtual void _fireAppUnpaused();
	virtual void discardBackbuffer();
	virtual void pickFile(std::shared_ptr<FilePickerSettings>);
	virtual void supportsAlbumExport() const;
	virtual void createPlatformPDFWriter();
	virtual void shareFile(Core::Path const&);
	virtual void hasHardwareBackButton();
	virtual void supportsMSAA() const;
	virtual void supports3rdPartyServers() const;
	virtual void supportsManualAddedServers() const;
	virtual void supportsFilePicking() const;
	virtual void supportsTouch() const;
	virtual void supportsKeyboardMouse() const;
	virtual void supportsGamepad() const;
	virtual void supportsClipboard() const;
	virtual void setClipboard(std::string const&) const;
	virtual void getClipboardText() const;
	virtual void supportsShare() const;
	virtual void share() const;
	virtual void supports3DExport() const;
	virtual void allowSplitScreen();
	virtual void splitScreenRenderDistScalar(unsigned int);
	virtual void uiOpenRenderDistScalar();
	virtual void pushNotificationReceived(PushNotificationMessage const&);
	virtual void openStoragePermissionRequest(PermissionRequestReason, std::function<void ()>);
	virtual void setStorageDirectory(FileStorageDirectory, bool, PropertyBag const&);
	virtual void setInitialStorageDirectory(FileStorageDirectory);
	virtual void getStorageDirectory() const;
	virtual void setStorageDirectoryChangeDenied(std::function<void (FileStorageDirectory)>);
	virtual void setStorageDirectoryChanged(std::function<void (Core::Path const&)>);
	virtual void runStoragePermissionResultCallback();
	virtual void hasExternalStoragePermission();
	virtual void delayOptionSaveUntilCloudSync() const;
	virtual void updateTextEditBoxPosition(RectangleArea const&, RectangleArea const&, float);
	virtual void createHolographicPlatform(ARVRPlatform) const;
	virtual void trialCorrelationStart();
	virtual void createAndroidLaunchIntent();
	virtual void supportsScripting() const;
	virtual void supportsInPackageRecursion() const;
	virtual void getFeedbackHelpLink() const;
	virtual void getModalErrorMessageProc();
	virtual void updateLocalization(std::string const&);
	virtual void setSleepEnabled(bool);
	virtual void getSettingsPath();
	virtual void getPackagedShaderCachePath();
	virtual void getShaderCachePath();
	virtual void getUserdataPathForLevels() const;
	virtual void getCacheStoragePath();
	virtual void getOnDiskScratchPath();
	virtual void getOptimalLDBSize();
	virtual void showDialog(int);
	virtual void createUserInput();
	virtual void getUserInputStatus();
	virtual void getUserInput();
	virtual void getFileAccess(ResourceFileSystem);// 16
	virtual void copyImportFileToTempFolder(Core::Path const&);
	virtual void registerFileForCollectionWithCrashDump(Core::Path const&);
	virtual void getScreenWidth();
	virtual void getScreenHeight();
	virtual void setScreenSize(int, int);// 2
	virtual void setWindowSize(int, int);// 2
	virtual void setWindowText(std::string const&);// 2
	virtual void getPixelsPerMillimeter();
	virtual void getOperationMode() const;
	virtual void allowContentLogWriteToDisk();
	virtual void hasBroadcastPermission();
	virtual void hasAppInstalled(ExternalApp) const;
	virtual void navigateToStoreForApp(ExternalApp) const;
	virtual void launchApp(ExternalApp) const;
	virtual void canSupportApp(ExternalApp) const;
	virtual void startBroadcast();// 4
	virtual void isContentAutoUpdateAllowed() const;
	virtual void getMaxSimultaneousDownloads() const;
	virtual void isDownloadAndImportBlocking() const;
	virtual void isDownloadBuffered() const;
	virtual void supportsAutoSaveOnDBCompaction() const;
	virtual void updateTextBoxText(std::string const&);
	virtual void isKeyboardVisible();
	virtual void supportsVibration();
	virtual void vibrate(int);
	virtual void getAssetFileFullPath(Core::Path const&);
	virtual void readAssetFile(Core::Path const&);// 604
	virtual void listAssetFilesIn(Core::Path const&, std::string const&) const;
	virtual void supportsClientUpdate() const;
	virtual void getClientUpdateUrl() const;
	virtual void checkLicense();
	virtual void hasBuyButtonWhenInvalidLicense();
	virtual void isNetworkAvailable();
	virtual void isNetworkEnabled(bool);
	virtual void setNetworkAllowed(bool);
	virtual void isNetworkAllowed();
	virtual void multiplayerRequiresPremiumAccess() const;
	virtual void isTelemetryAllowed();
	virtual void isTrialWorldsTransferToFullGameAllowed() const;
	virtual void buyGame();
	virtual void finish();
	virtual void canLaunchUri(std::string const&);
	virtual void launchUri(std::string const&);
	virtual void launchSettings();// 2
	virtual void isRatingsPromptSupported() const;
	virtual void launchRatingsPrompt();
	virtual void useXboxControlHelpers() const;
	virtual void getPlatformType() const;
	virtual void isCentennial() const;
	virtual void getPackageFamilyName() const;
	virtual void getBuildPlatform() const;
	virtual void setARVRPlatform(ARVRPlatform);// 4
	virtual void getARVRPlatform() const;
	virtual void getMaxActiveTessellatorChunks() const;
	virtual void getNumberOfParticleFramesToInterpolate() const;
	virtual void setVRControllerType(VRControllerType);
	virtual void getVRControllerType() const;
	virtual void hasIDEProfiler();// 4
	virtual void getPlatformStringVar(int);
	virtual void getMaximumUsedMemory();
	virtual void getMaxSimRadiusInChunks() const;
	virtual void getBroadcastAddresses();
	virtual void getIPAddresses();
	virtual void useAppPlatformForTelemetryIPAddress();
	virtual void getModelName();
	virtual void usesHDRBrightness() const;
	virtual void getLastDeviceSessionId() const;
	virtual void setLastDeviceSessionId(std::string const&);
	virtual void getDeviceId() const;
	virtual void registerUriListener(UriListener&);
	virtual void registerUriListener(std::string const&, UriListener&);
	virtual void unregisterUriListener(UriListener const&);
	virtual void notifyUriListeners(ActivationUri const&);
	virtual void notifyUriListenerRegistrationDone();
	virtual void setFullscreenMode(FullscreenMode);
	virtual void isNetworkThrottled();
	virtual void isLANAllowed() const;
	virtual void trackPurchaseEvent(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
	virtual void sendBrazeEvent(std::string const&);
	virtual void sendBrazeEventWithProperty(std::string const&, std::string const&, int);
	virtual void sendBrazeEventWithStringProperty(std::string const&, std::string const&, std::string const&);
	virtual void sendBrazeToastClick();
	virtual void sendBrazeDialogButtonClick(int);
	virtual void collectGraphicsHardwareDetails();
	virtual void getEdition() const;
	virtual void getOSVersion() const;
	virtual void isBrazeEnabled() const;
	virtual void isFireTV() const;
	virtual void isWin10Arm() const;
	virtual void setThreadsFrozen(bool);
	virtual void areThreadsFrozen() const;
	virtual void getDefaultSafeZoneScaleX() const;
	virtual void getDefaultSafeZoneScaleY() const;
	virtual void getDefaultScreenPositionX() const;
	virtual void getDefaultScreenPositionY() const;
	virtual void isQuitCapable() const;
	virtual void requireControllerAtStartup() const;
	virtual void getDefaultInputMode() const;
	virtual void supportsTextToSpeech() const;
	virtual void getSecureStorage();
	virtual void getSecureStorageKey(std::string const&);
	virtual void setSecureStorageKey(std::string const&, SecureStorageKey const&);
	virtual void reloadRenderResourcesOnResume() const;
	virtual void shouldPauseDownloadsWhenEnterGame() const;
	virtual void compareAppReceiptToLocalReceipt(std::string const&);
	virtual void getThirdPartyPackUUID() const;
	virtual void alwaysUseZippedPacksForDlc() const;
	virtual void allowsResourcePackDevelopment() const;
	virtual void supportsLegacySinglePremiumCacheDirectory() const;
	virtual void supportsWorldShare() const;
	virtual void hasJournalingFilesystem() const;
	virtual void isAutoCompactionEnabled() const;
	virtual void useInMemoryLevelDB() const;
	virtual void getLevelSaveInterval() const;
	virtual void getOptionsSaveInterval() const;
	virtual void requiresXboxLiveSigninToPlay() const;
	virtual void requiresLiveGoldForMultiplayer() const;
	virtual void shouldRegisterForXboxLiveNotifications() const;
	virtual void isRealmsEnabled() const;
	virtual void minimizeBackgroundDownloads() const;
	virtual void requiresAutoSaveIconExplanationPopup() const;
	virtual void requiresPatchNoticePopup() const;
	virtual void getMultiplayerServiceListToRegister();
	virtual void getBroadcastingMultiplayerServiceIds(bool, bool);
	virtual void maxFileDataRequestConcurrency() const;
	virtual void goToExternalConsumablesStoreListing() const;
	virtual void getStoreNetworkFailureTimeout() const;
	virtual void createLoggingStorageArea(Core::FileAccessType, Core::Path const&);
	virtual void handlePlatformSpecificSPIErrors(std::string const&);
	virtual void useNativeStoreForRealmsPurchase();
	virtual void importAsFlatFile() const;
	virtual void isCodeBuilderSupported() const;
	virtual void createCodeBuilder(CodeBuilder::PlatformArguments&&) const;
	virtual void createXboxLiveSignInHandler() const;
	virtual void getPlatformTTSExists() const;
	virtual void getPlatformTTSEnabled() const;
	//virtual void createHttpClient(web::uri, web::http::client::http_client_config);
	virtual void getRenderSurfaceParameters() const;
	virtual void shouldRemoveGraphicsDeviceOnAppTermination() const;
	virtual void isJoinableViaExternalServers() const;
	virtual void _notifyUriListeners(ActivationUri const&, bool);
	virtual void getPlatformDpi() const;
	virtual void getPlatformUIScalingRules() const;
	virtual void _onTeardown();
public:
	AppPlatform();
	void accessPlatformRuntimeInformation_Shim();
	void getShareUri() const;
	void getShareText() const;
	void getShareTitle() const;
	void getPlatformRuntimeInformation() const;
	void isEduMode() const;
	void initialize();
	void getAppLifecycleContext();
	void teardown();
	void getFocusState();
	void getUIScalingRules() const;
	void getScratchPath();
	void isTerminating() const;
	void setShareData(std::string, std::string, std::string);
	void isInitialized();
	void getDefaultUIProfile() const;
	void addNetworkChangeObserver(NetworkChangeObserver&);
	void setUIScalingRules(UIScalingRules);
	void StringizeUIScalingRules(UIScalingRules);
	void addListener(AppPlatformListener*, float);
	void removeListener(AppPlatformListener*);
	void getDeviceIdWarning() const;
	void createUserInput(int);
	void notifyTerminate();
	void setCommonPlatformShim(BedrockEngine::CommonPlatform*);
	void getShowLostFocusToasts();
	void setShowLostFocusToasts(bool);
	void _initializeLoadProfiler();
	void setAllowLostFocusToasts(bool);
	void calculateIfLowMemoryDevice();
	void setPendingProtocolActivation(ActivationUri const&);
	void accessPlatformBuildInformation_Shim();
	void setDpi(int);
	void loadImage(mce::Image&, Core::Path const&);
	void getPlatformBuildInformation() const;
	void getDpi() const;
public:
	static AppPlatform * SETTINGS_PATH;// 1032
	static AppPlatform * LOG_PATH;
	static AppPlatform * HOME_PATH;
	static AppPlatform * mIsInitialized;
	static AppPlatform * mProtocolMutex;
	static AppPlatform * SHADERCACHE_PATH;
	static AppPlatform * mPendingProtocolActivation;
};
