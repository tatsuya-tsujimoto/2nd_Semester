
#include <iostream>

class A
{
public:
	explicit A(int val)
	{
		std::cout << val << std::endl;
	}
};

class B
{
public:
	explicit B(const A& ref)
	{
	}
};


int main()
{
	// 引数を1つだけとるコンストラクタは、暗黙の型変換が行われる可能性がある
	// 暗黙の型変換が行われるコンストラクタのことを、変換コンストラクタという
//	B b(1000);		// BのクラスのコンストラクタはAのクラスの参照受けるのでは？
					// 暗黙的に B( A(1000) ) と解釈している
	
//	A test = 100;	// Aのクラスに変数データ型を代入？
					// 暗黙的に A test = A(100) と解釈している
					// コピーコンストラクタが呼び出されている

	A a(35);		// Aのクラスコンストラクタ
					// 問題なし



	return 0;
}
