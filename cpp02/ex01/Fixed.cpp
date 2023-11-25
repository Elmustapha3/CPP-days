#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed():number(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb){
    std::cout << "Int constructor called" << std::endl;
    this->number = nb << this->fracBits;
}

Fixed::Fixed(const float nb){
    std::cout << "float constructor called" << std::endl;
    this->number = nb  * 256;
}

Fixed::Fixed(const Fixed& f){
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed& Fixed::operator=(const Fixed& f){
    std::cout << "Copy assignment operator called" << std::endl;
    this->number = f.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

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
    return static_cast<float>(this->number / 256.0f);
}

std::ostream &operator<<(std::ostream &out, const Fixed&  f)
{
    out << f.toFloat();
    return out;
}