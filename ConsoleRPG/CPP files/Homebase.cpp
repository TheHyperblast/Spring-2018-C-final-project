#include "Homebase.h"

Homebase::Homebase()
{
	
}

Homebase::~Homebase()
{
	
}

void Homebase::rest()
{
	cout << "You decided to go to sleep. You had a long day of work and adventure ahead of you, for tommorow." << endl;
	player->addHp(80);
}

void Homebase::doCamp()
{
	combat.inCombat() == false;
}

void Homebase::returnToCamp(int timeUsed)
{
	system("cls");
	if(timeUsed == 1)
	{
		cout << "An hour has passed. " << endl;
	}
	else
	{
		cout << timeUsed << " hours has passed. " << endl;
	}
	time += timeUsed;
}

void Homebase::returnToCampUseOneHour()
{ returnToCamp(1); }

void Homebase::returnToCampUseTwoHours()
{ returnToCamp(2); }
	
void Homebase::returnToCampUseFourHours()
{ returnToCamp(4); } 

void Homebase::returnToCampUseEightHours()
{ returnToCamp(8); }
