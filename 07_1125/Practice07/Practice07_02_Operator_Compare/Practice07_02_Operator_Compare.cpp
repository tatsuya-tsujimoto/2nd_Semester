#include <iostream>
#include"Employee.h"

int main()
{

	Employee one(Employee::POST::STAFF);
	Employee two(Employee::POST::PRESIDENT);

	one.ShowPost();
	two.ShowPost();

	if (two > one)
	{
		printf("twoの方が偉い\n");
	}
	else
	{
		printf("oneの方が偉い\n");
	}







}

