#include "Enemy.h"

/*Enemy::Enemy()
{
	this -> level = level;
	this -> hpMax = hpMax;
	this -> hp = hp;
	this -> damageMin = damageMin;
	this -> damageMax = damageMax;
	this -> defense = defense;
	//this -> accuracy = accuracy;
	this -> dropChance = dropChance;
	
}*/

// copy and paste and fill it with the other enemy stats below
/*
{
	this -> eName = "";
	this -> eDescription = "";
	this -> eLevel = ;
	this -> eHP = ;
	
	
	this -> eStr = ;
	this -> eTou = ;
	this -> eSpeed = ;
	this -> eIntel = ;
	
	this -> eWeaponAttName = "";
	this -> eWeaponAtt = ;
	this -> eWeaponVerb = "";
	
	this -> eGold = ;

}

*/

Enemy::Enemy(int level)
{
	this -> level = level;
	this -> hpMax = hpMax;
	this -> hp = this -> hpMax;
	//this -> damageMin = damageMin;
	//this -> damageMax = damageMax;
	this -> defense = defense;
	//this -> accuracy = accuracy;
	this -> dropChance = dropChance;
	
}

Enemy::~Enemy()
{
	
}

void const Enemy::getEnemyInfo()
{ 	
	cout << "Name: " 		 << (this -> eName) 		<< "\n"; 
	cout << "Description: "  << (this -> eDescription) 	<< "\n"; 
	cout << "Level: " 		 << (this -> eLevel) 		<< "\n";
	cout << "HP: " 			 << (this -> eStr) 			<< "\n";
	cout << "Strength: " 	 << (this -> eStr) 			<< "\n";
	cout << "Toughness: " 	 << (this -> eTou) 			<< "\n";
	cout << "Speed: " 		 << (this -> eSpeed) 		<< "\n";
	cout << "Intelligence: " << (this -> eIntel) 		<< "\n";
	
	
}

// Different Enemys

/*
Enemy* Goblin = new Enemy();
Enemy* Imp = new Enemy();
Enemy* Harpy = new Enemy();
Enemy* Faerie = new Enemy();
Enemy* Minotaur = new Enemy();
Enemy* Dragon = new Enemy();
Enemy* Drider = new Enemy();
*/

//Acessors
bool Enemy::isAlive()
{ return this -> eHP > 0;}
		
int Enemy::getExp()
{ return this -> exp;}
		
int Enemy::getLevel()
{ return this -> level;}
int Enemy::getHpMax()
{ return this -> hpMax;}
int Enemy::getHp()
{ return this -> hp;}
/*
int Enemy::getDamageMin()
{ return this -> damageMin;}
int Enemy::getDamageMax()
{ return this -> damageMax;}
/*
int Enemy::getAccuracy()
{ return this -> accuracy;}
*/
int Enemy::getDropChance()
{ return this -> dropChance;}


// Enemy Values

// Functions

int Enemy::eMaxHp()
{
	
}

int Enemy::eHpRatio()
{
	
}

void Enemy::addHp(int hp)
{
	this -> hp += hp;
	if(this -> hp < 0)
	{
		this -> hp = 0;
	}
	else if(this -> hp > this -> hpMax)
	{
		this -> hp = this -> hpMax;
	}
}

int Enemy::eBaseDamage()
{
	return eStr + eWeaponAtt;
}

int Enemy::eCalcDamage()
{
	return player.reduceDamage(eBaseDamage());
}


 //Both are declared
int Enemy::eOneAttack()
{
	int damage = eCalcDamage();
	if(damage > 0)
	{
		damage = player.takeDamage(damage);
	}
	
	return damage;
}


void Enemy::eWon(bool hpVictory)
{
	if(hpVictory)
	{
		player.addHp(1);
		cout << "This fight was to much for you to handle, and you fall unconscious. " << endl;
	}
	int stealGold = (rand() % 10) + 1; 
	if(stealGold > player.getGold())
	{
		stealGold = player.getGold();
	}
}
