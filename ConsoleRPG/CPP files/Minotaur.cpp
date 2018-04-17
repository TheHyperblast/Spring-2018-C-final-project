#include "Minotaur.h"

Minotaur::Minotaur()
{
	this -> eName = "Minoraur";
	this -> eDescription = "";
	this -> eLevel = 5;
	this -> eHP = 35;
	
		
	this -> eStr = 18;
	this -> eTou = 18;
	this -> eSpeed = 3;
	this -> eIntel = 3;
	
	this -> eWeaponAttName = "axe";
	this -> eWeaponAtt = 8;
	this -> eWeaponVerb = "slash";
	
	this -> eGold = (rand() % 15) + 10;
}
