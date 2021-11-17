#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->val = 0;
}

Fixed::~Fixed(void) {

}

Fixed::Fixed(Fixed const& src) {
    *this = src; 
}

Fixed::Fixed(int const nbr) {
    this->val = 0;
    int nb = nbr;
    float t = (1 << 22);
    for (int i = 30; i >= 0; i--)
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
    this->val = 0;
    float nb = nbr;
    float t = (1 << 22);
    for (int i = 30; i >= 0; i--)
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

int Fixed::getRawBits(void) const {
    return this->val;
}

void Fixed::setRawBits(int const raw) {
    this->val = raw;
}

float Fixed::toFloat(void) const {
    float readbits = 0;
    float t = (1 << 22);
    for (int i = 30; i >= 0; i--)
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
    for (int i = 30; i >= 0; i--)
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

Fixed& Fixed::operator=(Fixed const& as) {
    if (this != &as)
        this->val = as.getRawBits();
    return *this;
}

Fixed Fixed::operator+(Fixed const& as) {
    return (Fixed(this->val + as.val));
}

Fixed Fixed::operator-(Fixed const& as) {
    return (Fixed(this->val - as.val));
}

Fixed Fixed::operator*(Fixed const& as) {
	return (Fixed(this->toFloat() * (as.toFloat())));
}

Fixed Fixed::operator/(Fixed const& as) {
    return (Fixed(this->toFloat() / (as.toFloat())));
}

Fixed &Fixed::operator++(void) {
	this->val += 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	this->val += 1;
	return tmp;
}

Fixed &Fixed::operator--(void) {
	this->val -= 1;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->val -= 1;
	return tmp;
}

bool Fixed::operator>(Fixed const &as) {
	return (as.val > this->val);
}

bool Fixed::operator<(Fixed const &as) {
	return (as.val < this->val);
}

bool Fixed::operator>=(Fixed const &as) {
	return (as.val < this->val);
}

bool Fixed::operator<=(Fixed const &as) {
	return (as.val < this->val);
}

bool Fixed::operator==(Fixed const &as) {
	return (as.val < this->val);
}

bool Fixed::operator!=(Fixed const &as) {
	return (as.val < this->val);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (a < b) {
		return a;
	}
	return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
	if (a.val < b.val) {
		return a;
	}
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a > b) {
		return a;
	}
	return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
	if (a.val > b.val) {
		return a;
	}
	return b;
}
