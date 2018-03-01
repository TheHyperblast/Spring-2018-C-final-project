#include "Player.h"

Player::Player()
{
	this -> name = "";
		
	this -> level = 0;
	this -> exp = 0;
	this -> nextLevelExp = 0;
	this -> statPoints = 0;
		
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

	this -> damage = 0;
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

	this -> damage = 10;
}





// Accessors Function
string Player::getName()
{ return name; }
		
int Player::getLevel()
{ return level; }
int Player::getExp()
{ return exp; }
int Player::getNextLevelExp()
{ return nextLevelExp; }
int Player::getStatPoints()
{ return statPoints; }
		
int Player::getHp()
{ return hp; }
int Player::getMaxHp()
{ return maxHp; }
int Player::getMp()
{ return mp; }
int Player::getMaxMp()
{ return maxMp; }
		
int Player::getStrenght()
{ return strenght; }
int Player::getDefense()
{ return defense; }
int Player::getIntelligence()
{ return intelligence; }
int Player::getMagic()
{ return magic; }
int Player::getSpeacialDefense()
{ return speacialDefense; }
int Player::getSpeed()
{ return speed; }
		
int Player::getFatigue()
{ return fatigue;  }

int Player::getDamage()
{ return damage; }	


// Mutator Functions
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

void Player::setDamage(int damage)
{ this -> damage = damage; }
