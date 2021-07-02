
#ifndef CRAPPHY_CLASS_H
# define CRAPPHY_CLASS_H
# include <iostream>
# include <string>
# include <cctype>
# include <iomanip>
# include <regex>

enum input_code {
	add,
	search,
	quit,
	none
};

class Crapphy {
	public:
		void printContact() {
			std::string res = "";
			res += "First Name: " + this->firstName + "\n";
			res += "Last Name: " + this->lastName + "\n";
			res += "Nickname: " + this->nickName + "\n";
			res += "Phone Number: " + this->phoneNumber + "\n";
			res += "Darkest Secret: " + this->darkSecret + "\n";
			std::cout << res;
		}

		std::string getFirstName() {
			return this->firstName;
		}

		std::string getLastName() {
			return this->lastName;
		}

		std::string getNickName() {
			return this->nickName;
		}

		void setFirstName(std::string firstName) {
			this->firstName = firstName;
		}

		void setLastName(std::string lastName) {
			this->lastName = lastName;
		}

		void setNickName(std::string nickName) {
			this->nickName = nickName;
		}

		void setPhone(std::string phoneNumber) {
			this->phoneNumber = phoneNumber;
		}

		void setSecret(std::string darkSecret) {
			this->darkSecret = darkSecret;
		}

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkSecret;
};

input_code hash_input (std::string str);
void	search_contacts(Crapphy contacts[], int index);
void	add_contact(Crapphy *contacts, int *num_contacts);
std::string	trim(std::string str);
std::string remove_ws(std::string str);

#endif
