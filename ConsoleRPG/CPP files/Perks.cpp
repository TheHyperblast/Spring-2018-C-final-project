#include "Perks.h"

Perks::Perks()
{
	
}

Perks::~Perks()
{
	
}

Perks::getPerkName()
{ return perkName; }

Perks::getperkDescription()
{ return perkDescription; }

Perks::setPerkName(string perkName)
{ this -> perkName = perkName; }

Perks::setPerkDescription(string perkDescription)
{ this -> perkDescription = perkDescription; }
