#include "Character.h"
#include <stdio.h>
#include <string.h>

// デフォルトの引数付きコンストラクタ
Character::Character()
	: m_Job(Freeter)
{

	printf("通常のコンストラクタ\n");

}

Character::Character(const Character& ch)
	: m_Job(ch.GetJob())
{
	printf("コピーコンストラクタ\n");
}



Character::~Character()
{

}

Character& Character::operator =(Character& ch)
{
	printf("代入演算子のオーバーロード\n");
	m_Job = ch.GetJob();


	return *this;
}


// パラメータを表示するだけ
void PrintParam(Character ch)
{
}


