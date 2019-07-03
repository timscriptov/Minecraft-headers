/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class CameraLoader;
class CameraDirector;

class CameraManager
{
public:
	//char filler_CameraManager[UNKNOW_SIZE];
public:
	//Methods
	CameraManager(std::unique_ptr<CameraLoader, std::default_delete<CameraLoader> >, IClientInstance&);
	~CameraManager();
	void getRenderPlayerModel() const;
	void getCameraFacesPlayerFront() const;
	void update(IClientInstance&, float);
	void getCameraOrDebugCamera() const;
	void clearCamera();
	void handleLookInput(Vec2);
	void isDebugCameraControlActive() const;
	void clearForcedCameraId();
	void setCameraLookTarget(HashedString, ActorUniqueID);
	void setCameraFollowTarget(HashedString, ActorUniqueID);
	void forceCameraActivationViaRule(HashedString);
	void getCamera() const;
	void loadCameras(IClientInstance&);
	void renderDebug(IClientInstance&, float);
	void activateCamera(HashedString, IClientInstance&, float, float);
	void activateDebugCamera(bool);
	void clearOverrideCamera();
	void updateBlendProgress(IClientInstance&, float, float);
	void requestOverrideCamera(std::string const&);
	void setDebugRenderFlagAll(bool);
	void handleLookInputBlending(Vec2, CameraDirector&);
	void processActivationRequest(HashedString, IClientInstance&, float, float);
	void setDebugRenderFlagSpline(bool);
	void setDebugRenderFlagFraming(bool);
	void activateDebugCameraControl(bool);
	void checkForActivationConflict(HashedString, HashedString, IClientInstance const&, float);
	void setDebugRenderFlagAvoidance(bool);
	void toggleDebugRenderFlagSpline();
	void toggleDebugRenderFlagFraming();
	void setDebugRenderFlagActiveCamera(bool);
	void toggleDebugRenderFlagAvoidance();
	void toggleDebugRenderFlagActiveCamera();
	void isBlending() const;
	void getCameraBlend() const;
	void getForcedCameraId() const;
	void getOverrideCamera() const;
	void getAvailableCamera(HashedString) const;
	void isDebugCameraActive() const;
	void getDebugRenderFlagAll() const;
	void getCameraBlendSettings(HashedString, HashedString) const;
	void getDebugRenderFlagSpline() const;
	void getDebugRenderFlagFraming() const;
	void getListOfAvailableCameras() const;
	void getDebugRenderFlagAvoidance() const;
	void getDebugRenderFlagActiveCamera() const;
public:
	//Objects
	static CameraManager * USE_NEW_CAMERA_SYSTEM;
	static CameraManager * DEBUG_CAMERA;
};//CameraManager
