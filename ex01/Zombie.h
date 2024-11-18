#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();	// Default constructor
	Zombie(std::string name); 	// Parameterized constructor
	~Zombie(); // Destructor

	void setName(std::string name);
	void announce(void);
};

#endif
