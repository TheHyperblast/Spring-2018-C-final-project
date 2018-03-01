#ifndef	GAME_H
#define GAME_H

#include "Player.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

class Game
{
	private:
		int choice;
		bool playing;
		
	public:
		Game();
		~Game();
		
		void mainMenu();
		void endGame();
		
		bool getPlaying(bool);
};

#endif
