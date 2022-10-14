/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:47:52 by rliu              #+#    #+#             */
/*   Updated: 2022/10/14 21:55:01 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void): _fixedX(Fixed(0)), _fixedY(Fixed(0)){}

Point::Point(float fx, float fy):_fixedX(Fixed(fx)), _fixedY(Fixed(fy)){}

Point::Point(Point const &copiePoint){
    this->_fixedX = copiePoint._fixedX;
    this->_fixedY = copiePoint._fixedY;
} 

Point::~Point(void){};

/*void Point::setX(float paraX){
    this_->_fixedX = Fixed(paraX);
}

void Point::setY(float paraY){
    this_->_fixedX = Fixed(paraX);
}*/

Fixed Point::getX(void){
    return(this->_fixedX);
}

Fixed Point::getY(void){
    return(this->_fixedY);
}

Point Point::operator= (Point &assignPoint){
      if (this != &assignPoint)
        this->_fixedX = assignPoint._fixedX;
        this->_fixedY = assignPoint._fixedY; 
    return (*this);
}