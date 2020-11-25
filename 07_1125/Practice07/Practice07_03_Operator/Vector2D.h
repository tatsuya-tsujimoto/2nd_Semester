#ifndef VECTOR_2D_H
#define VECTOR_2D_H

class Vector2D
{
public:
	Vector2D();
	Vector2D(float x_, float y_);

	float GetX() const { return m_x; }
	float GetY() const { return m_y; }

	//ベクトルの長さを求める
	float GetLength()const;

	// =のオペレーターオーバーロード
	Vector2D& operator = (const Vector2D& vec);

	// +のオペレーターオーバーロード
	Vector2D operator + (const Vector2D& vec);

	// +=のオーバーロード
	Vector2D& operator +=(const Vector2D& vec);
	
	// >のオーバーロード
	bool operator>(const Vector2D& vec)const;

private:
	float m_x;
	float m_y;

};




#endif