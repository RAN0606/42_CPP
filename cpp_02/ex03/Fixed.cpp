/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:02:39 by rliu              #+#    #+#             */
/*   Updated: 2022/10/14 21:39:13 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/********public*****/
Fixed::Fixed(void):_nbFixedPoint(0){
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copie){
    //std::cout << "Copy constructor called" << std::endl;
    this->_nbFixedPoint = copie.getRawBits();
}

Fixed::Fixed(const int i):_nbFixedPoint(i << Fixed::_nbBitsFrac){
   // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f): _nbFixedPoint(roundf(f * ((float)(1<< Fixed::_nbBitsFrac)))){
    //std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void){
    // std::cout << "Destructor called" << std::endl;

}

float Fixed::toFloat(void) const{
    return ((float)this->_nbFixedPoint/(1 << _nbBitsFrac));
}

int Fixed::toInt(void) const{
    return (this->_nbFixedPoint >> Fixed::_nbBitsFrac);
}

int Fixed::getRawBits(void) const{
    return(this->_nbFixedPoint);
}

void Fixed::setRawBits(int const raw){
    this->_nbFixedPoint = raw;
}

 Fixed& Fixed::min(Fixed& a, Fixed& b){
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
    if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}

const Fixed& Fixed::min(Fixed const& a, Fixed const& b){
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

const Fixed&   Fixed::max(Fixed const& a, Fixed const& b){
   if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}


/**********operator**************/
Fixed Fixed::operator= (Fixed c){
   // std::cout << "Copy assignment operator called " << std::endl;
    if (this != &c)
        this->_nbFixedPoint = c._nbFixedPoint;
    return (*this);
}

bool Fixed::operator> (Fixed const& a){
    return (this->getRawBits() > a.getRawBits());
}

bool Fixed::operator< (Fixed const& a){
    return (this->getRawBits() < a.getRawBits());
}

bool Fixed::operator>= (Fixed const& a){
    return (this->getRawBits() >= a.getRawBits());
}

bool Fixed::operator<= (Fixed const& a){
    return (this->getRawBits() <= a.getRawBits());
}

bool Fixed::operator!= (Fixed const& a){
    return (this->getRawBits() != a.getRawBits());
}

bool Fixed::operator== (Fixed const& a){
    return (this->getRawBits() == a.getRawBits());
}

Fixed   Fixed::operator+ (Fixed const& a){
    Fixed   tmp(this->toFloat() + a.toFloat());
    return (tmp);
}

Fixed   Fixed::operator- (Fixed const& a){
    Fixed   tmp(this->toFloat() - a.toFloat());
    return (tmp);
}

Fixed   Fixed::operator* (Fixed const& a){
    Fixed   tmp(this->toFloat() * a.toFloat());
    return (tmp);
}

Fixed   Fixed::operator/ (Fixed const& a){
    Fixed   tmp(this->toFloat() / a.toFloat());
    return (tmp);
}

Fixed   Fixed::operator++(int){
    Fixed temp;
    temp.setRawBits(this->_nbFixedPoint++);
    return(temp);
}

Fixed&   Fixed::operator++(void){
    ++(this->_nbFixedPoint);
    return(*this);
}

Fixed   Fixed::operator--(int){
    Fixed temp;
    temp.setRawBits(this->_nbFixedPoint--);
    return(temp);
}

Fixed&  Fixed::operator--(void){
    --(this->_nbFixedPoint);
    return(*this);
}

std::ostream &operator<< (std::ostream &out, Fixed const &nb ){
    out << nb.toFloat();
    return (out);
}


