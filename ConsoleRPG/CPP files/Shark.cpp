#include "Shark.h"

Shark::Shark()
{
	this -> eName = "Shark";
	this -> eDescription = "";
	this -> eLevel = 6;
	this -> eHP = 35;
	
	
	this -> eStr = 17;
	this -> eTou = 16;
	this -> eSpeed = 16;
	this -> eIntel = 10;
	
	this -> eWeaponAttName = "teeth";
	this -> eWeaponAtt = 10;
	this -> eWeaponVerb = "bite";
	
	this -> eGold = (rand() % 16) + 12;
}
