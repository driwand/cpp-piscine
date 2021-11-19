#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H
# include <istream>
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &cp);
		~FragTrap(void);

		FragTrap &operator=(FragTrap const &cp);

		void attack(std::string const &target);
		void highFivesGuys(void);
};

#endif
