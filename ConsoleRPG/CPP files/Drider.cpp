#include "Drider.h"

Drider::Drider()
{
	this -> eName = "Drider";
	this -> eDescription = "";
	this -> eLevel = 14;
	this -> eHP = 75;
	
	
	this -> eStr = 28;
	this -> eTou = 28;
	this -> eSpeed = 28;
	this -> eIntel = 28;
	
	this -> eWeaponAttName = "claws";
	this -> eWeaponAtt = 18;
	this -> eWeaponVerb = "claw";
	
	this -> eGold = (rand() % 20) + 20;
}
