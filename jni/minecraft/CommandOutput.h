/***
 *	MCPE 1.13.0.1
 ***/
#pragma once
#include <string>
#include <memory>
#include <map>

class CommandOutputType;

class CommandOutput
{
public:
	//char filler_CommandOutput[UNKNOW_SIZE];
public:
	CommandOutput(CommandOutputType);
	CommandOutput(CommandOutput const&);
	//void success(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter> > const&);
	//void error(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter> > const&);
	void addToResultList(std::string const&, Actor const&);
	void getMessages() const;
	void getSuccessCount() const;
	void success();
	//void load(CommandOutputType, int, std::vector<CommandOutputMessage, std::allocator<CommandOutputMessage> >&&, std::unique_ptr<CommandPropertyBag, std::default_delete<CommandPropertyBag> >&&);
	void getData() const;
	void getType() const;
	//void addMessage(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter> > const&, CommandOutputMessageType);
	//void forceOutput(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter> > const&);
	void addToResultList(std::string const&, std::string const&);
	//void getMessageParams(std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter> > const&);
	void empty() const;
	void wantsData() const;
};
