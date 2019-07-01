/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class OperationMode;

class AppPlatformListener
{
public:
	//char filler_AppPlatformListener[UNKNOW_SIZE];
public:
	virtual ~AppPlatformListener();
	virtual void onLowMemory();
	virtual void onAppPaused();
	virtual void onAppUnpaused();
	virtual void onAppPreSuspended();
	virtual void onAppSuspended();
	virtual void onAppResumed();
	virtual void onAppFocusLost();
	virtual void onAppFocusGained();
	virtual void onAppTerminated();
	virtual void onOperationModeChanged(OperationMode);
	virtual void onPerformanceModeChanged(bool);
	virtual void onPushNotificationReceived(PushNotificationMessage const&);
	virtual void onResizeBegin();
	virtual void onResizeEnd();
public:
	AppPlatformListener();
	AppPlatformListener(bool);
	void initListener(float);
	void terminate();
};
