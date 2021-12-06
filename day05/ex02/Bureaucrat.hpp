#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP
# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;
class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string );
		Bureaucrat(Bureaucrat const &cp);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &cp);

		std::string getName() const;
		void setGrade(int grade);

		int getGrade() const;
		void increaseGrade();
		void decreaseGrade();

		void signForm(Form &form) const;
		void executeForm(Form const &form);

		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw ();
		};

	private:
		const std::string _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bur);

#endif
