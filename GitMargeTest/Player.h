#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	void PrintName()
	{
<<<<<<< HEAD
		// �����ɖ��O���o�͂���R�[�h������
		printf("Ruche");
		printf("ReRuche")

=======
		// ここに名前を出力するコードを書く
    printf("PLAYER NAME");
>>>>>>> mukai
	}

	void SetName(string name) 
	{
		m_name = name;
	}


private:
<<<<<<< HEAD
	string m_name = "Re";
=======
	string m_name = "名前";
>>>>>>> mukai
};
