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

	// +�̃I�[�o�[���[�h(�N���X�O�ł̒�`�p)
	T operator+(const Position& pos_);

	// = �I�[�o�[���[�h�i�N���X�O�ł̒�`�p�j
	T& operator=(const Position& pos_);

private:
	T m_PosX;
	T m_PosY;



};

template <class T>
T Position<T>::operator+(const Position& pos_)
{
	Position ans;		// ���<T>�^�p��Position�ł���Ɛ錾���Ă���̂ŁA�����ł͕s�v
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