/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class Rotation;
class Mirror;
class ChunkPos;

class BlockPos
{
public:
	//char filler_BlockPos[UNKNOW_SIZE];
public:
	BlockPos(Vec3 const&);
	BlockPos(ChunkPos const&, int);
	BlockPos(float, float, float);
	BlockPos(double, double, double);
	void relative(unsigned char, int) const;
	void randomFloat() const;
	void randomSeed() const;
	void neighbor(unsigned char) const;
	void toString() const;
	void center() const;
	void transform(Rotation, Mirror, Vec3 const&) const;
public:
	static BlockPos * ZERO;
	static BlockPos * MIN;
	static BlockPos * MAX;
	static BlockPos * ONE;
};
