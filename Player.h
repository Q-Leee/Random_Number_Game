#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
	string name;
public:
	Player() : name(name) {}
	void setName(string name);
	string getName();
};