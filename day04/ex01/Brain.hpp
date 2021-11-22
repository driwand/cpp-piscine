#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP
# include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(Brain const &cp);
		virtual ~Brain(void);

		std::string getIdea(void);
		void setIdea(std::string idea);
		
		Brain& operator=(Brain const &cp);

	private:
		std::string ideas[100];
};

#endif
