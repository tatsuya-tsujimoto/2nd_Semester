#include"CharacterBase.h"
#include<stdio.h>
#include<string.h>

// コピーコンストラクタの書き方(定義)
CharacterBase::CharacterBase(const CharacterBase& cb)
{
	printf("CharacterBase::コピーコンストラクタ\n");
	m_Hp = cb.m_Hp;
	m_Mp = cb.m_Mp;
}


// デフォルトの引数付きコンストラクタ
CharacterBase::CharacterBase(int hp,int mp)
	:m_Hp(10)
	, m_Mp(8)
{
	printf("CharacterBase::コンストラクタ\n");
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
	// 変数copyが有効なのはCreateCopy内までなので、
	// 呼び出した側で使うために、戻り値変数といえるものに
	// 値を代入（戻り値 = copy）しているため
	// コピーコンストラクタが呼び出される
	CharacterBase copy(m_Hp,m_Mp);
	return copy;
}