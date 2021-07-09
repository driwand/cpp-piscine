#include "phonebook.hpp"

std::string Crapphy::getFirstName() {
	return this->firstName;
}

std::string Crapphy::getLastName() {
	return this->lastName;
}

std::string Crapphy::getNickName() {
	return this->nickName;
}

void Crapphy::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void Crapphy::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void Crapphy::setNickName(std::string nickName) {
	this->nickName = nickName;
}

void Crapphy::setPhone(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Crapphy::setSecret(std::string darkSecret) {
	this->darkSecret = darkSecret;
}

void Crapphy::printContact() {
	std::string res = "";
	res += "First Name: " + this->firstName + "\n";
	res += "Last Name: " + this->lastName + "\n";
	res += "Nickname: " + this->nickName + "\n";
	res += "Phone Number: " + this->phoneNumber + "\n";
	res += "Darkest Secret: " + this->darkSecret + "\n";
	std::cout << res;
}

