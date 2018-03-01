#ifndef	WEAPONS_H
#define WEAPONS_H

#include <iostream>
#include <string>

using namespace std;

class Weapons
{
	private:
		string name;
		string description;
		
		int damage;
		int weaponsValue;
		
		
		
	public:
		Weapons();
		Weapons(string, int, string);
};

#endif
