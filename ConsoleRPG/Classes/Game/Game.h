#ifndef	GAME_H
#define GAME_H

#include <time.h>
#include <stdlib.h>
#include <windows.h>

#include "Player.h"
#include "Explore.h"
#include "Homebase.h"


using namespace std;

class Game
{
	private:
		int choice;
		bool playing;
		
	public:
		Game();
		~Game();
		
		//Functions
		void initalizeGame();
		void mainMenu();
		void endGame();
		void introGame();
		
		//Accessors
		bool getPlaying();
		
		//Game related objects
		Player player;
		Explore explore;
		Homebase homebase;
};

#endif
