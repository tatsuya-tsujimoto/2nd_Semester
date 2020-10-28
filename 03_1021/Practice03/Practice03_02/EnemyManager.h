
#ifndef ENEMY_MANAGER_H
#define ENEMY_MANAGER_H

#include <vector>

// エネミー管理クラス
class EnemyManager
{
public:
	EnemyManager();		// コンストラクタ
	~EnemyManager();	// デストラクタ

public:
	// エネミーを生み出す
	class Base* CreateEnemy(int enemy_type);
	// エネミーを削除する
	bool DestoryEnemy(class Base* ptr);
	// エネミーの処理を実行する
	void Exec();
	// エネミーの描画を実行する
	void Draw();
	// 指定した矩形とEnemyの当たり判定をとる
	class Base* CheckHit(int x, int y, int width, int height);

	bool DestroyEnemy(class Base* ptr);
private:
	// 作成したエネミーを管理する
	std::vector<class Base*> m_Enemies;
};

#endif	// #ifndef ENEMY_MANAGER_H


