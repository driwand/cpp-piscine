#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const &cp);
		~Dog(void);

		Dog& operator=(Dog const &cp);

		std::string getType(void) const;
		void makeSound(void) const;
};

#endif
