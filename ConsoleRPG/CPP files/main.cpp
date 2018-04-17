#include "Game.h"

using namespace std;

int main() {
	
	srand(time(0));

	Game game;
	game.initalizeGame();
	
	while(game.getPlaying())
	{
			game.mainMenu();
	}
	
	system("pause");
	return 0;
}
