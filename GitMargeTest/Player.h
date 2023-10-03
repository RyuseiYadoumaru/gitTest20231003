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
		printf("名前\n");

	}

	void SetName(string name) 
	{
		m_name = name;
	}

private:
	string m_name = "名前";
};
