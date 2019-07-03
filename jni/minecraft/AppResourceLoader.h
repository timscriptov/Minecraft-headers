/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

class AppResourceLoader : public ResourceLoader
{
public:
	//char filler_AppResourceLoader[UNKNOW_SIZE];
public:
	virtual ~AppResourceLoader();
	virtual void load(ResourceLocation const&, std::string&) const;
	virtual void load(ResourceLocation const&, std::string&, std::vector<std::string, std::allocator<std::string> > const&) const;
	virtual void loadAllVersionsOf(ResourceLocation const&) const;
	virtual void loadTexture(ResourceLocation const&) const;
public:
	AppResourceLoader(std::function<Core::PathBuffer<std::string> ()>);
};
