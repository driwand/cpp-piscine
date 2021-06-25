#include "Karen.hpp"

input_code hash_input (std::string const str) {
    if (str == "DEBUG") return DEBUG;
    if (str == "INFO") return INFO;
	if (str == "WARNING") return WARNING;
	if (str == "ERROR") return ERROR;
	return none;
};

void Karen::complain(std::string level) {	
	void (Karen::*dg[4]) () = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	switch (hash_input(level))
	{
		case DEBUG:
			(this->*dg[0])();
			break;
		case INFO:
			(this->*dg[1])();
			break;
		case WARNING:
			(this->*dg[2])();
			break;
		case ERROR:
			(this->*dg[3])();
			break;
		default:
			break;
	}
}

void Karen::debug(void) {
	std::cout << "I love to get extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup burger. "
	"I just love it!\n";
}

void Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. "
	"You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning(void) {
	std::cout << "I think I deserve to have "
	"some extra bacon for free. I’ve been coming "
	"here for years and you just started working here last month.\n";
}

void Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}
