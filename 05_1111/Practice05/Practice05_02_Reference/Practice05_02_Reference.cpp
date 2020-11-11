
#include <iostream>


void Init(int& rhp, int& rmp)
{
	rhp = 50;
	rmp = 10;
}
void Print(const int& rhp, const int& rmp)
{
	//rhp = 500;
	//rmp = 100;

	printf("hp = %d\n", rhp);
	printf("mp = %d\n",rmp);
}

int main()
{

	int val = 0;
	int& ref = val;
	int* pVal = &val;

	printf("valのアドレス %x\n", &val);
	printf("refのアドレス %x\n", &ref);
	printf("pValのアドレス %x\n", &pVal);

	printf("\n");
	printf("valに100を代入\n");
	val = 100;
	printf("val = %d\n", val);
	printf("ref = %d\n",ref);

	printf("\n");
	printf("refに20を代入\n");
	val = 100;
	printf("val = %d\n", val);
	printf("ref = %d\n", ref);

	printf("\n");
	int hp = 0;
	int mp = 0;
	Init(hp, mp);		// 参照渡し
	Print(hp, mp);		// const参照渡し

	return 0;
}
