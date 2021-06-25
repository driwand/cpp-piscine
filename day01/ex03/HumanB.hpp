#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack(void);
	private:
		std::string name;
		Weapon* weapon;
};

#endif