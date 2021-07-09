
#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include "crapphy.class.hpp"

enum input_code {
	add,
	search,
	quit,
	none
};

class Phonebook {
	public:
		Phonebook(void);
		void add_contact(void);
		void search_contacts(void);
		void print_contacts(void);

	private:
		Crapphy contacts[8];
		int oldest_contact;
		int index;
};

std::string prompt(std::string data);
int isNumber(std::string str);
std::string	trim(std::string str);
std::string remove_ws(std::string str);
std::string truncate(std::string str, int width);
input_code hash_input (std::string str);

#endif