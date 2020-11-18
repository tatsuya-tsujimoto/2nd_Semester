#ifndef CHARACTER_BASE_H
#define CHARACTER_BASE_H


class CharacterBase
{
public:
	// �R�s�[�R���X�g���N�^�̏�����(�錾)
	CharacterBase(const CharacterBase& cb);

	// �ʏ�̈����t���R���X�g���N�^
	CharacterBase(int hp,int mp);

	virtual ~CharacterBase();

	void PrintParam();

	//void SetHp(int hp) { m_Hp = hp; }
	//void SetMp(int mp) { m_Mp = mp; }


	int GetHp() const { return m_Hp; }
	int GetMp() const { return m_Mp; }

	// �_���[�W��^����
	// �l�n���ɂ��R�s�[�R���X�g���N�^�Ăяo���e�X�g
	void ReceiveDamege(CharacterBase attacker);

	// ���g�̕��������
	// �C���X�^���X��߂�l�Ɏg�����̃R�s�[�R���X�g���N�^�Ăяo���ăe�X�g
	CharacterBase CreateCopy();

protected:
	int m_Hp;
	int m_Mp;

};


#endif