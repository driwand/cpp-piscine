#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(Ice const &cp);
		~Ice();

		std::string const & getType() const;

		Ice &operator=(Ice const &cp);
		AMateria * clone(void) const;
		void use(ICharacter& target);
};

#endif
