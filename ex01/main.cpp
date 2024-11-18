#include "Zombie.h"

// Function prototype -> Class Objects
Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 5;
    std::string baseName = "Zombie";

    // Create a horde of zombies
    Zombie* horde = zombieHorde(N, baseName);

    if (horde) {
        for (int i = 0; i < N; i++)
            horde[i].announce();
        delete[] horde;
    } else {
        std::cerr << "Invalid number of zombies!" << std::endl;
    }

    return 0;
}