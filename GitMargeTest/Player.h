#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	// 2023/10/03 asawa

	/// <summary>
	/// プレイヤーの名前を出力する関数
	/// </summary>
	void PrintName()
	{
		// ここに名前を出力するコードを書く
		cout << "プレイヤーネーム：" << this->m_name << endl;
	}

	void SetName(string name) 
	{
		m_name = name;
	}

private:
	string m_name = "淺輪門左衛門";
};
