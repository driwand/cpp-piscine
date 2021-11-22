#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const &cp);
		virtual ~Cat(void);

		Cat& operator=(Cat const &cp);

		std::string getType(void) const;
		void makeSound(void) const;

		void printIdea(void);
		void setIdea(std::string idea);
	
	private:
		Brain* brain; 
};

#endif
