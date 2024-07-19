#include "Game.h"

Game::Game()
{
	srand(time(NULL));
	p = new Player[2];
}

void Game::play()
{
	string input;
	int i = 0;

	PlayerName();
	cin.ignore();

	while (true)
	{
		cout << p[i%2].getName() << " <ENTER>";
		getline(cin, input);
		if (input.empty())
		{
			randomNumber(p[i%2].getName());
		}
		else
		{
			cout << "-- Please press <ENTER>" << endl;
		}
		i++;	
	}
}

void Game::PlayerName()
{
	string name;

	cout << "Fist Player Name >> ";
	cin >> name;
	p[0].setName(name);
	cout << "Second Player Name >> ";
	cin >> name;
	p[1].setName(name);
}

void Game::randomNumber(string n)
{
	int r[3];

	for (int i = 0; i < 3; i++)
	{
		r[i] = rand() % 3;
		cout << "\t\t" << r[i];
	}

	if (r[0] == r[1] && r[1] == r[2])
	{
		cout <<"\t" << n << " Win" << endl;
	}
	else
	{
		cout << "\t" << "Try Again" << endl;
	}
}
