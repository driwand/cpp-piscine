
#ifndef CRAPPHY_CLASS_H
# define CRAPPHY_CLASS_H
# include <iostream>
# include <string>
# include <cctype>
# include <iomanip>
# include <regex>

class Crapphy {
	public:

		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();

		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickName(std::string nickName);
		void setPhone(std::string phoneNumber);
		void setSecret(std::string darkSecret);
		
		void printContact(void);

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkSecret;
};

#endif
