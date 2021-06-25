
#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H
# include <string>

class Weapon {
	public:
		Weapon(void) {

		};
		Weapon(std::string type);
		std::string const getType(void);
		void setType(std::string type);
	
	private:
		std::string type;
};

#endif