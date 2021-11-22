#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const &cp);
		virtual ~Dog(void);

		Dog& operator=(Dog const &cp);

		std::string getType(void) const;
		void makeSound(void) const;

	private:
		Brain* brain;
};

#endif
