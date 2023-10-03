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
	enemy.SetName("enemy");

	player.SetName("aiueo");

	// 変更後の名前
	player.PrintName();
	//enemy.PrintName();


	return 0;
}
