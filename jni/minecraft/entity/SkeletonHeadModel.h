/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Model.h"

class AppPlatformListener;
class GeometryPtr;

class SkeletonHeadModel : public AppPlatformListener, public Model
{
public:
	//char filler_SkeletonHeadModel[UNKNOW_SIZE];
public:
	virtual ~SkeletonHeadModel();
	virtual void render(ScreenContext&);
	virtual void render(ScreenContext&, Actor&, float, float, float, float, float, float);
	virtual void render(BaseActorRenderContext&);
	virtual void setupAnim(float, float, float, float, float, float);
public:
	SkeletonHeadModel(int, int, int, int);
	SkeletonHeadModel(GeometryPtr const&);
};
