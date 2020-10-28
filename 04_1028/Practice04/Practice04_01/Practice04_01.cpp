#include"Test.h"

int main()
{
	Test testA;
	Test testB;
	
	testA.SetValue(10);
	testA.SetStaticValue(9999);
	testB.SetValue(345);
	// staticメンバ関数は以下のようにこともできる
	Test::SetStaticValue(1000);

	testA.PrintValue();
	testB.PrintValue();

	// staticメンバ関数変数の使い方一例(実体の数を数える)
	Test::PrintCount();
	// ブロック {} は単体で運用できる
	{
		Test testC;
		Test::PrintCount();
	}
	Test::PrintCount();
	return 0;
}
