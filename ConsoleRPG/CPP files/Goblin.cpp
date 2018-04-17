#include "Goblin.h"

Goblin::Goblin()
{
	this -> eName = "Goblin ";
	this -> eDescription = "";
	this -> eLevel = 1;
	this -> eHP = 20;
	
	
	this -> eStr = 5;
	this -> eTou = 5;
	this -> eSpeed = 5;
	this -> eIntel = 5;
	
	this -> eWeaponAttName = "hands";
	this -> eWeaponAtt = 5;
	this -> eWeaponVerb = "slap";

	this -> eGold = (rand() % 5) + 1; 
}
