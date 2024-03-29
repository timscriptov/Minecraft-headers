/***
 *	MCPE 1.13.0.1
 ***/
#pragma once
#include "AppPlatform.h"

class ANativeActivity;
class ImagePickingCallback;

class AppPlatform_android : public AppPlatform
{
public:
	//char filler_AppPlatform_android[UNKNOW_SIZE];
public:
	virtual ~AppPlatform_android();
	virtual void getLoggingPath() const;
	virtual void getHighPerformanceThreadsCount() const;
	virtual void getPackagePath() const;
	virtual void getDataUrl() const;
	virtual void loadPNG(mce::Image&, Core::Path const&);
	virtual void loadTGA(mce::Image&, Core::Path const&);
	virtual void loadJPEG(mce::Image&, Core::Path const&);
	virtual void getKeyFromKeyCode(int, int, int);
	virtual void textEditComponentGainedFocus(std::string const&, int, bool, bool, bool);
	virtual void textEditComponentLostFocus();
	//virtual void showKeyboard(std::string const&, int, bool, bool, bool, int, glm::tvec2<float, (glm::precision)0> const&);
	virtual void hideKeyboard();
	virtual void isFullScreenKeyboard() const;
	virtual void actionSuspendsApp(AppAction) const;
	virtual void getKeyboardHeight() const;
	virtual void swapBuffers();
	virtual void getSystemRegion() const;
	virtual void pickImage(std::shared_ptr<ImagePickingCallback>);
	virtual void pickFile(std::shared_ptr<FilePickerSettings>);
	virtual void supportsAlbumExport() const;
	virtual void createPlatformPDFWriter();
	virtual void hasHardwareBackButton();
	virtual void supportsTouch() const;
	virtual void supportsKeyboardMouse() const;
	virtual void supportsGamepad() const;
	virtual void supportsClipboard() const;
	virtual void setClipboard(std::string const&) const;
	virtual void supportsShare() const;
	virtual void share() const;
	virtual void openStoragePermissionRequest(PermissionRequestReason, std::function<void ()>);
	virtual void setStorageDirectory(FileStorageDirectory, bool, PropertyBag const&);
	virtual void setInitialStorageDirectory(FileStorageDirectory);
	virtual void getStorageDirectory() const;
	virtual void setStorageDirectoryChangeDenied(std::function<void (FileStorageDirectory)>);
	virtual void setStorageDirectoryChanged(std::function<void (Core::Path const&)>);
	virtual void runStoragePermissionResultCallback();
	virtual void hasExternalStoragePermission();
	virtual void createHolographicPlatform(ARVRPlatform) const;
	virtual void trialCorrelationStart();
	virtual void createAndroidLaunchIntent();
	virtual void supportsScripting() const;
	virtual void supportsInPackageRecursion() const;
	virtual void updateLocalization(std::string const&);
	virtual void getCurrentStoragePath() const;
	virtual void getExternalStoragePath() const;
	virtual void getInternalStoragePath() const;
	virtual void getUserdataPath() const;
	virtual void getSettingsPath();
	virtual void getUserdataPathForLevels() const;
	virtual void showDialog(int);
	virtual void createUserInput();
	virtual void getUserInputStatus();
	virtual void getUserInput();
	virtual void getScreenWidth();
	virtual void getScreenHeight();
	virtual void getPixelsPerMillimeter();
	virtual void allowContentLogWriteToDisk();
	virtual void queueForMainThread(std::function<void ()>);
	virtual void getMainThreadQueue();
	virtual void hasAppInstalled(ExternalApp) const;
	virtual void navigateToStoreForApp(ExternalApp) const;
	virtual void launchApp(ExternalApp) const;
	virtual void canSupportApp(ExternalApp) const;
	virtual void updateTextBoxText(std::string const&);
	virtual void supportsVibration();
	virtual void vibrate(int);
	virtual void readAssetFile(Core::Path const&);
	virtual void supportsClientUpdate() const;
	virtual void getClientUpdateUrl() const;
	virtual void checkLicense();
	virtual void hasBuyButtonWhenInvalidLicense();
	virtual void isNetworkEnabled(bool);
	virtual void buyGame();
	virtual void finish();
	virtual void canLaunchUri(std::string const&);
	virtual void launchUri(std::string const&);
	virtual void getPlatformType() const;
	virtual void getBuildPlatform() const;
	virtual void getPlatformString() const;
	virtual void getSubPlatformString() const;
	virtual void getPlatformStringVar(int);
	virtual void getApplicationId();
	virtual void getFreeMemory() const;
	virtual void getMemoryLimit() const;
	virtual void getUsedMemory();
	virtual void getTotalPhysicalMemory() const;
	virtual void getBroadcastAddresses();
	virtual void getIPAddresses();
	virtual void useAppPlatformForTelemetryIPAddress();
	virtual void getModelName();
	virtual void getLastDeviceSessionId() const;
	virtual void setLastDeviceSessionId(std::string const&);
	virtual void createDeviceID(std::string&);
	virtual void createUUID();
	virtual void isTablet();
	virtual void trackPurchaseEvent(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
	virtual void sendBrazeEvent(std::string const&);
	virtual void sendBrazeEventWithProperty(std::string const&, std::string const&, int);
	virtual void sendBrazeEventWithStringProperty(std::string const&, std::string const&, std::string const&);
	virtual void sendBrazeToastClick();
	virtual void sendBrazeDialogButtonClick(int);
	virtual void getEdition() const;
	virtual void isBrazeEnabled() const;
	virtual void isFireTV() const;
	virtual void getDefaultInputMode() const;
	virtual void calculateAvailableDiskFreeSpace(Core::Path const&);
	virtual void supportsTextToSpeech() const;
	virtual void getSecureStorage();
	virtual void getSecureStorageKey(std::string const&);
	virtual void setSecureStorageKey(std::string const&, SecureStorageKey const&);
	virtual void getMultiplayerServiceListToRegister();
	virtual void getBroadcastingMultiplayerServiceIds(bool, bool);
	virtual void importAsFlatFile() const;
	virtual void isCodeBuilderSupported() const;
	virtual void createCodeBuilder(CodeBuilder::PlatformArguments&&) const;
	virtual void createXboxLiveSignInHandler() const;
	virtual void canAppSelfTerminate() const;
	virtual void getPlatformTTSExists() const;
	virtual void getPlatformTTSEnabled() const;
	virtual void getRenderSurfaceParameters() const;
	virtual void getPlatformUIScalingRules() const;
	virtual void getPlatformTempPath() const;
	virtual void _onTeardown();
	virtual void initWithActivity(ANativeActivity*);
public:
	AppPlatform_android();
	//void initConsts(MC_ENGINE*);
	void _hideKeyboard();
	void _showKeyboard(std::string const&, int, bool, bool, bool);
	void setApiVersion(int);
	void _getPackageName();
	void _loadImageViaJNI(mce::Image&, Core::Path const&);
	void _CallStringMethod(_JNIEnv*, _jmethodID*);
	void _sendCursorPosition(int);
	void _createMediaExclusion();
	void _getDefaultStoragePath();
	void _getAppDataOptionsLocation();
	void init(_JavaVM*);
	void update();
	void _getAPIVersion(std::string const&) const;
	void isTextBoxFocused() const;
	void hasHardwareKeyboard() const;
	void _cacheDeviceIdInSharedPreferences(std::string const&) const;
public:
	static AppPlatform_android * ANDROID_APPDATA_PATH;
};
