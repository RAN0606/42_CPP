/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:36:46 by rliu              #+#    #+#             */
/*   Updated: 2022/11/16 17:47:05 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
Base::~Base(void){}

Base * generate(void) {
	int		nbr;

	std::srand(std::time(0));
	nbr = std::rand() % 3;

	if (nbr == 0)
		return (new A());
	if (nbr == 1)
		return (new B());
	if (nbr == 2)
		return (new C());
	return (NULL);
}

void	identify(Base* p) {
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);

	if (a) {
		std::cout << "A";
	} else if (b) {
		std::cout << "B";
	} else if (c) {
		std::cout << "C";
	} else {
		std::cout << "Not valid class";
	}
}

void	identify(Base& p) {
	try {
		A	&a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A";
		return ;
	} catch (std::exception &e) {}
	try {
		B	&b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B";
		return ;
	} catch (std::exception &e) {}
	try {
		C	&c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C";
		return ;
	} catch (std::exception &e) {}
}