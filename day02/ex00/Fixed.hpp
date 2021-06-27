#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_CPP
# include "iostream"

class Fixed {
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const& src);

        Fixed& operator=(Fixed const &as);
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int val;
        static int const frac = 8;
};

#endif