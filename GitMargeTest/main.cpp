#include "Player.h"
#include "Enemy.h"

int main()
{
	Player player;
	Enemy enemy;

	// 名前を出力するコード
	player.PrintName();
	enemy.PrintName();


	// プレイヤーの名前を変更する
	// ここに矢動丸がエネミーを名前を変更してコンフリクトを起こします
	// コンフリクト対応は二つ名前が変更されるようにしてください

	enemy.SetName("namamammam");


<<<<<<< HEAD
	// �ύX��̖��O
	player.PrintName();
=======
	// 変更後の名前
	//player.PrintName();
>>>>>>> mukai
	//enemy.PrintName();


	return 0;
}
