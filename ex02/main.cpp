
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// basically the same as before
int main()
{
	std::cout << "--- ClapTrap tests ---" << std::endl;
	ClapTrap c("Clippy");
	c.attack("a tree");
	c.takeDamage(5);
	c.beRepaired(3);

	std::cout << "\n--- ScavTrap tests ---" << std::endl;
	ScavTrap s("Scavy");
	s.attack("Clippy");
	s.takeDamage(50);
	s.beRepaired(20);
	s.guardGate();

	std::cout << "\n--- FragTrap tests ---" << std::endl;
	FragTrap f("Froggy");
	f.attack("Scavy");
	f.takeDamage(40);
	f.beRepaired(10);
	f.highFivesGuys();

	std::cout << "\n--- Destruction order below ---" << std::endl;
	return 0;
}