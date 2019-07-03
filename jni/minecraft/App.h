/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class AppContext;

class App
{
public:
	//char filler_App[UNKNOW_SIZE];
public:
	virtual ~App();
	virtual void quit(std::string const&, std::string const&);
	virtual void wantToQuit();
	virtual void setUISizeAndScale(int, int, float);
	virtual void muteAudio();
	virtual void unMuteAudio();
	virtual void audioEngineOn();
	virtual void audioEngineOff();
	virtual void destroy();
	virtual void loadState(void*, int);
	virtual void saveState(void**, int*);
	virtual void useTouchscreen();
	virtual void draw();
	virtual void update();
	virtual void setRenderingSize(int, int);
	virtual void initImpl();
	//virtual void atformListener::onLowMemory();
	//virtual void atformListener::onAppPaused();
	//virtual void atformListener::onAppUnpaused();
	//virtual void atformListener::onAppPreSuspended();
	//virtual void atformListener::onAppSuspended();
	//virtual void atformListener::onAppResumed();
	//virtual void atformListener::onAppFocusLost();
	//virtual void atformListener::onAppFocusGained();
	//virtual void atformListener::onAppTerminated();
	//virtual void atformListener::onOperationModeChanged(OperationMode);
	//virtual void atformListener::onPerformanceModeChanged(bool);
	//virtual void atformListener::onPushNotificationReceived(PushNotificationMessage const&);
	//virtual void atformListener::onResizeBegin();
	//virtual void atformListener::onResizeEnd();
public:
	App(int, char**);
	void changeContext(AppContext&);
	void init(AppContext&);
};
