#include "parser.hpp"

Parser::Parser() : _isNan(false), _isChar(false) { }

Parser::Parser(std::string arg) : _isNan(false), _isChar(false), _arg(arg) { }

Parser::Parser(Parser const &cp) {
	*this = cp;
}

Parser::~Parser() { }

Parser &Parser::operator=(Parser const &cp) {
	if (this == &cp) return *this;
	this->_arg = cp._arg;
	this->_resVal = cp._resVal;
	this->_isNan = cp._isNan;
	this->_isChar = cp._isChar;
	return *this;
}

void Parser::convert() {
	parseArg();
	if (!_isChar) _resVal = std::stod(_arg);
	else _resVal = static_cast<double>(_arg[0]);
	displayChar();
	displayInt();
	displayFloat();
	displayDouble();
}

void Parser::displayInt() {
	if (_resVal > std::numeric_limits<int>::max() || _resVal < std::numeric_limits<int>::min() || this->_isNan)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(this->_resVal) << std::endl;
}

void Parser::displayChar() {
	char c = this->_resVal;
	if (!isprint(c) || this->_isNan) 
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(this->_resVal) << "'" << std::endl;
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
	std::cout << "double: " << static_cast<double>(_resVal);
	if (_resVal - static_cast<int>(_resVal) == 0.0)
		std::cout << ".0\n";
	else
		std::cout << std::endl;
}

bool Parser::validNan(std::string str) {
	return (str == "nan" || str == "nanf" ||
		str == "-inf" || str == "+inf" || str == "inf" ||
		str == "-inff" || str == "+inff" || str == "inff");
}

void Parser::parseArg() {
	int checkFloat = 0;
	int checkPoint = 0;

	if (validNan(this->_arg)) {
		this->_isNan = true;
		return ;
	}
	if (this->_arg.size() == 1 && isalpha(this->_arg[0])) {
		this->_isChar = true;
		return ;
	}
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
