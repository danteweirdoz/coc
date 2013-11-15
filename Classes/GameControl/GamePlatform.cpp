#include "GamePlatform.h"
#include "GameConst.h"

float GamePlatform::m_fScreneScale = 1.0f;

CCSize GamePlatform::GetWinSizeInPixels( void )
{
	return CCDirector::sharedDirector()->getWinSizeInPixels();
}

CCSize GamePlatform::GetScreneSize( void )
{
	return CCDirector::sharedDirector()->getWinSize();
}

float GamePlatform::GetScreneScaleX( void )
{
	return GamePlatform::GetScreneSize().width / EXPLOIT_PIXELS_W;
}

float GamePlatform::GetScreneScaleY( void )
{
	return GamePlatform::GetScreneSize().height / EXPLOIT_PIXELS_H;
}

void GamePlatform::NodePiselsScale( CCNode* node )
{
	node->setScale(m_fScreneScale);
}

void GamePlatform::NodePiselsPoint( CCNode* node )
{
	CCPoint point;
	node->setPosition(TransitionPoint(point));
}

CCPoint GamePlatform::TransitionPoint( CCPoint point )
{
	return CC_POINT_PIXELS_TO_POINTS(point);
}

CCRect GamePlatform::TransitionRect( CCRect rect )
{
	return CC_RECT_PIXELS_TO_POINTS(rect);
}

float GamePlatform::TransitionFloat( float f )
{
	return f/CC_CONTENT_SCALE_FACTOR();
}

std::string GamePlatform::GetMACNum( void )
{
	return "Test";
}

int GamePlatform::GetMapGLWidth( void )
{
	return 1664;
}

int GamePlatform::GetMapGLHeight( void )
{
	return 1024;
}

float GamePlatform::GetBuildingBaseGrid_Edge_Len( void )
{
	return 17.888544f;
}