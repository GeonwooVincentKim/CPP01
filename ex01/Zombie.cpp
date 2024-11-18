#include "Zombie.h"

// Default constructor
Zombie::Zombie() : _name("") {}

// Parameterized constructor
Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie() {
	std::cout << _name << " has been destroyed." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}

void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
