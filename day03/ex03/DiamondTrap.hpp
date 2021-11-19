#ifndef DIAMONDTRAP_CLASS_H
# define DIAMONDTRAP_CLASS_H
# include <istream>
# include <string>
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &cp);
		~DiamondTrap(void);

		DiamondTrap& operator=(DiamondTrap const &cp);
		void attack(std::string const &target);
		void whoAmI(void);
	
	private:
		std::string name;
};

#endif
