
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
			res += "Login: " + this->login + "\n";
			res += "Postal Adress: " + this->postalAdress + "\n";
			res += "Email Adress: " + this->emailAdress + "\n";
			res += "Phone Number: " + this->phoneNumber + "\n";
			res += "Favorite Meal: " + this->favMeal + "\n";
			res += "Underwear Color: " + this->underwearColor + "\n";
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
	
		void setLogin(std::string login) {
			this->login = login;
		}

		void setEmail(std::string emailAdress) {
			this->emailAdress = emailAdress;
		}

		void setAdress(std::string postalAdress) {
			this->postalAdress = postalAdress;
		}

		void setPhone(std::string phoneNumber) {
			this->phoneNumber = phoneNumber;
		}

		void setBithday(std::string birthDay) {
			this->birthDay = birthDay;
		}

		void setMeal(std::string favMeal) {
			this->favMeal = favMeal;
		}

		void setUnderwear(std::string underwearColor) {
			this->underwearColor = underwearColor;
		}

		void setSecret(std::string darkSecret) {
			this->darkSecret = darkSecret;
		}

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string login;
		std::string emailAdress;
		std::string postalAdress;
		std::string phoneNumber;
		std::string birthDay;
		std::string favMeal;
		std::string underwearColor;
		std::string darkSecret;
};

input_code hash_input (std::string str);
void	search_contacts(Crapphy contacts[], int index);
void	add_contact(Crapphy *contacts, int *num_contacts);
std::string	trim(std::string str);
std::string remove_ws(std::string str);

#endif
