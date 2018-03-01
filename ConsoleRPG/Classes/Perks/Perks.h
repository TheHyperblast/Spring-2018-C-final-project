#ifndef	PERKS_H
#define PERKS_H

#include <iostream>
#include <string>

using namespace std;

class Perks
{
	private:
		string perkName;
		string perkDescription;
		
	public:
		Perks();
		~Perks();
		
		// Accessors Functions
		void getPerkName();
		void getperkDescription();
		
		//Mutator Functions
		void setPerkName(string);
		void setPerkDescription(string);
		
		// Functions
};

#endif
