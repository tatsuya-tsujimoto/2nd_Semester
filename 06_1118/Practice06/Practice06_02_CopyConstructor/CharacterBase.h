#ifndef CHARACTER_BASE_H
#define CHARACTER_BASE_H


class CharacterBase
{
public:
	// コピーコンストラクタの書き方(宣言)
	CharacterBase(const CharacterBase& cb);

	// 通常の引数付きコンストラクタ
	CharacterBase(int hp,int mp);

	virtual ~CharacterBase();

	void PrintParam();

	//void SetHp(int hp) { m_Hp = hp; }
	//void SetMp(int mp) { m_Mp = mp; }


	int GetHp() const { return m_Hp; }
	int GetMp() const { return m_Mp; }

	// ダメージを与える
	// 値渡しによるコピーコンストラクタ呼び出しテスト
	void ReceiveDamege(CharacterBase attacker);

	// 自身の複製を作る
	// インスタンスを戻り値に使う時のコピーコンストラクタ呼び出してテスト
	CharacterBase CreateCopy();

protected:
	int m_Hp;
	int m_Mp;

};


#endif