#include"Vector2D.h"



Vector2D::Vector2D()
	:m_x(0.0f)
	,m_y(0.0f)
{


}




Vector2D::Vector2D(float x_, float y_)
	:m_x(x_)
	, m_y(y_)
{


}


Vector2D& Vector2D::operator=(const Vector2D& vec)
{
	this->m_x = vec.m_x;
	this->m_y = vec.m_y;
	return *this;
}

Vector2D Vector2D::operator+(const Vector2D& vec)
{
	Vector2D ans;
	ans.m_x = this->m_x + vec.m_x;
	ans.m_y = this->m_y + vec.m_y;
	return ans;
}

// += �̃I�[�o�[���[�h
// ���Ӓl�ցA�v�Z���đ�����s���̂ŁA��{�I�ɂ͑�����Z�q�Ɠ����`�ɂȂ�
Vector2D& Vector2D::operator+=(const Vector2D& vec)
{
	this->m_x += vec.m_x;
	this->m_y += vec.m_y;
	return *this;
}
