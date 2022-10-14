/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:02:39 by rliu              #+#    #+#             */
/*   Updated: 2022/10/14 17:08:09 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void):_nbFixedPoint(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copie){
    std::cout << "Copy constructor called" << std::endl;
    this->_nbFixedPoint = copie.getRawBits();
}

Fixed::Fixed(const int i):_nbFixedPoint(i << Fixed::_nbBitsFrac){
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f): _nbFixedPoint(roundf(f * ((float)(1<< Fixed::_nbBitsFrac)))){
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void){
     std::cout << "Destructor called" << std::endl;

}

float Fixed::toFloat(void) const{
    return ((float)this->_nbFixedPoint/(1 << _nbBitsFrac));
}

int Fixed::toInt(void) const{
    return (this->_nbFixedPoint >> Fixed::_nbBitsFrac);
}

Fixed Fixed::operator= (Fixed c){
    std::cout << "Copy assignment operator called "
    << std::endl;
    if (this != &c)
        this->_nbFixedPoint = c._nbFixedPoint;
    return (*this);
}

std::ostream &operator<< (std::ostream &out, Fixed const &nb ){
    out << nb.toFloat();
    return (out);
}

int Fixed::getRawBits(void) const{
    return(this->_nbFixedPoint);
}

void Fixed::setRawBits(int const raw){
    this->_nbFixedPoint = raw;
}