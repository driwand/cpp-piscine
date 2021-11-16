#include "Karen.hpp"

void Karen::karenLevel(std::string level) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*dg[4]) () = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	int i;
	for (i = 0; i < 4; i++)
    {
        if (level == levels[i]) break;
    }

	switch (i)
	{
		case 0:
			(this->*dg[0])();
		case 1:
			(this->*dg[1])();
		case 2:
			(this->*dg[2])();
		case 3:
			(this->*dg[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}

void Karen::debug(void) {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love to get extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup burger. "
	"I just love it!\n\n";
}

void Karen::info(void) {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon cost more money. "
	"You don’t put enough! If you did I would not have to ask for it!\n\n";
}

void Karen::warning(void) {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have "
	"some extra bacon for free. I’ve been coming "
	"here for years and you just started working here last month.\n\n";
}

void Karen::error(void) {
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}
