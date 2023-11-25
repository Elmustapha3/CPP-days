#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed():number(0){
    std::cout << "Default constructor called" << std::endl;
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
    std::cout << "setRawBits member function called" << std::endl;
    this->number = raw;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->number;
}
