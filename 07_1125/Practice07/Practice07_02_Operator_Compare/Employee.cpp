#include"Employee.h"
#include<stdio.h>

Employee::Employee(POST post_)
	:m_Post(post_)
{




}

void Employee::ShowPost()
{
	switch (m_Post)
	{
	case STAFF:			printf("平社員\n"); break;
	case SECTION_CHIEF:	printf("課長\n"); break;
	case MANAGER:		printf("部長\n"); break;
	case PRESIDENT:		printf("社長\n"); break;
	}
}


Employee::POST Employee::GetPost()const
{
	return m_Post;

}


bool Employee::operator>(const Employee& emp_)const
{
	if (this->m_Post > emp_.GetPost())	// m_Postにthis->を付けてもいける 追記：好み or ルールで付けるか付けないか
	{
		return true;
	}
	return false;
}



