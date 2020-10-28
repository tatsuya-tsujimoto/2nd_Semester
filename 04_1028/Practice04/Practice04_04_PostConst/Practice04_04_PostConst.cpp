
#include <iostream>

class Test
{
public:
	void SetValue(int value);
	int GetValue()const;
private:
	int Value;

};

void Test::SetValue(int value)
{
	Value = value;
}

int Test::GetValue()const
{
	return Value;
}

int main()
{
	Test test;
	test.SetValue(1000);
	int ans = test.GetValue();

	return 0;
}

