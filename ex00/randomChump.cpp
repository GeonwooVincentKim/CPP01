#include "Zombie.h"

// Creates a zombie on the stack and announces it
void randomChump(std::string name) {
	Zombie zombie(name);
	zombie.announce();
}
