
#ifndef BASE_H
#define BASE_H

// ���N���X�i�e�N���X�j
class Base
{
public:
	Base();
	virtual ~Base();

public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

private:
	int		m_Hp;
	float	m_PosX;
	float	m_PosY;
	float	m_MoveSpeed;

};

#endif	// #ifndef BASE_H

