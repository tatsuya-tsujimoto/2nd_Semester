#include <iostream>






class Calculator
{
public:
	int Add(int a, int b);
	// 引数bのデフォルト値を２とする
	// 戻り値の型 関数名（仮引数の型 仮引数名 = 初期値）
	int Mul(int a, int b = 2);
	// ※デフォルト値の値は、宣言ぶでも定義部でも構わないが、
	// 　両方に書くことはできない
	// 　オススメは .h側の宣言部に書き、定義部はコメントアウトしておく
	// ※デフォルト引数の後ろには、未確定の引数を付けることは出来ない
	// 　デフォルト引数は必ず末尾に追加する
	//int Sub(int a = 100, int b, int c);
};

int Calculator::Add(int a, int b)
{
	return (a + b);
}

int Calculator::Mul(int a, int b/*=2*/)
{
	return (a * b);
}

int main()
{
	Calculator calc;
	std::cout << calc.Add(10, 20) << std::endl;
	std::cout << calc.Mul(100, 4) << std::endl;
	std::cout << calc.Mul(100)	<< std::endl;
}











