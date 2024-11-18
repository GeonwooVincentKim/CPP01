#include "Zombie.h"

// Function prototypes -> Class Objects
Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main() {
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();

	// like a free in c language
	delete heapZombie;
	randomChump("StackZombie");

	return 0;
}
