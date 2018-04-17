#include "Armor.h"

Armor::Armor()
{
	
}

Armor::~Armor()
{
	
}

// Functions

// Accessors
string Armor::getArmorName()
{ return armorName;}

string Armor::getArmorDescription()
{ return armorDescription;}

// Mutators

void Armor::setArmorName(string armorName)
{ this -> armorName = armorName;}

void Armor::setArmorDescription(string armorDescription)
{ this -> armorDescription = armorDescription;}
