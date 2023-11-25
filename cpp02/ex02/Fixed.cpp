#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed():number(0){}

Fixed::Fixed(const int nb){
    this->number = nb << this->fracBits;
}

Fixed::Fixed(const float nb){
    this->number = roundf(nb  * 256);
}

Fixed::Fixed(const Fixed& f){
    *this = f;
}

Fixed& Fixed::operator=(const Fixed& f){
    this->number = f.getRawBits();
    return *this;
}

Fixed::~Fixed(){}

void Fixed::setRawBits(int const raw){
    this->number = raw;
}

int Fixed::getRawBits() const{
    return this->number;
}

int Fixed::toInt() const{
    return this->number >> this->fracBits;
}

float Fixed::toFloat() const{
    return ((float)this->number / 256);
}

std::ostream &operator<<(std::ostream &out, const Fixed&  f)
{
    out << f.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed& a){
    if(this->getRawBits() > a.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator>=(const Fixed& a){
    if(this->getRawBits() >= a.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator<(const Fixed& a){
    if(this->getRawBits() < a.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator<=(const Fixed& a){
    if(this->getRawBits() <= a.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator==(const Fixed& a){
    if(this->getRawBits() == a.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator!=(const Fixed& a){
    if(this->getRawBits() != a.getRawBits())
        return true;
    else
        return false;
}

Fixed& Fixed::operator+(const Fixed& a)
{
    this->number += a.number;
    return *this; 
}

Fixed& Fixed::operator-(const Fixed& a)
{
    this->number -= a.number;
    return *this; 
}

Fixed& Fixed::operator*(const Fixed& a)
{
    this->number *= a.number / 256;
    return *this; 
}

Fixed& Fixed::operator/(const Fixed& a)
{
    if(a.number == 0)
    {
        std::cout << "can't devide by 0" << std::endl;
        exit(0);
    }
    else
        this->number /= a.number * 256;
    return *this; 
}

Fixed& Fixed::operator++()
{
    this->number++;
    return *this; 
}

Fixed& Fixed::operator--()
{
    this->number--;
    return *this; 
}

Fixed Fixed::operator++(int)
{ 
    Fixed a;
    a.number = this->number;
    this->number++;
    return a; 
}

Fixed Fixed::operator--(int)
{ 
    Fixed a;
    a.number = this->number;
    this->number--;
    return a; 
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if(a > b)
        return b;
    return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if(a > b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if(a.number > b.number)
        return b;
    return a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if(a.number > b.number)
        return a;
    return b;
} 