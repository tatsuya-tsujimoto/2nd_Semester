
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include "Base.h"
#include "Player.h"
#include "Enemy.h"
#include "EnemyManager.h"

//#define PRACTICE03_1021			// �P�O���Q�P�����ƕ�


// �X�e�[�^�X�\��
void PrintStatus( std::string name, Base* target );


int main()
{
#if defined(PRACTICE03_1021)
//	Base* base = new Base();

//	Player player;
//	player.SetMoveSpeed(5.0f);
	Base* player = new Player();
	player->SetMoveSpeed(5.0f);

//	Enemy enemy;
//	enemy.SetHp(100);
	Base* enemy = new Enemy();
	enemy->SetHp(100);

	// �ʁX�̃N���X�ł��낤�ƁA���N���X�̃|�C���^�z����g����
	// �������܂Ƃ߂čs�����Ƃ��o����
	Base* pBase[] = 
	{
		player,
		enemy
	};
	std::string name[] =
	{
		"Player",
		"Enemy",
	};

	printf("-------------\n");
	printf("PRACTICE03_02\n");
	printf("-------------\n");

	// �ʁX�̃N���X���P�̏����ɂ܂Ƃ߂����邱�Ƃ��o����
	for( int i = 0; i < 2; i++ )
	{
		pBase[i]->Exec();
		pBase[i]->Draw();
		pBase[i]->CheckHit(10, 10, 20, 30);
		PrintStatus(name[i].c_str(), pBase[i]);
	}

	delete player;
	player = nullptr;
	delete enemy;
	enemy = nullptr;
#else
	// �P�O���Q�W���Ƀc�C��Ƃ�����
	// EnemyManager�̎��s�e�X�g

	EnemyManager* enemyMng = new EnemyManager();
	Base* pEnemy = nullptr;

	// �X�e�[�W�J�n���_�ł܂Ƃ߂ď�����
	// �����̓G�l�~�[�̎�ނ�\���i�{���Ȃ�enmu�Ȃǂŕ�����₷������j
	enemyMng->CreateEnemy(0);
	enemyMng->CreateEnemy(1);
	pEnemy = enemyMng->CreateEnemy(2);
	enemyMng->CreateEnemy(3);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(4);

	// �w�肵���G�l�~�[���폜
	enemyMng->DestroyEnemy(pEnemy);
	// �쐬�����G�l�~�[�Ɋe�������s�킹��
	enemyMng->Exec();
	enemyMng->Draw();

	pEnemy = enemyMng->CheckHit(10, 10, 20, 30);
#endif
	system("pause");
	return 0;
}

// �X�e�[�^�X�\��
void PrintStatus(std::string name, Base* target)
{
	if(target == nullptr)
	{
		return;
	}

	printf("%s Status\n", name.c_str());
	printf("hp = %d\n", target->GetHp());
	printf("PosX = %0.2f\n", target->GetPosX());
	printf("PosY = %0.2f\n", target->GetPosY());
	printf("MoveSpeed = %0.2f\n", target->GetMoveSpeed());
	printf("\n");
}

