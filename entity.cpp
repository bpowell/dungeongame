#include "entity.h"

Entity::Entity(std::string name) : name(name) {}

std::string Entity::getName() {
	return name;
}
