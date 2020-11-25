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
	case STAFF:			printf("���Ј�\n"); break;
	case SECTION_CHIEF:	printf("�ے�\n"); break;
	case MANAGER:		printf("����\n"); break;
	case PRESIDENT:		printf("�В�\n"); break;
	}
}


Employee::POST Employee::GetPost()const
{
	return m_Post;

}


bool Employee::operator>(const Employee& emp_)const
{
	if (m_Post > emp_.GetPost())
	{
		return true;
	}
	return false;
}



