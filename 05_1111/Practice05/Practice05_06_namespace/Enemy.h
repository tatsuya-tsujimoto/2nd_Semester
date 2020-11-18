#ifndef ENEMY_H
#define ENEMY_H

namespace Enemy {

	static const int Max = 10;		// 敵最大数

	// namespaceに所属しているデータを使う時の書き方（namespaceの内）
	// namespace名:: は省略できる
	void PrintMax()
	{
		printf("敵の最大数＝%d\n", Max);
	}
}

#endif