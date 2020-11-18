﻿
#include <iostream>
#include"CharacterBase.h"
int main()
{
		// コピーコンストラクタの基本的な使い方
	CharacterBase player(10, 8);
	CharacterBase enemy = player;		// コピーコンストラクタ呼び出し


	// 引数　attacker = playerと同義になるため
	// コピーコンストラクタが呼び出される
	enemy.ReceiveDamege(player);

	player.PrintParam();
	enemy.PrintParam();



	CharacterBase dummy = enemy.CreateCopy();
	printf("\n");
	enemy.CreateCopy();

	//// 危険なケースをテストをするために、変数の寿命を明確にする
	//CharacterBase yamada( 10, 10);
	//{
	//	CharacterBase dummy = yamada;
	//	yamada.ReceiveDamege(dummy);
	//}
	//yamada.PrintParam();


	return 0;
}

