/***************************************************************
author:     ftcc
write time: 2013.11.15
function:   关于平台，游戏中关于平台方面的设置可以写在这里
***************************************************************/
#ifndef __GAMEPLATFORM_H__
#define __GAMEPLATFORM_H__

#include "cocos2d.h"

USING_NS_CC;

class GamePlatform
{
public:
	//获得屏幕像素大小
	static CCSize	GetWinSizeInPixels (void);
	static CCSize	GetScreneSize (void);
	static float	GetScreneScaleX (void);
	static float	GetScreneScaleY (void);

	//节点缩放
	static void		NodePiselsScale ( CCNode* node );
	//节点位置
	static void		NodePiselsPoint ( CCNode* node ); 
	//坐标适配
	static CCPoint	TransitionPoint ( CCPoint point );
	//Rect转换
	static CCRect	TransitionRect ( CCRect rect );
	//size转换
	static CCSize	TransitionSize ( CCSize size );
	//float转换
	static float	TransitionFloat ( float f );
	//得到Mac码
	static std::string	GetMACNum ( void );

public:
	static int		GetMapGLWidth ( void );
	static int		GetMapGLHeight ( void );
	static float	GetBuildingBaseGrid_Edge_Len ( void );

public:
	static float	m_fScreneScale;		// 屏幕缩放比例

	static int const S_MapGridNum = 44;//网格数
	static int const S_BuildingBaseGridWidth = 32;//网格宽
	static int const S_BuildingBaseGridHeight = 16;//网格高
	static int const S_MapWidth = S_MapGridNum * S_BuildingBaseGridWidth;
	static int const S_MapHeight = S_MapGridNum * S_BuildingBaseGridHeight;
	static int const S_BuildingLeftGrid = 4;	// 可建筑地形对地形格数留边数

};

#endif //__GAMEPLATFORM_H__