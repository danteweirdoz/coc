/***************************************************************
author:     ftcc
write time: 2013.11.15
function:   ÓÎÏ·¿ò¼Ü£¬
***************************************************************/
#ifndef __GAMECONTROL_H__
#define __GAMECONTROL_H__

class GameControl
{
public:
	GameControl(void);
	~GameControl(void);

	static bool				RunGameControl (void);
	static GameControl*		GetGameControl (void);

private: 
	bool InitControl (void);
};

#endif //__GAMECONTROL_H__
