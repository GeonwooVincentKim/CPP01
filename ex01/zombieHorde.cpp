#include "Zombie.h"
#include <sstream>

// Create a horde of N zombies
Zombie* zombieHorde(int N, std::string name) {
	if (N <= 0)
		return NULL;
	
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; ++i) {
        std::stringstream ss;
        ss << name << "_" << (i + 1);
        horde[i].setName(ss.str());
    }
	return horde;
}
