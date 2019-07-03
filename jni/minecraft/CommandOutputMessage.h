/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class CommandOutputMessageType;

class CommandOutputMessage
{
public:
	//char filler_CommandOutputMessage[UNKNOW_SIZE];
public:
	//CommandOutputMessage(CommandOutputMessageType, std::string const&, std::vector<std::string, std::allocator<std::string> >&&);
	CommandOutputMessage(CommandOutputMessage&&);
	CommandOutputMessage(CommandOutputMessage const&);
	void getMessageId() const;
	void getType() const;
	void getParams() const;
	void operator=(CommandOutputMessage&&);
	void operator=(CommandOutputMessage const&);
	void getUserMessage() const;
};
