#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const &cp);
		~Cat(void);

		Cat& operator=(Cat const &cp);

		std::string getType(void) const;
		void makeSound(void) const;
	
	private:
		Brain* brain; 
};

#endif
