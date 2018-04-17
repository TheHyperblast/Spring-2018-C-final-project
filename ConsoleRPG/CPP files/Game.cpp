#include "Game.h"

Game::Game()
{
	choice = 0;
	playing = true;

}

Game::~Game()
{
	
}

// Accessors
bool Game::getPlaying()
{ return playing; }


// Functions
void Game::initalizeGame()
{
	string name;
	
	introGame();
	
	cout << "Who will be selected for the lottory for the town of Yaki? " << endl;
	
	cin >> name;
	
	player.initalize(name);
	
}


void Game::mainMenu()
{
	homebase.player = &player;
	cout << endl << endl;
	cout << "Main Menu " << endl << endl;
	cout << "0: To quit: " << endl;
	cout << "1: Explore: " << endl;
	cout << "2: Places: " << endl;
	cout << "3: Items: " << endl;
	cout << "4: Rest: " << endl;
	cout << "5: Player Info: " << endl;
	cout << "6: Level Up: " << endl;
	cout << endl;
		
	cout << "Choice: ";
	cin >> choice;
	cout << endl << endl;
	
	switch(choice)
	{
		case 0:
			playing = false;
			break;
		
		case 1:
			system("cls");
			explore.doExplore();
			break;
		
		case 2:
			system("cls");
			explore.showPlacesExplored();
			break;
		
		case 3:
			system("cls");
			player.takeDamage(10);
			break;
			
		case 4:
			system("cls");
			homebase.returnToCampUseEightHours();
			homebase.rest();
			//player.addHp(80);
			break;
			
		case 5:
			system("cls");
			player.getPlayerInfo();
			break;
			
		case 6:
			system("cls");
			player.levelUp();
			break;
			
		default:
			system("cls");
			cout << "There seems to be a mysterious force perventing you from choosing any other option. \n"
			"*Obmious Voice* You do not have the power to choice that option. You will choose what you are giving. */Obmious Voice* \n"
			"It would probably be best if we go with the flow for now." << endl << endl;
			break;
	}

}

	
void Game::endGame()
{
		
}
	
void Game::introGame()
{
	
	cout << "You live in a world called Yudrai, it is a place full of magic, excitiment, and wonder. But not all is as it seems. \n"
	"A long time ago, a portal opened up on Mount Geki. This event relesed the ____ upon Yudrai. A person by the name of \n" 
	"Bemault help get rid of the ____. To help limit the numbers of the ____, and other creatures from coming in. Every year\n"
	 "each town and city of Yudrai has a lottery of people to go in to the portal and try to find a way to either close it, \n"
	 "or to limit the number of them from coming in to the portal. \n \n";
}
