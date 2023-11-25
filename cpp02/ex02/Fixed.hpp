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
        bool operator>(const Fixed& a);
        bool operator>=(const Fixed& a);
        bool operator<(const Fixed& a);
        bool operator<=(const Fixed& a);
        bool operator==(const Fixed& a);
        bool operator!=(const Fixed& a);
        Fixed& operator+(const Fixed& a);
        Fixed& operator-(const Fixed& a);
        Fixed& operator*(const Fixed& a);
        Fixed& operator/(const Fixed& a);
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        static  Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static  Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        
};

std::ostream &operator<<(std::ostream &out, const Fixed&  f);

#endif