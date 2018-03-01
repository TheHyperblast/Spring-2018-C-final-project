#include "Game.h"

using namespace std;

int main() {
	
//	srand(time(Null));
	
	Game game;
	
	
	while(game.getPlaying())
	{
			game.mainMenu();
	}
	
	system("pause");
	return 0;
}
