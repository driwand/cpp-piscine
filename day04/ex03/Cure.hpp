#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(Cure const &cp);
		~Cure();

		std::string const & getType() const;

		Cure &operator=(Cure const &cp);
		AMateria * clone(void) const;
		void use(ICharacter& target);
};

#endif
