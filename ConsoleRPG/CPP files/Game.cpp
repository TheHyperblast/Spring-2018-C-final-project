#include "Game.h"

Game::Game()
{
	choice = 0;
	playing = true;
}

Game::~Game()
{
	
}

bool Game::getPlaying(bool playing)
{ this -> playing = playing; }

void Game::mainMenu()
{
	cout << "Main Menu " << endl;
	cout << "0: To quit " << endl;
	cout << "1: Explore " << endl;
	cout << "2: Places " << endl;
	cout << "3: Followers " << endl;
	cout << "4: Rest " << endl << endl;
	
	cout << "Choice: ";
	cin >> choice;
	cout << endl << endl;
	
	switch(choice)
	{
		case 0:
			playing = false;
			break;
			
		default:
			break;
	}
}
