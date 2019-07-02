/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class PlayerRespawnRandomizerInfo
{
public:
	//char filler_PlayerRespawnRandomizerInfo[UNKNOW_SIZE];
public:
	PlayerRespawnRandomizerInfo(unsigned int);
	void getNextPosition(Vec3 const&, Vec3&);
	void getCoprime(unsigned int) const;
	void getSpawnRadius() const;
	void hasMorePossibilities() const;
};
