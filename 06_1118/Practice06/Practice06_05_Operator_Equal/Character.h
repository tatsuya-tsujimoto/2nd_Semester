#ifndef CHARACTER_H
#define CHARACTER_H



class Character
{
public:
	enum JOB
	{
		Freeter,
		Warrior,
		Wizard,
		Prist,
	};



public:

	Character();
	Character(const Character& ch);
	virtual ~Character();


	// 代入演算子（＝）の operator
	Character& operator = (Character& ch);		// コピーコンストラクタが走るとまずいので参照


	JOB GetJob()const { return m_Job; }

protected:
	JOB m_Job;


};


// パラメータを表示するだけ
void PrintParam(Character ch);

#endif	// #ifndef CHARACTER_BASE_H
