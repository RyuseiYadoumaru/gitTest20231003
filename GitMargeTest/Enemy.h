#pragma once
#include <iostream>
#include <string>

using namespace std;

class Enemy
{
public:
	void PrintName()
	{
		// �����ɖ��O���o�͂���R�[�h������

	}

	void SetName(string name)
	{
		m_name = name;
	}

private:
	string m_name = "���O";
};
