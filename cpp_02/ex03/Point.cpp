/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:47:52 by rliu              #+#    #+#             */
/*   Updated: 2022/10/17 19:10:14 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void): _fixedX(Fixed(0)), _fixedY(Fixed(0)){}

Point::Point(float fx, float fy):_fixedX(Fixed(fx)), _fixedY(Fixed(fy)){}

Point::Point(Point const &copiePoint):_fixedX(copiePoint._fixedX), _fixedY(copiePoint._fixedY){

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
      if (this != &assignPoint){
        Fixed* x= (Fixed *) &(this->_fixedX);
        *x = assignPoint._fixedX;
        Fixed* y = (Fixed *)&(this->_fixedY);
        *y = assignPoint._fixedY;
      }
    return (*this);
}