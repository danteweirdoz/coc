#include "GameControl.h"
#include "GamePlatform.h"
#include "GameFile.h"

GameControl* g_GameControl = NULL;

GameControl::GameControl(void)
{

}

GameControl::~GameControl(void)
{
}

bool GameControl::RunGameControl( void )
{
	if (g_GameControl == NULL) {
		g_GameControl = new GameControl();
		if ( !g_GameControl->InitControl()) {
			delete g_GameControl;
			g_GameControl = NULL;
			return false;
		}
	}
	return true;
}

GameControl* GameControl::GetGameControl( void )
{
	return g_GameControl;
}

bool GameControl::InitControl()
{
	if ( ! GameFile::GetGameFileHandle() ) {
		return false;
	}
	return true;
}