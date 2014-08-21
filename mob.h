#ifndef MOB_H_
#define MOB_H_

#include "entity.h"

class Mob : public Entity {
	protected:
		int hp;
		int attack;
		int defense;
		int level;
		int exp;

	public:
		Mob(std::string name, int hp, int attack, int defense, int level);
		int getHp();
		int getAttack();
		int getDefense();
		int getLevel();
		int getExp();
};

#endif
