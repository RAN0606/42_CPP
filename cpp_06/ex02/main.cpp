/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:36:39 by rliu              #+#    #+#             */
/*   Updated: 2022/11/16 17:43:26 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {

  Base*	objectPtr = NULL;
	Base*	anotherObjectPtr = NULL;

	std::cout << "Create an instance of A, B, or C randomly.\n";
	objectPtr = generate();

	std::cout << "Identification of class by pointer.\n";
	identify(objectPtr);
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "Identification of class by reference.\n";
	Base&	objectRef = *objectPtr;
	identify(objectRef);
	std::cout << "\n";
	std::cout << "\n";

	std::cout << "Identification of a non valid class.\n";
	identify(anotherObjectPtr);
	/* can't do this
	Base&	anotherObjectRef = *anotherObjectPtr;
	identify(anotherObjectRef);
	*/
	std::cout << "\n";

	delete objectPtr;

	return (0);}