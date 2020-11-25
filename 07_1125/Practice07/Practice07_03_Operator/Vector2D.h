#ifndef VECTOR_2D_H
#define VECTOR_2D_H

class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_x; }
	float GetY() const { return m_y; }

	//�x�N�g���̒��������߂�
	float GetLength()const;

	// =�̃I�y���[�^�[�I�[�o�[���[�h
	Vector2D& operator = (const Vector2D& vec);

	// +�̃I�y���[�^�[�I�[�o�[���[�h
	Vector2D operator + (const Vector2D& vec);

	// +=�̃I�[�o�[���[�h
	Vector2D& operator +=(const Vector2D& vec);
	
	// >�̃I�[�o�[���[�h
	bool operator>(const Vector2D& vec)const;

private:
	float m_x;
	float m_y;

};




#endif