#ifndef HOMEBASE_H
#define HOMEBASE_H

#include "Player.h"
#include "Combat.h"

class Homebase
{
	private:
		
	public:
		
		Homebase();
		~Homebase();
		
		int time;
		
		
		// Functions
		
		void rest();
		void doCamp();
		void returnToCamp(int timeUsed);
		void returnToCampUseOneHour();
		void returnToCampUseTwoHours();
		void returnToCampUseFourHours();
		void returnToCampUseEightHours();
		
		// Objects
		Player* player;
		Combat combat;
};
#endif
