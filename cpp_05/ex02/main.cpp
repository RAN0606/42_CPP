/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:28:09 by rliu              #+#    #+#             */
/*   Updated: 2022/11/09 17:13:13 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>


int	main(){
    std::cout << "creat Shrubbery--------145, 137------" << std::endl;
    try {
        Bureaucrat  b1("b1", 137);
        std::cout << b1 << std::endl;
        ShrubberyCreationForm s1("target1");
        std::cout << s1;
        b1.signForm(s1);
        b1.executeForm(s1);
    }
    catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;
    try {
        Bureaucrat  b1("b1", 150);
        std::cout << b1 << std::endl;
        ShrubberyCreationForm s1("target1");
        std::cout << s1;
        b1.signForm(s1);
        b1.executeForm(s1);
    }
    catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
    
    std::cout << std::endl;
    std::cout << "creat Robotomy-------72, 45-------" << std::endl;
    try
    {
        Bureaucrat b2("b2", 50);
        std::cout << b2 << std::endl;
        RobotomyRequestForm r2("target2");
        std::cout << r2;
        b2.signForm(r2);
        b2.executeForm(r2);
    }
    catch (std::exception & e) {
       std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat b2("b2", 40);
        std::cout << b2 << std::endl;
        RobotomyRequestForm r2("target2");
        std::cout << r2;
        b2.signForm(r2);
        b2.executeForm(r2);
    }
    catch (std::exception & e) {
       std::cerr << e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "creat Presidential------25, 5-----------" << std::endl;
    try
    {
        Bureaucrat b3("b3", 100);
        std::cout << b3 << std::endl;
        PresidentialPardonForm p3("target3");
        std::cout << p3;
        b3.signForm(p3);
        b3.executeForm(p3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat b3("b3", 5);
        std::cout << b3 << std::endl;
        PresidentialPardonForm p3("target3");
        std::cout << p3;
        b3.signForm(p3);
        b3.executeForm(p3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
