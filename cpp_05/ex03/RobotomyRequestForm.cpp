/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:16:01 by rliu              #+#    #+#             */
/*   Updated: 2022/11/09 17:23:53 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void):
    Form("RobotomyRequestForm", 145, 137){}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
    Form("RobotomyRequestForm", 145, 137),
    _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &toCopy){
    *this = toCopy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &toAssign){
    if (this == &toAssign)
        return (*this);
    this->setName(toAssign.getName());
    this->setGradeSign(toAssign.getGradeSign());
    this->setGradeExecut(toAssign.getGradeExecut());
    this->setIsSigned(toAssign.getSigned());
    this->_target = toAssign._target;
    return (*this);
}
		
RobotomyRequestForm::~RobotomyRequestForm(void){}

const std::string&  RobotomyRequestForm::getTarget(void) const{
    return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > this->getGradeExecut())
        throw Form::GradeTooHighException();
    if (!(this->getSigned()))
        throw Form::unsignedException();
    std::cout << executor.getName() << " executed " << this->getName() << "\n";
	std::cout << "brutsszzsszzzsss~~~~\n";
    srand((unsigned int)(time(NULL)));
    std::cout << rand() << std::endl;
    if (rand() % 2 == true) 
        std::cout << this->_target << " has been robotomized! " << std::endl;
    else   
        std::cout << this->_target << " Failed! " << std::endl;   
}