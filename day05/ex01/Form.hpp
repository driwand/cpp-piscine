#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <exception>
# define GRADE_TO_SIGN 10
# define GRADE_TO_EXECUTE 5

class Bureaucrat;
class Form {
	public:
		Form();
		Form(std::string name);
		Form(std::string name, int gradeSign, int gradeExec);
		Form(Form const &cp);
		~Form();

		Form &operator=(Form const &cp);

		std::string getName() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		bool isSigned() const;

		void beSigned(Bureaucrat bur);

		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw ();
		};

	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _executeGrade;
};

std::ostream &operator<<(std::ostream &o, Form const &bur);

#endif
