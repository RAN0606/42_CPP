/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:21:39 by rliu              #+#    #+#             */
/*   Updated: 2022/10/14 21:48:46 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    
        Point const 	a(0, 0);
		Point const 	b(10, 30);
		Point const 	c(20, 0);
	

		/*points[0] = Point(10, 15);
		points[1] = Point(30, 15);
		points[2] = Point(0, 0);
		points[3] = Point(10, 30);
		points[4] = Point(20, 0);
		points[5] = Point(15, 2);
		points[6] = Point(10, 29);*/

	
		/*std::cout << "a : " << "(" << a.getX().toFloat() << ", " << a.getY().toFloat() << ")" << std::endl;
		std::cout << "b : " << "(" << b.getX().toFloat() << ", " << b.getY().toFloat() << ")" << std::endl;
		std::cout << "c : " << "(" << c.getX().toFloat() << ", " << c.getY().toFloat() << ")" << std::endl;
		std::cout << std::endl;*/
	
		std::cout << "bool 1 or 0 :" << bsp(a,b,c ,Point(10, 15)) << std::endl;

	return 0;
}