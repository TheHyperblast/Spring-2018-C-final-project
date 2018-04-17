#include "Naga.h"

Naga::Naga()
{
	this -> eName = "Naga";
	this -> eDescription = "";
	this -> eLevel = 10;
	this -> eHP = 52;
	
	
	this -> eStr = 26;
	this -> eTou = 20;
	this -> eSpeed = 24;
	this -> eIntel = 20;
	
	this -> eWeaponAttName = "fists";
	this -> eWeaponAtt = 5;
	this -> eWeaponVerb = "punch";
	
	this -> eGold = (rand() % 14) + 18;
}
