#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	// 2023/10/03 asawa

	/// <summary>
	/// �v���C���[�̖��O���o�͂���֐�
	/// </summary>
	void PrintName()
	{
		// �����ɖ��O���o�͂���R�[�h������
		cout << "�v���C���[�l�[���F" << this->m_name << endl;
	}

	void SetName(string name) 
	{
		m_name = name;
	}

private:
	string m_name = "�Ǘ֖卶�q��";
};
