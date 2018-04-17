#include "Explore.h"


Explore::Explore() 
{

}

void Explore::exploration()
{
	
}

void Explore::doExplore()
{
	if(player.explored == 0)
	{
		cout << "You decide to carefully go out and explore. You are alert, scanning for possible dangers of attacks that could happen. You leave markings on the surrounding enviroment to help "
		<< "find your way back. It worries you that the portal has an opening on this side, unprotected, unguarded. \n Stunned, you realize you are looking back at you campsite. There "
		<< "is footprints coming from the other side, when you look at the way you just came in, the markings are gone. " << endl;
		tryDiscover();
		return;
	}
	else if(player.explored == 1)
	{
		cout << "You discovered the forest" << endl;
		tryDiscover();
		player.exploredForest++;
		return;
	}
	else if(player.explored > 1)
	{
		cout << "You continue to look for new areas to explore." << endl;
		tryDiscover();
		return;
	}
	
	
}

void Explore::tryDiscover()
{
	if(player.explored > 1)
	{
		if(player.exploredLake == 0 && (rand() % 5) + 1 == 3)
		{
			cout << "Lake test" << endl;
			player.exploredLake = 1;
			player.explored++;
			return;
		}
		
		else if(player.exploredLake >= 1 && (rand() % 5) + 1 == 3 && player.exploredDesert == 0)
		{
			cout << "Desert Test" << endl;
			player.exploredDesert = 1;
			player.explored++;
			return;
		}
		
		else if(player.exploredDesert >= 1 && (rand() % 5) + 1 == 3 && player.exploredCave == 0)
		{
			cout << "Cave Test" << endl;
			player.exploredCave = 1;
			player.explored++;
			return;
		}
	}	
	player.explored++;
}


void Explore::showPlacesExplored()
{
	if(player.explored < 2)
	{
		system("cls");
		cout << "You haven't discovered yet." << endl;
	}
	else if(player.explored > 0)
	{
		if(player.exploredForest > 0)
		{
			cout << "Places Explored: " << endl << endl;
			cout << "0. Go back to main menu" << endl;
			cout << "1. Forest. " << endl;		
		}
		
		if(player.exploredLake > 0)
		{	
			cout << "2. Lake " << endl;
		}
		if(player.exploredDesert > 0)
		{
			cout << "3. Desert " << endl;
		}
		if(player.exploredCave > 0)
		{
			cout << "4. Cave " << endl;
		}
	
		cin >> exploreChoice;
		cout << endl << endl;
		
		switch(exploreChoice)
		{
			case 0:
				break;
			case 1:
				system("cls");
				if(player.exploredForest == 1)
				{
					cout << "You clicked on forest test." << endl;
				}
				else
				{
					homebase.returnToCampUseOneHour();
					cout << "You got lost and returned back to camp" << endl;
					
				}
				break;
			case 2:
				if(player.exploredLake == 1)
				{
					cout << "You clicked on Lake test." << endl;
				}
				else
				{
					homebase.returnToCampUseOneHour();
					cout << "You got lost and returned back to camp" << endl;
				}
				break;
			case 3:
				if(player.exploredDesert == 1)
				{
					cout << "You clicked on Desert test." << endl;
				}
				else
				{
					homebase.returnToCampUseOneHour();
					cout << "You got lost and returned back to camp" << endl;
				}
				break;
			case 4:
				if(player.exploredCave == 1)
				{
					cout << "You clicked on Cave test." << endl;
				}
				else
				{
					homebase.returnToCampUseOneHour();
					cout << "You got lost and returned back to camp" << endl;
				}
				break;
			default:
				system("cls");
				homebase.returnToCampUseOneHour();
				cout << "You got lost and returned back to camp" << endl;
				break;
		}
	}

}
