/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:23:01 by rliu              #+#    #+#             */
/*   Updated: 2022/11/22 17:00:13 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//using std::max;
//using std::min;
#include "whatever.hpp"



int main( void ) {
int a = 2;
int b = 3;
swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
std::cout << "std::max(a, b)= "  << std::max(a,b) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
return 0;
}