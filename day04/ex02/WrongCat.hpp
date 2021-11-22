#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const &cp);
		~WrongCat(void);

		WrongCat& operator=(WrongCat const &cp);

		std::string getType(void) const;
		void makeSound(void) const;
};

#endif
