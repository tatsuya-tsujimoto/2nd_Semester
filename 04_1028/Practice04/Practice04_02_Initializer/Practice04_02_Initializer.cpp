﻿
#include <iostream>

class CharaBase
{
public:
	CharaBase();
	CharaBase(int hp,int mp);
	virtual  ~CharaBase();

	void PrintParam();
private:
	int Hp;
	int Mp;

	const int HP_MAX ; 
};

// コンストラクタで、メンバイニシャライザによる初期化のやり方
// クラス名::コンストラクタ（引数）：メンバ変数（初期値）,メンバ変数（初期値）
CharaBase::CharaBase()
	//: HP_MAX(999)
	//, Hp(HP_MAX)
	//, Mp(10)
	:Hp(50)
	,Mp(10)
	,HP_MAX(999)
{
	// 従来の初期化方法
	//Hp = 50;
	//Mp = 10;
	//HP_MAX =999; //コンストラクタ内ではconst型のメンバ変数を初期化できない
}

// 引数付きのコンストラクタでもイニシャライザを使える
CharaBase::CharaBase(int hp,int mp)
	:Hp(hp)
	,Mp(mp)
	,HP_MAX(999)
{
	//Hp = hp;
	//Mp = mp;
}

CharaBase::~CharaBase()
{

}

void CharaBase::PrintParam()
{
	printf("Hp = %d\n",Hp);
	printf("Mp = %d\n",Mp);
	printf("\n");
	printf("HP_MAX = %d\n",HP_MAX);

}
// CharaBaseを継承した派生クラスPlayer
class Player :public CharaBase
{
public:
	Player();
private:
	int Money;
};
// 補足：引数無しの基底クラスのコンストラクタは省略することが出来る
//		派生クラスのメンバイニシャライザは、基底クラスのコンストラクタを先に呼び出す
Player::Player()
	:CharaBase(200, 30)
	, Money(50)
{

}

int main()
{
	// データ型にもコンストラクタはある
	int value(10);
	float f_value(10.0f);

	CharaBase ch;
	ch.PrintParam();

	Player player;
	player.PrintParam();

	return 0;
}
