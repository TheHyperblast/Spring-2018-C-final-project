#ifndef	PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player
{
	private:
		string name;
		
		int level;
		int exp;
		int nextLevelExp;
		int statPoints;
		
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

		int damage;
		
		
	public:
		Player();
		~Player();
		
		//Functions
		void initalize(const string name);
		
		// Accessors
		string getName();
		
		int getLevel();
		int getExp();
		int getNextLevelExp();
		int getStatPoints();
		
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

		int getDamage();
		
		
		// Mutators

		void setName(string);
		
		void setLevel(int);
		void setExp(int);
		void setNextLevelExp(int);
		void setStatPoints(int);
		
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

		void setDamage(int);	
};

#endif
