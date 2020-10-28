
#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	m_Routine = 0;
	printf("Enemy : コンストラクタ\n");
}

Enemy::~Enemy()
{
	printf("Enemy : デストラクタ\n");
}

void Enemy::Exec()
{
}

void Enemy::Draw()
{
}

// 引数の矩形情報と、自分が当たっているか判定
bool Enemy::CheckHit(int x, int y, int width, int height)
{
	// 仮に、当たらなかったことにする
	printf("Enemy : 当たりませんでした！\n");
	return false;
}

