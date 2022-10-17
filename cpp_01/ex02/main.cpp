/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:40:57 by rliu              #+#    #+#             */
/*   Updated: 2022/10/17 14:10:52 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char** argv){
	
	(void) argv;
	(void) argc;

	std::string		str("HI THIS IS BRAIN");
	std::string*	strptr = &str;
	std::string&	strref = str;

	std::cout << "Address of str: " << &str << std::endl;
	std::cout << "Address stoked in strptr: " << strptr << std::endl;
	std::cout << "Address stoked in strref: " << &strref<< std::endl;

	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value pointed by strptr: " << *strptr << std::endl;
	std::cout << "Value pointed by strref: " << strref << std::endl;

/* test for address	
	
	std::string str2 ("lalal");	
	//std::string&	strref2;
	strref = str2;

	std::cout << "Address of str: " << &str << std::endl;
	std::cout << "Address stoked in strptr: " << strptr << std::endl;
	std::cout << "Address stoked in strref: " << &strref << std::endl;
	std::cout << "Address of str2: " << &str2 << std::endl;
	
	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value of str2: " << str2 << std::endl;
	std::cout << "Value pointed by strptr: " << *strptr << std::endl;
	std::cout << "Value pointed by strref: " << strref << std::endl;


	return (0);*/
}



