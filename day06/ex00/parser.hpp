#ifndef PARSER_CLASS_HPP
# define PARSER_CLASS_HPP
# include <iostream>
# include <exception>
# include <limits>
# include <iomanip>

class Parser {
	public:
		Parser();
		Parser(std::string arg);
		Parser(Parser const &cp);
		~Parser();
		Parser &operator=(Parser const &cp);

		void convert();

		class InvalidSign : public std::exception {
			virtual const char* what() const throw();
		};

		class InvalidSignPosition : public std::exception {
			virtual const char* what() const throw();
		};

		class InvalidPointPosition : public std::exception {
			virtual const char* what() const throw();
		};

		class InvalidFloatPosition : public std::exception {
			virtual const char* what() const throw();
		};

		class InvalidDigitPosition : public std::exception {
			virtual const char* what() const throw();
		};

	private:
		double		_resVal;
		bool		_isNan;
		std::string	_arg;

		void	parseArg();

		void	displayInt();
		void	displayChar();
		void	displayDouble();
		void	displayFloat();

		bool	validNan(std::string str);
		bool	validSign(char c);
		int		validFloat(int index, int size, int checkFloat);
		int		validPoint(char prev, char next, int checkPoint);
		int		validChar(char c);
};

#endif
