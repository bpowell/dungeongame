#include "mob.h"

Mob::Mob(std::string name, int hp, int attack, int defense, int level) :
	Entity(name), hp(hp), attack(attack), defense(defense), level(level), exp(0) {}

int Mob::getHp() {
	return hp;
}

int Mob::getAttack() {
	return attack;
}

int Mob::getDefense() {
	return defense;
}

int Mob::getLevel() {
	return level;
}

int Mob::getExp() {
	return exp;
}

