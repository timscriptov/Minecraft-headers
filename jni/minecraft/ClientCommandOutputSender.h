/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class GuiData;

class ClientCommandOutputSender : public CommandOutputSender
{
public:
	//char filler_ClientCommandOutputSender[UNKNOW_SIZE];
public:
	virtual ~ClientCommandOutputSender();
	virtual void send(CommandOrigin const&, CommandOutput const&);
	virtual void registerOutputCallback(std::function<void (AutomationCmdOutput&)> const&);
public:
	ClientCommandOutputSender(Automation::AutomationClient&, GuiData&);
};
