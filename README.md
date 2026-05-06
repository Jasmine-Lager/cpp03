# CPP03 ...🤖 vs 🐸
*This project has been created as part of the 42 curriculum by jlager*

## Description
Again, not doing anything I dont have to, so no ex03/

This module is about inheritance in C++ — how classes can extend other classes,
share attributes and methods, and chain constructors/destructors properly.

**ex00/ Aaaaand... OPEN!** - the ClapTrap base class with basic combat stats
(hp, energy, attack damage) and three actions: attack, takeDamage, and beRepaired

**ex01/ Serena, my love!** - ScavTrap inherits from ClapTrap with boosted stats
(hp 100, energy 50, attack 20), its own attack message, and a guardGate() ability

**ex02/ Repetitive work** - FragTrap also inherits from ClapTrap, similar to
ScavTrap but with different stats (hp 100, energy 100, attack 30) and a
highFivesGuys() ability

## Instructions
...as usual: 
**Available commands for each excercise:**
- `make` - Compile the project
- `make clean` - Remove object files
- `make fclean` - Remove objects and executable
- `make re` - Recompile everything if there were any changes to the code (especially in the header file *.hpp or Makefile)

### Execution
```bash
./[executable-name]
```

## Resources
- idk, kanda just Googling and asking Claude how it works, but its not that hard so..

### AI Usage
- Concept clarification: I had Claude explain inheritance, constructor chaining, and the protected access specifier.