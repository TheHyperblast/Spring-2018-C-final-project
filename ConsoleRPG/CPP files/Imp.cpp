#include "Imp.h"

Imp::Imp()
{
	this -> eName = "Imp";
	this -> eDescription = "";
	this -> eLevel = 2;
	this -> eHP = 25;
	
	
	this -> eStr = 7;
	this -> eTou = 4;
	this -> eSpeed = 5;
	this -> eIntel = 4;
	
	this -> eWeaponAttName = "claws";
	this -> eWeaponAtt = 6;
	this -> eWeaponVerb = "slash";
	
	this -> eGold = (rand() % 7) + 4;
}
