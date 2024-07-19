#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Player.h"

using namespace std;

class Game
{
	Player* p;
public:
	Game(); 
	void play();
	void PlayerName();
	void randomNumber(string n);
};

