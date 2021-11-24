#include "Ice.hpp"

Ice::Ice(void) {

}

Ice::Ice(std::string const &type) {
	this->type = type;
}

Ice::Ice(Ice const &cp) {
	*this = cp;
}

Ice::~Ice() {

}

std::string const &Ice::getType() const {
	return this->type;
}

Ice &Ice::operator=(Ice const &cp) {
	if (this != &cp) {
		this->type = cp.type;
	}
	return *this;
}
