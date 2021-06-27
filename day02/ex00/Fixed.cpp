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

Fixed& Fixed::operator=(Fixed const& as) {
    std::cout << "Assignation operator called\n";
    if (this != &as)
        this->val = as.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called\n";
    return this->val;
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called\n";
    this->val = raw;
}
