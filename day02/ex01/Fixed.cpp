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
    this->val = 0;
    int nb = nbr;
    float t = (1 << 22);
    for (int i = 31; i >= 0; i--)
    {
        if (nb >= t)
        {
            this->val += (1 << i);
            nb -= t;
        }
        t /= 2;
    }
}

Fixed::Fixed(float const nbr) {
    std::cout << "Float constructor called\n";
    this->val = 0;
    float nb = nbr;
    float t = (1 << 22);
    for (int i = 31; i >= 0; i--)
    {
        if (nb >= t)
        {
            this->val += (1 << i);
            nb -= t;
        }
        t /= 2;
    }
    if (nb > 0) this->val++;
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
    float readbits = 0;
    float t = (1 << 22);
    for (int i = 31; i >= 0; i--)
    {
        if (val & (1 << i))
            readbits += t;
        t /= 2;
    }
    return readbits;
}

int Fixed::toInt(void) const {
    float readbits = 0;
    float t = (1 << 22);
    for (int i = 31; i >= 0; i--)
    {
        if (val & (1 << i))
            readbits += t;
        t /= 2;
    }
    return readbits;
}

std::ostream& operator<<(std::ostream& o, Fixed const& fixed) {
    return o << fixed.toFloat();
}
