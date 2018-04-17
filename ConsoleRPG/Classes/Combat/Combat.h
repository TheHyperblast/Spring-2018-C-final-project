#ifndef	COMBAT_H
#define COMBAT_H

#include <iostream>
//#include "Armor.h"
//#include "Weapons.h"
#include "Enemy.h"
#include "Player.h"

using namespace std;

class Combat
{
	private:
		bool combat;
		
		//int hp;
		//int hpMax;
	public:
		
		Combat();
		~Combat();
		
		// combat functions
		void startCombat();
		bool inCombat();
		void combatRound();
		void combatRoundOver();
		bool cleanupAfterCombat();
		void combatMenu();
		
		
		// combat moves
		void combatMiss();
		void combatEvade();
		
		// Other stuff
		
		// Objects
		Player player;
		Enemy enemy;
		
};

#endif
