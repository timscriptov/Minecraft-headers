/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "ResourcePackManager.h"

class ResourcePackListener
{
public:
	//char filler_ResourcePackListener[UNKNOW_SIZE];
public:
	void onResourceManagerDestroyed(ResourcePackManager&);
	void onFullPackStackInvalid();
	void onLanguageSubpacksChanged();
	void onBaseGamePackDownloadComplete();
};
