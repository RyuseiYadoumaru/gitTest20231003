#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	void PrintName()
	{
		// �����ɖ��O���o�͂���R�[�h������
		cout << "�N���{�[" << endl;
	}

	void SetName(string name) 
	{
		m_name = name;
	}

private:
	string m_name = "���O";
};
