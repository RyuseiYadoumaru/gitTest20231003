#pragma once
#include <iostream>
#include <string>

using namespace std;

class Enemy
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
<<<<<<< HEAD
	string m_name = "mario";
=======
  string m_name = "クリボー";
>>>>>>> mukai
};
