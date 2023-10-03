#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	void PrintName()
	{
		// ここに名前を出力するコードを書く
		cout << m_name << endl;
	}

	void SetName(string name) 
	{
		m_name = name;
	}

private:
	string m_name = "マリオ";
};
