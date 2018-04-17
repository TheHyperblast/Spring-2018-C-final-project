#ifndef	EXPLORE_H
#define EXPLORE_H

#include "Player.h"
#include "Homebase.h"

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Explore
{
	private:
		int exploreChoice;
		
	public:
		
		// Functions
		Explore();
		void exploration();
		void tryDiscover();
		void doExplore();
		
		void showPlacesExplored();
	
		// Objects
		Player player;
		Homebase homebase;
		
		//int rand;
};

#endif
