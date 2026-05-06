
#include "ClapTrap.hpp"

// default constructor - set default stats
ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap DEFAULT constructor called for " << _name << std::endl;
}

// naming the bot through the constructor
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap NAME constructor called for " << _name << std::endl;
}

// copy constructor - making a clone
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap COPY constructor called" << std::endl;
	*this = other;
}

// assignment operator - syncing data between bots
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

// destructor - cleaning up the bot
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

// attacking costs 1 energy point
void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no more energy, it is too tired to attack..." << std::endl;
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead. It can not attack.." << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target
			  << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

// losing health doesn't cost energy, just pain
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		// making sure health doesn't go below zero (unsigned int issues)
		if (amount >= _hitPoints)
			_hitPoints = 0;
		else
			_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " took " << amount << " damage! hp now: " << _hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is already broken!" << std::endl;
}

// repairing costs 1 energy point and restores health
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair itself right now." << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " repairs " << amount
			  << " hp! total hp: " << _hitPoints << std::endl;
}