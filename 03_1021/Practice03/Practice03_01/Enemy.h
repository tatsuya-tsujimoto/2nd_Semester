﻿
#ifndef ENEMY_H
#define ENEMY_H

#include "Base.h"

//------------------------------
// エネミークラス
//------------------------------
class Enemy : public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

private:
	// 行動管理用の変数
	int m_Routine;
};

#endif // #ifndef ENEMY_H

