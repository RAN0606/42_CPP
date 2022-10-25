/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:21:39 by rliu              #+#    #+#             */
/*   Updated: 2022/10/19 15:19:38 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    
        Point 	a(0, 0);
		Point   b(0, 15);
		Point 	c(20, 0);
		Point 	d(0.5, 2);

	/*	points[0] = Point(10, 15);
		points[1] = Point(30, 15);
		points[2] = Point(0, 0);
		points[3] = Point(10, 30);
		points[4] = Point(20, 0);
		points[5] = Point(15, 2);
		points[6] = Point(10, 29);*/

	
		std::cout << "a : " << "(" << a.getX().toFloat() << ", " << a.getY().toFloat() << ")" << std::endl;
		std::cout << "b : " << "(" << b.getX().toFloat() << ", " << b.getY().toFloat() << ")" << std::endl;
		std::cout << "c : " << "(" << c.getX().toFloat() << ", " << c.getY().toFloat() << ")" << std::endl;
	    std::cout << "d : " << "(" << d.getX().toFloat() << ", " << d.getY().toFloat() << ")" << std::endl;
		std::cout << std::endl;
		std::cout << "in the triangle? yes:1 no:0 anwser:" << bsp(a,b,c ,d) << std::endl;

	return 0;
}