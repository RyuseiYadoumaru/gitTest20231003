#pragma once
#include <iostream>
#include <string>

using namespace std;

class Enemy
{
public:
	void PrintName()
	{
<<<<<<< HEAD
		// ここに名前を出力するコードを書く
=======
		// �����ɖ��O���o�͂���R�[�h������
		cout << m_name << endl;
>>>>>>> yadomaru

	}

	void SetName(string name)
	{
		m_name = name;
	}

private:
<<<<<<< HEAD
	string m_name = "名前";
=======
	string m_name = "�N���{�[";
>>>>>>> yadomaru
};
