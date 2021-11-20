#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const &cp);
		~Dog(void);

		Dog& operator=(Dog const &cp);
};

#endif
