#pragma once

class Scheduler;
class ProgressListener;
class SaveTransactionManager;

class ExternalFileLevelStorageSource
{
public:
	//char filler_ExternalFileLevelStorageSource[UNKNOW_SIZE];
public:
	virtual ~ExternalFileLevelStorageSource();
	virtual void getName() const;
	virtual void getLevelData(std::string const&) const;
	virtual void getLevelData(std::string const&, LevelData&) const;
	virtual void saveLevelData(std::string const&, LevelData const&);
	//virtual void getLevelList(std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string> > >&);
	virtual void createLevelStorage(Scheduler&, std::string const&, ContentIdentity const&, IContentKeyProvider const&);
	virtual void isNewLevelIdAcceptable(std::string const&);
	virtual void deleteLevel(std::string const&);
	virtual void renameLevel(std::string const&, std::string const&);
	virtual void renameLevel(LevelData&, Core::Path const&, std::string const&);
	virtual void copyLevelFromFilePath(Core::Path const&);
	virtual void createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);
	virtual void isConvertible(std::string const&);
	virtual void requiresConversion(std::string const&);
	virtual void convertLevel(std::string const&, ProgressListener*);
	virtual void getBasePath() const;
	virtual void getPathToLevel(std::string const&) const;
public:
	ExternalFileLevelStorageSource(Core::FilePathManager*, std::shared_ptr<SaveTransactionManager>);
};
