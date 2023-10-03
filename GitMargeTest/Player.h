#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	void PrintName()
	{
		//名前の出力
		cout << m_name << endl;

	}

	void SetName(string name) 
	{
		m_name = name;
	}

private:
	string m_name = "名前";
};
