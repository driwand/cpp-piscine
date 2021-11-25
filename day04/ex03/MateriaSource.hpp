#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP
# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	public:
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);

	private:
		AMateria *materias[4];
};

#endif
