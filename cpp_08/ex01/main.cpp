/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:17:49 by rliu              #+#    #+#             */
/*   Updated: 2022/11/23 17:05:39 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{

std::cout << "**********test0 exception 0&1 element*************" <<std::endl;
Span sp(5);
try{
	
std::cout << "sp short" << sp.shortestSpan() << std::endl;
std::cout << "sp long" << sp.longestSpan() << std::endl;
	}
catch(const std::exception &e){
	std::cerr << e.what() << std::endl;

	}
std::cout << "**********test1*************" <<std::endl;
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << "sp short" << sp.shortestSpan() << std::endl;
std::cout << "sp long" << sp.longestSpan() << std::endl;

std::cout << "**********test2,deep copy*************" <<std::endl;
Span sp1;
sp1=sp;
std::cout << "sp1 short:"<<sp1.shortestSpan() << std::endl;
std::cout << "sp1 long:"<<sp1.longestSpan() << std::endl;

Span sp2(sp);
std::cout << "sp2 short:" << sp2.shortestSpan() << std::endl;
std::cout << "sp2 long:" << sp2.longestSpan() << std::endl;

std::cout << "**********test3 exception full elements*************" <<std::endl;

try{
	sp1.addNumber(22);
}
catch (const std::exception &e){
	std::cerr << e.what() << std::endl;
}
return 0;
}
