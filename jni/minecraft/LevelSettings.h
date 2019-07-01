/***
 *	MCPE 1.13.0.1
 ***/
#pragma once

#include "std.h"

class EducationEditionOffer;
class LevelSummary;
class AutomaticID;
class GeneratorType;
class Difficulty;
class VanillaVersion;
class Abilities;
class GameRules;
class Dimension;
class GameType;

class LevelSettings
{
public:
	//char filler_LevelSettings[UNKNOW_SIZE];
public:
	LevelSettings(LevelSummary const&);
	LevelSettings(LevelSettings&&);
	LevelSettings(LevelSettings const&);
	//LevelSettings(LevelData const&, AutomaticID<Dimension, int>);
	//LevelSettings(unsigned int, GameType, Difficulty, AutomaticID<Dimension, int>, GeneratorType, BlockPos const&, bool, int, EducationEditionOffer, float, float, bool, bool, bool, Social::GamePublishSetting, Social::GamePublishSetting, bool, bool, bool, bool, bool, bool, GameRules, bool, bool, Abilities, unsigned int, bool, bool, bool, VanillaVersion const&);
	LevelSettings();
	~LevelSettings();
	void setVanillaVersion(VanillaVersion const&);
	void setForceExperimentalGameplay(bool);
	void getGenerator() const;
	void getRainLevel() const;
	void getDefaultSpawn() const;
	void getLightningLevel() const;
	void getLanBroadcastIntent() const;
	void hasAchievementsDisabled() const;
	void getEducationEditionOffer() const;
	void hasConfirmedPlatformLockedContent() const;
	void getDimension() const;
	void getGameRules() const;
	void useMsaGamertagsOnly() const;
	void parseSeedString(std::string const&, unsigned int);
	void setImmutableWorld(bool);
	void setEducationFeaturesEnabled(bool);
	//void setNewWorldBehaviorPackIdentities(std::vector<PackInstanceId, std::allocator<PackInstanceId> > const&);
	//void setNewWorldResourcePackIdentities(std::vector<PackInstanceId, std::allocator<PackInstanceId> > const&);
	void getGameType() const;
	void educationFeaturesEnabled() const;
	void achievementsWillBeDisabledOnLoad() const;
	void getSeed() const;
	void operator=(LevelSettings&&);
	void getGameDifficulty() const;
	void getVanillaVersion() const;
	void hasCommandsEnabled() const;
	void getDefaultAbilities() const;
	void isFromWorldTemplate() const;
	void hasBonusChestEnabled() const;
	void isFromLockedTemplate() const;
	void getXBLBroadcastIntent() const;
	void hasLockedBehaviorPack() const;
	void hasLockedResourcePack() const;
	void hasStartWithMapEnabled() const;
	void isTexturepacksRequired() const;
	void getOnlySpawnV1Villagers() const;
	void getServerChunkTickRange() const;
	void getMultiplayerGameIntent() const;
	void getPlatformBroadcastIntent() const;
	void isWorldTemplateOptionLocked() const;
	void getTime() const;
	void forceGameType() const;
	void getImmutableWorld() const;
	void overrideSavedSettings(LevelData&) const;
	void shouldOverrideSavedSettings() const;
	void shouldForceExperimentalGameplay() const;
	void setForceGameType(bool);
	void generatorTypeToString(GeneratorType);
	void validateGameDifficulty(Difficulty);
	void setOnlySpawnV1Villagers(bool);
	void setEducationEditionOffer(EducationEditionOffer);
	void setOverrideSavedSettings(bool);
	void hasXBLBroadcastIntent() const;
	void isEducationEditionWorld() const;
	void hasPlatformBroadcastIntent() const;
	void getNewWorldBehaviorPackIdentities() const;
	void getNewWorldResourcePackIdentities() const;
};
