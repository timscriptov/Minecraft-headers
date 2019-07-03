#pragma once
#include <string>
#include <memory>
#include <map>

class PlayerActionPacket
 : public Packet
{
public:
	//Fields
	char filler_PlayerActionPacket[UNKNOW_SIZE];
public:
	//Virtual Tables
	virtual ~PlayerActionPacket();
	virtual void getId() const;
	virtual void getName() const;
	virtual void write(BinaryStream&) const;
	virtual void read(ReadOnlyBinaryStream&);
};//PlayerActionPacket
