/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:28:09 by rliu              #+#    #+#             */
/*   Updated: 2022/11/07 14:16:57 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>

int main() {
    {
    Bureaucrat a("rliu", 2);
    std::cout << "a is: " << a << std::endl;
    
    Bureaucrat b("paul", 149);
    std::cout << "b is: " << b << std::endl;

    
    a.upGrade();//niveau incrémenter
    std::cout << "2 - 1 = " << a.getGrade() << std::endl;

    
    b.downGrade();//niveau decrementer
    std::cout << "149 + 1 = " << b.getGrade() << std::endl;

    std::cout << "------test error niveau--------" << std::endl;
    try
    {
        a.upGrade();
    }
    catch (std::exception & e) {
        std::cout << "1 - 1 " << std::endl;
        std::cerr << e.what() << std::endl;
    }
    try
    {
        b.downGrade();
    }
    catch (std::exception & e) {
        std::cout << "150 + 1 " << std::endl;
        std::cerr << e.what() << std::endl;
    }
    }
    std::cout << "************test for constructor******" <<std::endl;
    try
    {
        Bureaucrat c("paul", 1600);
        Bureaucrat d("X", 159);
        Bureaucrat e("paul", -1);
        Bureaucrat f("paul", 0);
        Bureaucrat g("paul", -2);
    }
    catch(const std::exception& e)
    {
        std::cout << "paul's "; 
        std::cerr << e.what() << '\n';
    }
    return 0;
}