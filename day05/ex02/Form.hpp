#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <exception>
# include <fstream>
# define GRADE_TO_SIGN 10
# define GRADE_TO_EXECUTE 5

class Bureaucrat;
class Form {
	public:
		Form();
		Form(std::string name);
		Form(std::string name, int gradeSign, int gradeExecute);
		Form(Form const &cp);
		~Form();

		Form &operator=(Form const &cp);

		std::string getName() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		bool isSigned() const;

		void beSigned(Bureaucrat bur);

		void execute(Bureaucrat const &executor) const;
		virtual void action() const = 0;

		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw ();
		};

		class GradeExecuteLowException : public std::exception {
			virtual const char* what() const throw ();
		};

		class FormNotSigned : public std::exception {
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
