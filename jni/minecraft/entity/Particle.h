/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class ParticleEngine;
class ParticleRenderContext;
class LightTexture;

class Particle
{
public:
	//char filler_Particle[UNKNOW_SIZE];
public:
	virtual ~Particle();
	virtual void addTagData(CompoundTag const*);
	virtual void normalTick();
	virtual void tessellate(ParticleRenderContext const&);
	virtual void getParticleTexture() const;
	virtual void getParticleLightColor(float, LightTexture const&);
	virtual void setEmittingEntity(Actor&);
	virtual void _shouldUpdateVertexData(float);
public:
	Particle(BlockSource&, ParticleType);
	void initStaticResources(mce::TextureGroup&);
	void _updateVertexData(ParticleRenderContext const&, float);
	void resetStaticResources();
	void _generateVertexOffsets(Vec3 const&, float&, float&, float&, float&, float&);
	void move(Vec3 const&);
	void _init(Vec3 const&, Vec3 const&, int, ParticleEngine&, CompoundTag const*);
	void scale(float);
	void setPos(Vec3 const&);
	void setSize(float);
	void setPower(float);
public:
	static Particle * FLAME_ATLAS;
	static Particle * ITEMS_ATLAS;
	static Particle * TERRAIN_ATLAS;
	static Particle * PARTICLE_ATLAS;
	static Particle * FORCEFIELD_ATLAS;
};
