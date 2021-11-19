#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H
# include <istream>
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &cp);
		~ScavTrap(void);

		ScavTrap& operator=(ScavTrap const &cp);
		void guardGate(void);
		void attack(std::string const & target);
};

#endif
