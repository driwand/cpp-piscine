
#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H
# include <iostream>
# include <string>
# include <stdlib.h>

class Zombie {
	public:
		void announce(void);
		void setName(std::string name);
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
