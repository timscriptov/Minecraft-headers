/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "Core.h"
#include "ResourcePackListener.h"

class ResourceLocation;
class ContentTierManager;
class ResourcePackStack;
class ResourcePackStackType;
class ResourcePack;
class ResourcePackListener;
class PackType;
class PackSourceFactory;
class PackManifestFactory;
class IContentKeyProvider;
class PackInstance;
class ResourceLocation;
class ResourcePackMergeStrategy;
class PackIdVersion;
class PackSourceReport;

class ResourcePackManager
{
public:
	//char filler_ResourcePackManager[UNKNOW_SIZE];
public:
	virtual ~ResourcePackManager();
	virtual void load(ResourceLocation const&, std::string&) const;
	//virtual void load(ResourceLocation const&, std::string&, std::vector<std::string, std::allocator<std::string> > const&) const;
	virtual void loadAllVersionsOf(ResourceLocation const&) const;
	virtual void loadTexture(ResourceLocation const&) const;
	virtual void isInStreamableLocation(ResourceLocation const&) const;
	//virtual void isInStreamableLocation(ResourceLocation const&, std::vector<std::string, std::allocator<std::string> > const&) const;
	virtual void getPath(ResourceLocation const&) const;
	//virtual void getPath(ResourceLocation const&, std::vector<std::string, std::allocator<std::string> > const&) const;
	virtual void getPathContainingResource(ResourceLocation const&) const;
	//virtual void getPathContainingResource(ResourceLocation const&, std::vector<std::string, std::allocator<std::string> >) const;
	//virtual void hasCapability(gsl::basic_string_span<char const, -1>) const;
public:
	//ResourcePackManager(std::function<Core::PathBuffer<std::string> ()>, ContentTierManager const&, bool);
	void getResourcesOfGroup(std::string const&) const;
	void isExperimentalGameplay() const;
	void clearStack(ResourcePackStackType, bool);
	void removePack(ResourcePack*);
	void canSupportPacks();
	void clearPackReports();
	//void mergePackReports(std::vector<PackReport, std::allocator<PackReport> >&);
	void onLanguageChanged();
	void onLoadingFinished();
	void ensureSupportedSubpacks();
	void setExperimentalGameplay(bool);
	void setCanUseGlobalPackStack(bool);
	void handlePendingStackChanges();
	void registerResourcePackListener(ResourcePackListener&);
	void unRegisterAllResourcePackListener();
	void setStack(std::unique_ptr<ResourcePackStack, std::default_delete<ResourcePackStack> >, ResourcePackStackType, bool);
	void findAllTexturesInUse() const;
	void getIncompatiblePacks() const;
	void getStack(ResourcePackStackType) const;
	//void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory&, IContentKeyProvider const&, std::vector<PackInstance, std::allocator<PackInstance> > const&) const;
	void hasResource(ResourceLocation const&) const;
	void getFullStackAccess() const;
	void composeFullStack(ResourcePackStack&, ResourcePackStack const&, ResourcePackStack const&, ResourcePackStack const&) const;
	void loadText(ResourceLocation const&, std::string&) const;
	void getResourcesOfGroup(PackInstance const&, std::string const&) const;
	void hasTexture(ResourceLocation const&) const;
	void loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy&) const;
	void findInPacks(ResourceLocation const&);
	//void getPackIndexForResource(ResourceLocation const&, std::vector<std::string, std::allocator<std::string> > const&) const;
	void forceStackCompose();
	void onBaseGamePackDownloadComplete();
	void removeUnsupportedPacks();
	void getPackSourceReport() const;
	void unRegisterResourcePackListener(ResourcePackListener&);
	void getPackSettings(PackIdVersion const&);
	void _composeFullStack();
	void _handleComposeStack(bool);
	void setPackSourceReport(PackSourceReport&&);
	void _notifyFullStackInvalid();
	void _updateLanguageSubpacks();
	void notifyLanguageSubpacksChanged();
	void notifyActiveResourcePackChanged();
	//void hasResource(ResourceLocation const&, std::vector<std::string, std::allocator<std::string> > const&) const;
	void _getResource(Core::Path const&, std::string&) const;
	void getStackSize() const;
	void isOnlyVanilla() const;
	void copyPacksToLevel(Core::Path const&, PackType, PackSourceFactory const&, PackManifestFactory&, IContentKeyProvider const&) const;
	void _getPackForResource(Core::Path const&) const;
	void _shouldRebuildStack() const;
	//void _getResourcesOfGroup(PackInstance const&, std::string const&, std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string> > >&) const;
	void getGlobalStackFromFullStack(ResourcePackStack&) const;
	void checkHasExtraLocaleResources(std::string const&) const;
};
