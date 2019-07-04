/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Particle.h"
#include "HeartParticle.h"

class AngryVillagerParticle : public HeartParticle, public Particle
{
public:
	//char filler_AngryVillagerParticle[UNKNOW_SIZE];
public:
	virtual ~AngryVillagerParticle();
public:
	AngryVillagerParticle(BlockSource&, ParticleType);
};
