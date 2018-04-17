#ifndef	PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Combat.h"
//#include "Homebase.h"

using namespace std;

class Player
{
	private:
		string name;
		
		int level;
		int exp;
		int nextLevelExp;
		int statPoints;
		int perkPoints;
		
		int hp;
		int maxHp;
		int mp;
		int maxMp;
		
		int strenght;
		int defense;
		int intelligence;
		int magic;
		int speacialDefense;
		int speed;
		
		int fatigue;
		int fatigueMax;

		int damage;
		//int damageMax;
		
		int gold;
		
	public:
		Player();
		~Player();
		
		//Functions
		void initalize(const string name);
		void getPlayerInfo();
		void levelUp();
		void addHp(int hp);
		int reduceDamage(int damage);
		int takeDamage(int damage);
		bool isAlive();
		
		// Accessors
		string getName();
		
		int getLevel();
		int getExp();
		int getNextLevelExp();
		int getStatPoints();
		int getPerkPoints();
		
		int getHp();
		int getMaxHp();
		int getMp();
		int getMaxMp();
		
		int getStrenght();
		int getDefense();
		int getIntelligence();
		int getMagic();
		int getSpeacialDefense();
		int getSpeed();
		
		int getFatigue();
		int getFatigueMax();

		int getDamage();
		//int getDamageMax();
		
		int getGold();
		
		int lostGold();
		
		// Exploration stuff
		
		static int explored;
		static int exploredForest;
		static int exploredLake;
		static int exploredDesert;
		static int exploredCave;
		
		// Objects
		//Combat combat;
		
		// Mutators
		
		/*
		void setName(string);
		
		void setLevel(int);
		void setExp(int);
		void setNextLevelExp(int);
		void setStatPoints(int);
		void setPerkPoints(int);
		
		void setHp(int);
		void setMaxHp(int);
		void setMp(int);
		void setMaxMp(int);
		
		void setStrenght(int);
		void setDefense(int);
		void setIntelligence(int);
		void setMagic(int);
		void setSpeacialDefense(int);
		void setSpeed(int);
		
		void setFatigue(int);
		void setFatigueMax(int);

		void setDamage(int);
		void setDamageMax(int);	
		
		*/

};

#endif
