/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:02:39 by rliu              #+#    #+#             */
/*   Updated: 2022/10/10 17:14:23 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void):_nbFixedPoint(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &copie){
    std::cout << "Copy constructor called" << std::endl;
    this->_nbFixedPoint = copie.getRawBits();
}

Fixed::~Fixed(void){
     std::cout << "Destructor called" << std::endl;

}

Fixed Fixed::operator= (Fixed assignement){
    std::cout << "Copy assignment operator called "
    << "// <-- This line may be missing depending on your implementation"
    << std::endl;
    return (assignement);
}

int Fixed::getRawBits(void) const{
    return(this->_nbFixedPoint);
}
void Fixed::setRawBits(int const raw){
    this->_nbFixedPoint = raw;
}