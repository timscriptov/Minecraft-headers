/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class BinaryStream// : public ReadOnlyBinaryStream
{
public:
	//char filler_BinaryStream[UNKNOW_SIZE];
public:
	virtual ~BinaryStream(); // 212
	//virtual ~BinaryStream(); // 208
public:
	BinaryStream(std::string&&); // 92
	BinaryStream(); // 88
	BinaryStream(std::string&, bool); // 112
	BinaryStream(std::string const&); // 80
	void writeVarInt(int); // 60
	void writeUnsignedVarInt(unsigned int); // 56
	void writeUnsignedVarInt64(unsigned long long); // 64
	//void writeString(gsl::basic_string_span<char const, -1>); // 80
	void writeBool(bool); // 24
	void writeUnsignedShort(unsigned short); // 24
	void writeByte(unsigned char); // 24
	void writeUnsignedInt64(unsigned long long); // 24
	void writeVarInt64(long long); // 80
	void writeSignedBigEndianInt(int); // 22
	void writeFloat(float); // 20
	void writeSignedInt(int); // 20
	void writeSignedInt64(long long); // 22
	void reserve(unsigned int); // 6
	void writeUnsignedInt(unsigned int); // 20
	void writeUnsignedChar(unsigned char); // 24
	void writeStream(BinaryStream&); // 36
	void writeFixedFloat(float, double); // 102
	void writeDouble(double); // 26
	void writeSignedShort(short); // 24
	void write(void const*, unsigned int); // 6
	void reset(); // 26
	void getAndReleaseData(); // 48
	void writeNormalizedFloat(float); // 112
};
