#include <iostream>


template<typename T>
T CalcSum(T a, T b)
{
	return (a + b);

}

// 半径ｒと円周率を渡し、円の面積を計算する関数
// piは整数かもしれないし、実数かもしれない
template<typename T,typename U>
double CalcCircleArea(T r, U pi)
{
	return (r * r) * pi;
}

int main()
{
	printf("int   CalcSum(10,10) = %d\n", CalcSum(10, 10));
	printf("float CalcSum(20.0f,20.0f) = %f\n", CalcSum(20.0f, 20.0f));

	printf("int r float pi CalcCircleArea = %f\n", CalcCircleArea(5, 3.14f));
	printf("int r int   pi CalcCircleArea = %f\n", CalcCircleArea(2, 3    ));







	return 0;
}



