#include <iostream>
#include"Enemy.h"
#include"Shot.h"
#include"File.h"

// usingについて
// usingはnamespaceをスコープ内に追加する機能

using namespace Enemy;

int main()
{

	//printf("敵の最大数 = %d\n", Enemy::Max);
	//printf("弾の最大数 = %d\n", Shot::Max);

	Enemy::PrintMax();
	Shot::PrintMax();

	// std も名前空間
	std::cout << "std::も名前空間" << std::endl;

	// 入れ子にしたnamespace内のデータを使う場合
	printf("テクスチャの最大数 = %d\n", File::Texture::Max);
	printf("サウンドの最大数 = %d\n", File::Sound::Max);
	printf("ファイルの最大数 = %d\n", File::Max);

	// usingでEnemy名前空間を使うことにしているので
	// 以下は、Enemy::PrintMax()を呼び出している
	PrintMax();

	return 0;
}

