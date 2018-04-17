#include "Player.h"


//Exploration stuff
int Player::explored = 0;
int Player::exploredForest = 0;
int Player::exploredLake = 0;
int Player::exploredDesert = 0;
int Player::exploredCave = 0;


Player::Player()
{
	this -> name = "";
		
	this -> level = 0;
	this -> exp = 0;
	this -> nextLevelExp = 0;
	this -> statPoints = 0;
	this -> perkPoints = 0;
		
	this -> hp = 0;
	this -> maxHp = 0;
	this -> mp = 0;
	this -> maxMp = 0;
		
	this -> strenght = 0;
	this -> defense = 0;
	this -> intelligence = 0;
	this -> magic = 0;
	this -> speacialDefense = 0;
	this -> speed = 0;
		
	this -> fatigue = 0;
	this -> fatigueMax = 0;

	this -> damage = 0;
	//this -> damageMax = 0;
}

Player::~Player()
{
	
}

//Functions
void Player::initalize(const string name)
{
	this -> name = name;
		
	this -> level = 1;
	this -> exp = 0;
	this -> nextLevelExp = 100 * level;
	this -> statPoints = 12;
	this -> perkPoints = 2;
		
	this -> hp = 20;
	this -> maxHp = 20;
	this -> mp = 10;
	this -> maxMp = 10;
		
	this -> strenght = 10;
	this -> defense = 10;
	this -> intelligence = 10;
	this -> magic = 10;
	this -> speacialDefense = 10;
	this -> speed = 10;
		
	this -> fatigue = 0;
	this -> fatigueMax = 100;

	this -> damage = 10;
	//this -> damageMax = 20;
}

void Player::getPlayerInfo()
{
	cout << "Player Information: " << endl;
	cout << "Name: " << this -> name << endl;
	cout << "Level: " << this -> level << endl;
	cout << "Exp: " << this -> exp << endl;
	cout << "Exp to next level: " << this -> nextLevelExp << endl;
	
	cout << "strenght: " << this -> strenght << endl;
	cout << "defense: " << this -> defense << endl;
	cout << "intelligence: " << this -> intelligence << endl;
	cout << "magic: " << this -> magic << endl;
	cout << "speacialDefense: " << this -> speacialDefense << endl;
	cout << "speed: " << this -> speed << endl;
	
	cout << "HP: " << this -> hp << " / " << this -> maxHp << endl;
	cout << "MP: " << this -> mp << " / " << this -> maxMp << endl;
	cout << endl << endl;

}

void Player::levelUp()
{
	if(this -> exp >= this -> nextLevelExp)
	{
		this -> exp += this -> nextLevelExp;
		this -> level++;
		this -> nextLevelExp = 100 * level;
		
		this -> statPoints++;
		this -> perkPoints++;
		
		cout << "You are now level " << this -> level << "!" << endl << endl;
	}
	else
	{
		cout << "You don't have enough exp. :( " << endl << endl;
	}
}

void Player::addHp(int hp)
{
	this -> hp += hp;
	if(this -> hp < 0)
	{
		this -> hp = 0;
	}
	else if(this -> hp > this -> maxHp)
	{
		this -> hp = this -> maxHp;
	}
	
	cout << "You have gain " << hp << " hp." << endl;
}

int Player::reduceDamage(int damage)
{
	damage = int (damage - rand() % this -> defense);
	
	if(damage < 0)
	{
		damage = 0;
	}
	
	return damage;
	
}

int Player::takeDamage(int damage)
{
	damage = damage;
	reduceDamage(damage);
	
	if(damage > 0)
	{
		this -> hp -= damage;
		
		if(this -> hp < 0)
		{
			this -> hp = 0;
		}
	}
	
	cout << "You have taken " << damage << " damage." << endl;
}

bool Player::isAlive()
{ return this -> hp > 0;}
// Accessors Function
string Player::getName()
{ return this -> name; }

		
int Player::getLevel()
{ return this -> level; }

int Player::getExp()
{ return this -> exp; }

int Player::getNextLevelExp()
{ return this -> nextLevelExp; }

int Player::getStatPoints()
{ return this -> statPoints; }

int Player::getPerkPoints()
{ return this -> perkPoints;	}	
	
		
int Player::getHp()
{ return this -> hp; }

int Player::getMaxHp()
{ return this -> maxHp; }

int Player::getMp()
{ return this -> mp; }

int Player::getMaxMp()
{ return this -> maxMp; }

		
int Player::getStrenght()
{ return this -> strenght; }

int Player::getDefense()
{ return this -> defense; }

int Player::getIntelligence()
{ return this -> intelligence; }

int Player::getMagic()
{ return this -> magic; }

int Player::getSpeacialDefense()
{ return this -> speacialDefense; }

int Player::getSpeed()
{ return this -> speed; }

		
int Player::getFatigue()
{ return this -> fatigue;  }
int Player::getFatigueMax()
{ return this -> fatigueMax;  }


int Player::getDamage()
{ return this -> damage; }	

int Player::getGold()
{ return this -> gold;}
/*
int Player::getDamageMax()
{ return this -> damageMax; }
*/


// Mutator Functions
/*
void Player::setName(string name)
{ this -> name = name; }

		
void Player::setLevel(int level)
{ this -> level = level; }

void Player::setExp(int exp)
{ this -> exp = exp; }

void Player::setNextLevelExp(int nextLevelExp)
{ this -> nextLevelExp = nextLevelExp; }

void Player::setStatPoints(int statPoints)
{ this -> statPoints = statPoints; }

void Player::setPerkPoints(int perkPoints)
{ this -> perkPoints = perkPoints;}

		
void Player::setHp(int hp)
{ this -> hp = hp; }

void Player::setMaxHp(int maxHp)
{ this -> maxHp = maxHp; }

void Player::setMp(int mp)
{ this -> mp = mp; }

void Player::setMaxMp(int maxMp)
{ this -> maxMp = maxMp; }

		
void Player::setStrenght(int strenght)
{ this -> strenght = strenght; }

void Player::setDefense(int defense)
{ this -> defense = defense; }

void Player::setIntelligence(int intelligence)
{ this -> intelligence = intelligence; }

void Player::setMagic(int magic)
{ this -> magic = magic; }

void Player::setSpeacialDefense(int speacialDefense)
{ this -> speacialDefense = speacialDefense; }

void Player::setSpeed(int speed)
{ this -> speed = speed; }

		
void Player::setFatigue(int fatigue)
{ this -> fatigue = fatigue; }

void Player::setFatigueMax(int fatigueMax)
{ this -> fatigueMax = fatigueMax; }


void Player::setDamage(int damage)
{ this -> damage = damage; }

void Player::setDamageMax(int damageMax)
{ this -> damageMax = damageMax; }
*/
