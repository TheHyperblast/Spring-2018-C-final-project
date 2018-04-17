#include "Combat.h"

Combat::Combat()
{
	
}

Combat::~Combat()
{
	
}

void Combat::startCombat()
{
	combat = true;
	combatMenu();
	
}

bool Combat::inCombat()
{ return combat;}

void Combat::combatRound()
{
	//Have the player hit first if it doesn't kill, or the player doesn't run, then the monster.
	
	if(enemy.isAlive())
	{
		enemy.eCalcDamage();
	}
}

void Combat::combatRoundOver()
{
	if(inCombat() == true)
	{
		cleanupAfterCombat();
	}
	
}


bool Combat::cleanupAfterCombat()
{
	if(player.isAlive() || enemy.isAlive())
	{
		return combat = false;
	}

}

void Combat::combatMenu()
{
	int combatChoice;
	
	cout << "1. To fight "<< endl;
	cout << "2. To use item "<< endl;
	cout << "3. To run "<< endl;
	cin >> combatChoice;
	
	switch(combatChoice)
	{
		case 1:
			cout << "fight test" << endl;
			break;
		case 2:
			cout << "use items test" << endl;
			break;
		case 3:
			cout << "run test " << endl;
			break;
		default: 
			cout << "Wrong input, try again. " << endl;
			combatMenu();
			break;
	}
	cout << endl;
}


// Combat Moves
void Combat::combatMiss()
{
	
}

void Combat::combatEvade()
{
	
}

// Other stuff
