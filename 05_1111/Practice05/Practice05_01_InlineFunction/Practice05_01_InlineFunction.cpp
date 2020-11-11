#include <iostream>
#include<Windows.h>
#include<stdio.h>

#define USE_INLINE	//　インライン関数を使うか


inline int AddSum(int a, int b)
{
	return (a + b);
}




#ifdef USE_INLINE
inline unsigned int Pow(int x1, int x2)
{
	return (x1 * x2);
}
#else
unsigned int Pow(int x1, int x2)
{
	return (x1 * x2);
}
#endif


int main()
{




	int a=AddSum(6, 4);


	LARGE_INTEGER f;
	if (!QueryPerformanceFrequency(&f))
	{
		return 0;
	}
	LARGE_INTEGER s, e;
	QueryPerformanceFrequency(&s);
	unsigned int pow = 0;
	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < 10000; j++)
		{
			pow = Pow(i, j);
		}
	}
	printf("pow = %d\n", pow);
	QueryPerformanceFrequency(&e);
	double t = (double)(e.QuadPart - s.QuadPart) / f.QuadPart;
	printf("time = %f sec\n", t);


	return 0;
}