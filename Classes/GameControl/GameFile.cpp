#include "GameFile.h"
#include "GameConst.h"

GameFile* g_GameFile = NULL;

GameFile::GameFile(void)
{
}


GameFile::~GameFile(void)
{
	delete baseConfigDic;
	baseConfigDic = NULL;
}

GameFile* GameFile::GetGameFileHandle()
{
	if (g_GameFile == NULL) {
		g_GameFile = new GameFile();
		if (!g_GameFile->Init()) {
			delete g_GameFile;
			g_GameFile = NULL;
		}
	}
	return g_GameFile;
}

void GameFile::ReleaseGameFile()
{
	if (g_GameFile != NULL) {
		delete g_GameFile;
		g_GameFile = NULL;
	}
}

bool GameFile::Init( void )
{
	baseConfigDic = CCDictionary::create()->createWithContentsOfFileThreadSafe(PATH_BASECONFIG);
	CCAssert(baseConfigDic != NULL, "read BaseConfig fail");
	return true;
}