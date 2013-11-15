#ifndef __GAMEFILE_H__
#define __GAMEFILE_H__

#include "GamePlatform.h"

class GameFile
{
public:
	GameFile(void);
	~GameFile(void);

public:
	static GameFile* GetGameFileHandle ( void );
	static void ReleaseGameFile ( void );

public:
	bool Init ( void );

private:
	CCDictionary *baseConfigDic;
};

#endif // __GAMEFILE_H__
