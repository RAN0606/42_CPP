/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:02:39 by rliu              #+#    #+#             */
/*   Updated: 2022/10/21 15:04:02 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void):_nbFixedPoint(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &copie){
    std::cout << "Copy constructor called" << std::endl;
    *this = copie;
}

Fixed::~Fixed(void){
     std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator= (Fixed &f){
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &f)
        this->_nbFixedPoint = f.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawbits member function called" <<std::endl;
    return(this->_nbFixedPoint);
}

void Fixed::setRawBits(int const raw){
     std::cout << "setRawbits member function called" <<std::endl;
    this->_nbFixedPoint = raw;
}

