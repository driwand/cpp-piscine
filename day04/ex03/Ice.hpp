#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP
# include <iostream>
# include "AMateria.hpp"

class Ice : virtual public AMateria {
	public:
		Ice(void);
		Ice(std::string const &type);
		Ice(Ice const &cp);
		~Ice();

		std::string const & getType() const;

		Ice &operator=(Ice const &cp);
};

#endif
