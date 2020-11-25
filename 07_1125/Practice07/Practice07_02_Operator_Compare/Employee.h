#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee
{
public:
	enum POST
	{
		STAFF,				// ���Ј�
		SECTION_CHIEF,		// �ے�
		MANAGER,			// ����
		PRESIDENT,			// �В�
	};

	Employee(POST post);
	void ShowPost();
	POST GetPost()const;

	// >���I�[�o�[���[�h
	bool operator>(const Employee& emp_)const;


private:
	POST m_Post;		// ��E
	int m_Salary;		// ����
};





#endif