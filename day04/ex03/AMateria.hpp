#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP
# include <iostream>

class AMateria {
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &cp);
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);
	
		AMateria &operator=(AMateria const &cp);

	protected:
		std::string type;
};

#endif