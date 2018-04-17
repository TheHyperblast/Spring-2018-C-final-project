#include "Harpy.h"

Harpy::Harpy()
{
	this -> eName = "Harpy";
	this -> eDescription = "";
	this -> eLevel = 8;
	this -> eHP = 50;
	
	
	this -> eStr = 24;
	this -> eTou = 18;
	this -> eSpeed = 28;
	this -> eIntel = 5;
	
	this -> eWeaponAttName = "claws";
	this -> eWeaponAtt = 8;
	this -> eWeaponVerb = "slash";
	
	this -> eGold = (rand() % 10) + 20;
}
