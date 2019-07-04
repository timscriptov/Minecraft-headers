/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Particle.h"

class ParticleEngine;
class ParticleRenderContext;

class HeartParticle : public Particle
{
public:
	//char filler_HeartParticle[UNKNOW_SIZE];
public:
	virtual ~HeartParticle();
	virtual void init(Vec3 const&, Vec3 const&, int, ParticleEngine&);
	virtual void normalTick();
	virtual void tessellate(ParticleRenderContext const&);
public:
	HeartParticle(BlockSource&, ParticleType);
};
