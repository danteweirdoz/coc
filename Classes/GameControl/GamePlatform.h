/***************************************************************
author:     ftcc
write time: 2013.11.15
function:   ����ƽ̨����Ϸ�й���ƽ̨��������ÿ���д������
***************************************************************/
#ifndef __GAMEPLATFORM_H__
#define __GAMEPLATFORM_H__

#include "cocos2d.h"

USING_NS_CC;

class GamePlatform
{
public:
	//�����Ļ���ش�С
	static CCSize	GetWinSizeInPixels (void);
	static CCSize	GetScreneSize (void);
	static float	GetScreneScaleX (void);
	static float	GetScreneScaleY (void);

	//�ڵ�����
	static void		NodePiselsScale ( CCNode* node );
	//�ڵ�λ��
	static void		NodePiselsPoint ( CCNode* node ); 
	//��������
	static CCPoint	TransitionPoint ( CCPoint point );
	//Rectת��
	static CCRect	TransitionRect ( CCRect rect );
	//sizeת��
	static CCSize	TransitionSize ( CCSize size );
	//floatת��
	static float	TransitionFloat ( float f );
	//�õ�Mac��
	static std::string	GetMACNum ( void );

public:
	static int		GetMapGLWidth ( void );
	static int		GetMapGLHeight ( void );
	static float	GetBuildingBaseGrid_Edge_Len ( void );

public:
	static float	m_fScreneScale;		// ��Ļ���ű���

	static int const S_MapGridNum = 44;//������
	static int const S_BuildingBaseGridWidth = 32;//�����
	static int const S_BuildingBaseGridHeight = 16;//�����
	static int const S_MapWidth = S_MapGridNum * S_BuildingBaseGridWidth;
	static int const S_MapHeight = S_MapGridNum * S_BuildingBaseGridHeight;
	static int const S_BuildingLeftGrid = 4;	// �ɽ������ζԵ��θ���������

};

#endif //__GAMEPLATFORM_H__