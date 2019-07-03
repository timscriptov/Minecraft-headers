/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Common
{
public:
	//char filler_Common[UNKNOW_SIZE];
public:
	void getGameDevInfoString();
	void getBuildDateISOString();
	void getGameDevGitShaString();
	void getGameDevVersionString();
	void getGameVersionStringNet();
	void getGameVersionString();
	void getGameSemVerString();
	void getBuildFlavor();
	void getServerVersionString();
	void getGameDevGitBranchString();
};
