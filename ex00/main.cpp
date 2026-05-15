
#include "ClapTrap.hpp"

int main()
{
	int i = 0;

	ClapTrap robot_one("Clippy");
	ClapTrap robot_two("Trappy");

	// simple back and forth
	robot_one.attack("Trappy");
	robot_two.takeDamage(0); // initial attack damage is 0

	// repairing costs 1 energy point out of its  10
	robot_two.beRepaired(3);

	while (i < 10)
	{
		// Clippy only has 10 energy points, 11th action should fail
		robot_one.attack("a tree");
		i++;
	}

	// this repair attempt should fail because energy is 0
	robot_one.beRepaired(10);

	robot_two.takeDamage(20); // health was 15, now 0
	robot_two.attack("Clippy"); // shouldn't work if hp is 0

	return 0;
}