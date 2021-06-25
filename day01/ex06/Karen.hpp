#ifndef KAREN_CLASS_H
# define KAREN_CLASS_H
# include <iostream>
# include <string>

enum input_code {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	none
};

class Karen {
	public:
		void karenLevel(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif
