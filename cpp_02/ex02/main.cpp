/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:21:39 by rliu              #+#    #+#             */
/*   Updated: 2022/10/14 20:12:44 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

//test a=0.0078125 b=10.1016
/*Fixed c(2.4f);
Fixed const d(2.4f);
std::cout << "a b min value = " << Fixed::min( a, b ) << std::endl;
std::cout << "b c min value = " << Fixed::min( b, c ) << std::endl;
std::cout << "a < b bool = " << (a < b) << std::endl;
std::cout << "a > b bool = " << (a > b) << std::endl;
std::cout << "c >= d bool = " << (c >= d) << std::endl;
std::cout << "c <= d bool = " << (c <= d) << std::endl;
std::cout << "c == d bool = " << (c == d) << std::endl;
std::cout << "c != d bool = " << (c != d) << std::endl;
std::cout << "c/d = " << (c/d) << std::endl;
std::cout << "c+d = " << (c+d) << std::endl;
std::cout << "c-d = " << (c-d) << std::endl;
std::cout<<"c = " << c << std::endl;
std::cout << "--c = "<< --c << std::endl;
std::cout <<"c = "<< c << std::endl;
std::cout << "c-- = " << c-- << std::endl;
std::cout << "c = " << c << std::endl;*/

return 0;
}