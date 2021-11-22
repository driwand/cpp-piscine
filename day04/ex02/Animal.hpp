#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(Animal const &cp);
		virtual ~Animal(void);

		Animal& operator=(Animal const &cp);
		virtual void makeSound(void) const = 0;
		virtual std::string getType(void) const;

	protected:
		std::string type;
};

#endif
