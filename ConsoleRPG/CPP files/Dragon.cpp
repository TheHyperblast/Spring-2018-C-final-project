#include "Dragon.h"

Dragon::Dragon()
{
	this -> eName = "Dragon";
	this -> eDescription = "";
	this -> eLevel = 16;
	this -> eHP = 100;
	
	
	this -> eStr = 35;
	this -> eTou = 35;
	this -> eSpeed = 30;
	this -> eIntel = 40;
	
	this -> eWeaponAttName = "fangs";
	this -> eWeaponAtt = 20;
	this -> eWeaponVerb = "bite";
	
	this -> eGold = (rand() % 20) + 32;
}
