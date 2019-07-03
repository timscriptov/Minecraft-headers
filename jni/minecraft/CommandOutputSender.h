/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class CommandOutput;
class AutomationCmdOutput;

class CommandOutputSender
{
public:
	//char filler_CommandOutputSender[UNKNOW_SIZE];
public:
	virtual ~CommandOutputSender();
	virtual void send(CommandOrigin const&, CommandOutput const&);
	virtual void registerOutputCallback(std::function<void (AutomationCmdOutput&)> const&);
public:
	CommandOutputSender(Automation::AutomationClient&);
	void _sendOverWebsocket(CommandOrigin const&, CommandOutput const&);
	//void translate(std::vector<std::string, std::allocator<std::string> > const&);
	void _toJson(CommandOutput const&) const;
	void sendToAdmins(CommandOrigin const&, CommandOutput const&, CommandPermissionLevel);
};
