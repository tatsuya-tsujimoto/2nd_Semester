#ifndef POSITION_H
#define POSITION_H


template<class T>
class Position
{
public:
	Position()
		:m_PosX(0)
		, m_PosY(0)
	{
	}

public:
	void SetPosX(T x_) { m_PosX = x_; }
	void SetPosY(T y_) { m_PosY = y_; }

	T GetPosX()const { return m_PosX; }
	T GetPosY()const { return m_PosY; }

	// +のオーバーロード(クラス外での定義用)
	T operator+(const Position& pos_);

	// = オーバーロード（クラス外での定義用）
	T& operator=(const Position& pos_);

private:
	T m_PosX;
	T m_PosY;



};

template <class T>
T Position<T>::operator+(const Position& pos_)
{
	Position ans;		// 上で<T>型用のPositionであると宣言しているので、ここでは不要
	ans.SetPosX(this->GetPosX() + pos_.GetPosX());
	ans.SetPosY(this->GetPosY() + pos_.GetPosY());
}

template <class T>
T& Position<T>::operator=(const Position& pos_)
{
	this->SetPosX = (pos_.GetPosX());
	this->SetPosY = (pos_.GetPosY());
	return *this;
}







#endif	//POSOTION_H