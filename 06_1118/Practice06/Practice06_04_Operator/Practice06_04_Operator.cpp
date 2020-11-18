
#include <iostream>


// 書き方の例としてシンプルなTestクラスを作る

class Test
{
public:
	Test(int val):m_Val(val)
	{}


	// Test と int を足し算するための + オペレーター
	int operator +(int val)
	{
		return (m_Val + val);
	}


private:
	int m_Val;



};


int main()
{
	Test t(10);
	int ans = t + 100 + 111;		// Testが持っているm_Valと足し算ができるようにしたい
	printf("ans = %d\n", ans);



	return 0;
}
