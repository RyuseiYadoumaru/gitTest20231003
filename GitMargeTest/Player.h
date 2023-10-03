#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	void PrintName()
	{
		cout << m_name << endl;
	}

	void SetName(string name) 
	{
		m_name = name;
	}

private:
	string m_name = "–k“c";
};
