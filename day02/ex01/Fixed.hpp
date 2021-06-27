#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_CPP
# include <iostream>
# include <cmath>

class Fixed {
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const& src);
        Fixed(int const nbr);
        Fixed(float const nbr);

        Fixed& operator=(Fixed const &as);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

    private:
        int val;
        static int const frac = 8;
};

std::ostream& operator<<(std::ostream& o, Fixed const& fixed);

#endif