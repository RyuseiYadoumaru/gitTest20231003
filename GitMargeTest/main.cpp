#include "Player.h"
#include "Enemy.h"

int main()
{
	Player player;
	Enemy enemy;

	// ���O���o�͂���R�[�h
	player.PrintName();
	enemy.PrintName();

	// �v���C���[�̖��O��ύX����
	// �����ɖ�ۂ��G�l�~�[�𖼑O��ύX���ăR���t���N�g���N�����܂�
	// �R���t���N�g�Ή��͓���O���ύX�����悤�ɂ��Ă�������
	enemy.SetName("enemy");

	player.SetName("aiueo");

	// �ύX��̖��O
	player.PrintName();
	//enemy.PrintName();


	return 0;
}
