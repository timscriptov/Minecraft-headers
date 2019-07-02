/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Packet.h"

class BinaryStream;
class SerializedSkin;

class PlayerSkinPacket
 : public Packet
{
public:
	//char filler_PlayerSkinPacket[UNKNOW_SIZE];
public:
	virtual ~PlayerSkinPacket();
	virtual void getId() const;
	virtual void getName() const;
	virtual void write(BinaryStream&) const;
	virtual void read(ReadOnlyBinaryStream&);
public:
	PlayerSkinPacket(mce::UUID, SerializedSkin const&, std::string const&, std::string const&);
};
