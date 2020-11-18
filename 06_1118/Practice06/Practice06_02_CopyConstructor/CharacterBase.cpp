#include"CharacterBase.h"
#include<stdio.h>
#include<string.h>

// �R�s�[�R���X�g���N�^�̏�����(��`)
CharacterBase::CharacterBase(const CharacterBase& cb)
{
	printf("CharacterBase::�R�s�[�R���X�g���N�^\n");
	m_Hp = cb.m_Hp;
	m_Mp = cb.m_Mp;
}


// �f�t�H���g�̈����t���R���X�g���N�^
CharacterBase::CharacterBase(int hp,int mp)
	:m_Hp(10)
	, m_Mp(8)
{
	printf("CharacterBase::�R���X�g���N�^\n");
}

CharacterBase::~CharacterBase()
{

}


void CharacterBase::PrintParam()
{
	printf("Hp		= %d\n", m_Hp);
	printf("Mp		= %d\n", m_Mp);
}

void CharacterBase::ReceiveDamege(CharacterBase attacker)
{
	printf("--ReceiveDamage--\n");
	m_Hp -= attacker.m_Mp;

}

CharacterBase 	CharacterBase::CreateCopy()
{
	// �ϐ�copy���L���Ȃ̂�CreateCopy���܂łȂ̂ŁA
	// �Ăяo�������Ŏg�����߂ɁA�߂�l�ϐ��Ƃ�������̂�
	// �l�����i�߂�l = copy�j���Ă��邽��
	// �R�s�[�R���X�g���N�^���Ăяo�����
	CharacterBase copy(m_Hp,m_Mp);
	return copy;
}