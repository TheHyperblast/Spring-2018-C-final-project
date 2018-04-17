#include "Faerie.h"

Faerie::Faerie()
{
	this -> eName = "Faerie";
	this -> eDescription = "";
	this -> eLevel = 4;
	this -> eHP = 20;
	
	
	this -> eStr = 5;
	this -> eTou = 4;
	this -> eSpeed = 11;
	this -> eIntel = 5;
	
	this -> eWeaponAttName = "wand";
	this -> eWeaponAtt = 3;
	this -> eWeaponVerb = "cast";
	
	this -> eGold = (rand() % 10) + 7;
}
