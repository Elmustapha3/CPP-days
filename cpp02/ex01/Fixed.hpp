#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    int number;
    static const int fracBits;
    public:
        Fixed();
        Fixed(const int nb);
        Fixed(const float fpNumber);
        Fixed(const Fixed &f);
        Fixed& operator=(const Fixed& f);
        ~Fixed();
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed&  f);

#endif