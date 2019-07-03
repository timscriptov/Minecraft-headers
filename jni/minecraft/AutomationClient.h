#pragma once

class CommandOrigin;

namespace Automation
{
class Response;
class AutomationSession;

class AutomationClient
{
public:
	//char filler_AutomationClient[UNKNOW_SIZE];
public:
	AutomationClient(IMinecraftApp&);
	~AutomationClient();
	void setRequireEncryption(bool);
	void tick();
	void isReady();
	void getDefaultSession();
	void isSubscribedtoEvent(std::string const&);
	void send(Automation::Response const&);
	void getSessionForCommand(CommandOrigin const&);
	void createSession();
	void _removeSession(Automation::AutomationSession const&);
	void _tryAddCommand(std::pair<std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin> >, Json::Value>&&);
	void _forEachSession(std::function<bool (Automation::AutomationSession&)> const&);
	void setMaxQueueSize(unsigned int);
	void playerListChanged();
	void onLevelDestruction(std::string const&);
	void setServerRetryTime(float);
	void isReadyForInGameCommands();
	void onUri(ActivationUri const&);
};
}
