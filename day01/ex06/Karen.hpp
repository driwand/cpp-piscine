#ifndef KAREN_CLASS_H
# define KAREN_CLASS_H
# include <iostream>
# include <string>

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
