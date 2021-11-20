#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const &cp);
		~Animal(void);

		Animal& operator=(Animal const &cp);

	protected:
		std::string type;
};

#endif
