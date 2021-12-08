#ifndef ROBOTO_CLASS_HPP
# define ROBOTO_CLASS_HPP
# include <iostream>
# include "Form.hpp"
# define GRADE_TO_SIGN_ROBOT 72
# define GRADE_TO_EXECUTE_ROBOT 45

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &cp);
		~RobotomyRequestForm();

		void action() const;

		RobotomyRequestForm &operator=(RobotomyRequestForm const &cp);
	private:
		std::string target;
};

#endif
