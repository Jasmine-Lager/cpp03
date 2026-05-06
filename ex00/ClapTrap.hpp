
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	// private attributes for the bot's stats
	std::string _name;
	unsigned int _hitPoints; // starts at 10
	unsigned int _energyPoints; // starts at 10
	unsigned int _attackDamage; // starts at 0

public:
	// orthodox canonical form needs these four:
	ClapTrap(); // default constructor
	ClapTrap(std::string name); // string constructor
	ClapTrap(const ClapTrap &other); // copy constructor
	ClapTrap &operator=(const ClapTrap &other); // copy assignment operator
	~ClapTrap(); // destructor

	// robot actions
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif