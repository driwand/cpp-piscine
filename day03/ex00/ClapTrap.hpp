#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H
# include <istream>
# include <string>
# include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &cp);
		~ClapTrap(void);

		ClapTrap& operator=(ClapTrap const &cp);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
};

#endif