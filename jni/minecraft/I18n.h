#pragma once

#include "Json.h"

class Localization;
class PackAccessStrategy;
class ResourcePackManager;
class ResourceLoadManager;

class I18n
{
public:
	//char filler_I18n[UNKNOW_SIZE];
public:
	void get(std::string const&);
	//void get(std::string const&, std::vector<std::string, std::allocator<std::string> > const&);
	void loadLanguages(ResourcePackManager&, ResourceLoadManager&, std::string const&);
	void clearLanguages();
	void getCurrentLanguage();
	void addLanguageChangedListener(std::weak_ptr<bool>, std::function<void (std::string const&, bool)>);
	void getLocalizedAssetFileWithFallback(std::string const&, std::string const&);
	void appendLanguageStrings(PackAccessStrategy*);
	void languageSupportsHypenSplitting();
	//void appendAdditionalTranslations(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string> > > const&, std::string const&);
	//void loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string> > > > const&);
	void chooseLanguage(std::string const&);
	void getLanguageName(std::string const&);
	void getSupportedLanguageCodes();
	void getLocaleFor(std::string const&);
	void _getKeyExists(std::string const&);
	void _getLocaleFor(std::string const&);
	void isPackKeyword(std::string const&);
	void _findLocaleFor(std::string const&);
	void chooseLanguage(Localization const&);
	void hasPackKeyEntry(PackManifest const&, std::string const&);
	//void _getFormatParmas(std::string const&, std::vector<std::string, std::allocator<std::string> >&);
	void getLocaleCodeFor(std::string const&);
	void loadAllLanguages(ResourcePackManager&);
	void _getLocaleCodeFor(std::string const&);
	void getPackKeywordValue(PackManifest const&, std::string const&);
	void _getPackKeywordLocale(std::string const&);
	//void _addFormatToDictionary(std::string const&, std::vector<std::string, std::allocator<std::string> > const&);
	void _generatePackKeyPrefix(PackManifest const&);
	void findAvailableLanguages(ResourcePackManager&);
	//void _findAvailableLanguages(Json::Value const&, std::vector<std::string, std::allocator<std::string> >&);
	void getLanguageCodesFromPack(PackAccessStrategy const&);
	void findAvailableLanguageNames(ResourcePackManager&);
	//void _findAvailableLanguageNames(Json::Value const&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string> > >&);
	void getLanguageKeywordsFromPack(PackManifest const&, std::string const&);
	void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&);
	//void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&, std::vector<std::string, std::allocator<std::string> > const&);
	//void appendLanguageStringsFromPack(PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>, std::less<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string> > > > const&);
	void _handleLanguageChangedListeners(std::string const&, bool);
	void getPackKeywordValueForTelemetry(PackManifest const&, std::string const&);
	void _setLanguageSupportsHypenSplitting(Localization const&);
	void _getAdditionalTranslationsBackupLocale(std::string const&, bool);
public:
	static I18n * mLanguages;
	static I18n * mEmptyLanguage;
	static I18n * mLanguageCodes;
	static I18n * mLanguageNames;
	static I18n * mCurrentLanguage;
	static I18n * mFormatDictionary;
	static I18n * mPackReservedKeys;
	static I18n * mResourcePackManager;
	static I18n * mPackKeywordLanguages;
	static I18n * mCurrentPackMetaLanguage;
	static I18n * mLanguageChangedListeners;
	static I18n * mAdditionalTranslationsBackup;
	static I18n * mLanguageSupportsHypenSplitting;
	static I18n * mAdditionalTranslationsBackupMutex;
};
