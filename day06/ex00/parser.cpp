#include "parser.hpp"

Parser::Parser() {

}

Parser::Parser(std::string arg) {
	this->_arg = arg;
}

Parser::Parser(Parser const &cp) {
	*this = cp;
}

Parser::~Parser() {

}

Parser &Parser::operator=(Parser const &cp) {
	if (this == &cp) return *this;
	this->_arg = cp._arg;
	return *this;
}

void Parser::convert() {
	parseArg();
	_resVal = std::stod(_arg);
	displayChar();
	displayInt();
	displayFloat();
	displayDouble();
}

void Parser::displayInt() {
	if (_resVal > INT32_MAX || _resVal < INT32_MIN)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(this->_resVal) << std::endl;
}

void Parser::displayChar() {
	char c = static_cast<char>(this->_resVal);
	if (isprint(c))
		std::cout << "char: '" << static_cast<char>(this->_resVal) << "'" << std::endl;
	else
		std::cout << "char: Non displayable\n";
}

void Parser::displayFloat() {
	float res = static_cast<float>(this->_resVal);
	std::cout << "float: " << res;
	if (res - static_cast<int>(_resVal) == 0.0)
		std::cout << ".0f\n";
	else
		std::cout << "f\n";
}

void Parser::displayDouble() {
	std::cout.precision(15);
	std::cout << "double: " << _resVal;
	if (_resVal - static_cast<int>(_resVal) == 0.0)
		std::cout << ".0\n";
	else
		std::cout << std::endl;
}

void Parser::parseArg() {
	int checkFloat = 0;
	int checkPoint = 0;

	for (int i = 0; i < (int)_arg.size(); i++) {
		char c = _arg[i];
		if (i == 0 && !validSign(c) && !isdigit(c)) throw InvalidSign();
		if (i != 0 && validSign(c)) throw InvalidSignPosition();
		if (c == 'f') checkFloat += validFloat(i, _arg.size(), checkFloat);
		if (c == '.') {
			if (i == 0 || i + 1 == (int)_arg.size()) throw InvalidPointPosition();
			checkPoint += validPoint(_arg[i - 1], _arg[i + 1], checkPoint);
		}
		if (!validChar(c)) throw InvalidDigitPosition();
	}
}

bool Parser::validSign(char c) {
	return (c == '+' || c == '-');
}

int Parser::validFloat(int index, int size, int checkFloat) {
	if (!index || size - 1 != index || checkFloat == 1) throw Parser::InvalidFloatPosition();
	return 1;
}

int Parser::validPoint(char prev, char next, int checkPoint) {
	if (!isdigit(prev) || !isdigit(next) || checkPoint == 1) throw Parser::InvalidPointPosition();
	return 1;
}

int  Parser::validChar(char c) {
	char valid[] = { 'f', '.', '+', '-' };
	for (int i = 0; i < 4; i++) {
		if (c == valid[i]) return 1;
	}
	return (isdigit(c));
}

const char* Parser::InvalidSign::what() const throw() {
	return "Invalid argument sign";
}

const char* Parser::InvalidSignPosition::what() const throw() {
	return "Invalid sign position";
}

const char* Parser::InvalidPointPosition::what() const throw() {
	return "Invalid point position";
}

const char* Parser::InvalidFloatPosition::what() const throw() {
	return "Invalid float position";
}

const char* Parser::InvalidDigitPosition::what() const throw() {
	return "Invalid digit(s)";
}
