#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>

class Fixed {
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const& src);
        Fixed(int const nbr);
        Fixed(float const nbr);

        void setRawBits(int const raw);
        int getRawBits(void) const;

        float toFloat(void) const;
        int toInt(void) const;

        Fixed& operator=(Fixed const &as);

        Fixed operator+(Fixed const &as);
        Fixed operator-(Fixed const &as);
        Fixed operator*(Fixed const &as);
        Fixed operator/(Fixed const &as);
        Fixed &operator++(void);
        Fixed operator++(int);

        Fixed &operator--(void);
        Fixed operator--(int);

        bool operator>(Fixed const &as);
        bool operator<(Fixed const &as);
        bool operator>=(Fixed const &as);
        bool operator<=(Fixed const &as);
        bool operator==(Fixed const &as);
        bool operator!=(Fixed const &as);

        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed const &min(Fixed const &a, Fixed const &b);

        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);

    private:
        int val;
        static int const frac = 8;
};

std::ostream& operator<<(std::ostream& o, Fixed const& fixed);

#endif