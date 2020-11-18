#include <iostream>
#include"Character.h"

int main()
{

	Character ch1;
	Character ch2 = ch1;	// 実体を作る際に合わせて初期化する　　コピーコンストラクタが呼び出される
	ch2 = ch1;				// 代入なので代入演算子のオーバーロードが呼び出される






	return 0;
}

