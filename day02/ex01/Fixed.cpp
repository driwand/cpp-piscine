#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called\n";
    this->val = 0;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called\n";
}

Fixed::Fixed(Fixed const& src) {
    std::cout << "Copy constructor called\n";
    *this = src; 
}

Fixed::Fixed(int const nbr) {
    std::cout << "Int constructor called\n";
    this->val = nbr << this->frac;
}

Fixed::Fixed(float const nbr) {
    std::cout << "Float constructor called\n";
    this->val = roundf(nbr * (1 << this->frac));
}

Fixed& Fixed::operator=(Fixed const& as) {
    std::cout << "Assignation operator called\n";
    if (this != &as)
        this->val = as.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called\n";
    return this->val;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called\n";
    this->val = raw;
}

float Fixed::toFloat(void) const {
    // to do
}

int Fixed::toInt(void) const {
    // to do
}

std::ostream& operator<<(std::ostream& o, Fixed const& fixed) {
    // to do
    // o << fixed.toFloat()
    return o;
}
