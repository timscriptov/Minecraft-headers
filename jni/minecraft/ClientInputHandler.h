/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class InputHandler;
class GamePlayInputMode;
class ControllerIDtoClientMap;
class Config;
class MobEffectsLayout;
class InputBindingMode;
class HoloUIInputMode;

class ClientInputHandler
{
public:
	//char filler_ClientInputHandler[UNKNOW_SIZE];
public:
	ClientInputHandler(IClientInstance&, InputHandler&);
	~ClientInputHandler();
	void updateInputMode(GamePlayInputMode);
	void updatePlayerState(LocalPlayer const&);
	void onConfigChanged(Config const&);
	void popInputMapping(bool);
	void setDisableInput(bool);
	void setSuspendInput(bool);
	void pushInputMapping(bool);
	void resetPlayerState();
	void clearInputMapping();
	void getHoloUIInputMode();
	void onMobEffectsChanged(MobEffectsLayout const&);
	void clearInvalidDownKeys();
	void updateHoloUIInputMode(HoloUIInputMode, bool);
	void clearInputDeviceQueues();
	void releaseButtonsAndSticks();
	void allowPicking() const;
	void allowInteract() const;
	void getCurrentInputMode() const;
	void getCurrentInputMapping() const;
	void isTouchGameplayAllowed() const;
	void updateInputMapping();
	void getNameRegistry();
	void setInputBindingMode(InputBindingMode);
	void canInteract() const;
	void showBoatExit() const;
	void getSplitscreenJoinPromptVisible() const;
	void onToastChanged(RectangleArea const&);
	void getMappingFactory();
	void getInputEventQueue();
	void updateInteractActiveState(bool);
	void tick(MinecraftGame&, IClientInstance&, ControllerIDtoClientMap&, bool);
	void render(ScreenContext&);
	void getProxy();
	void isSneaking() const;
	void isSwimming() const;
	void getCursorPos(float&, float&) const;
	void hasMobEffects() const;
	void isCreativeMode() const;
	void showJumpButton() const;
	void getBoatExitText() const;
	void getInteractText() const;
	void getLastGameMode() const;
	void isMovingForward() const;
	void showCodeBuilder() const;
	void showSneakButton() const;
	void _interactWithItem() const;
	void getBindingFactory() const;
	void getLastHoloUIMode() const;
	void _interactWithEntity() const;
	void useFreeformPickDirection() const;
	void hasToast() const;
	void canPaddle() const;
	void getNameId(std::string const&) const;
	void isInWater() const;
};
