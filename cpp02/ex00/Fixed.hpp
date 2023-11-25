#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    int number;
    static const int fracBits;
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed& operator=(const Fixed& f);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif