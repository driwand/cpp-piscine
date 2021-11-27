#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(std::string name);
		Character(Character const &cp);
		~Character();

		std::string const &getName() const;
		Character &operator=(Character const &cp);
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	
	private:
		std::string name;
		AMateria *matria[4];
};

#endif
