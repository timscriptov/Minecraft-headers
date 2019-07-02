/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class NetworkIdentifier;
class NetEventCallback;
class BinaryStream;

class Packet
{
public:
	//char filler_Packet[UNKNOW_SIZE];
public:
	virtual ~Packet();
	virtual void disallowBatching() const;
public:
	void readNoHeader(ReadOnlyBinaryStream&, unsigned char const&);
	void handle(NetworkIdentifier const&, NetEventCallback&, std::shared_ptr<Packet>&);
	void writeWithHeader(unsigned char, BinaryStream&) const;
};
