/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Particle.h"

class ParticleEngine;

class HappyVillagerParticle : public Particle
{
public:
	//char filler_HappyVillagerParticle[UNKNOW_SIZE];
public:
	virtual ~HappyVillagerParticle();
	virtual void init(Vec3 const&, Vec3 const&, int, ParticleEngine&);
public:
	HappyVillagerParticle(BlockSource&, ParticleType);
};
