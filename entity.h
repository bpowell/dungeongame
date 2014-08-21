#ifndef ENTITY_H_
#define ENTITY_H_

#include <string>

class Entity {
	protected:
		std::string name;
		int id;

	public:
		Entity(std::string name);
		std::string getName();
};

#endif
