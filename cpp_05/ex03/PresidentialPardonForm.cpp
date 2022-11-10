/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:16:08 by rliu              #+#    #+#             */
/*   Updated: 2022/11/10 13:30:33 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstring>
#include <string>


PresidentialPardonForm::PresidentialPardonForm(void):
    Form("PresidentialPardonForm", 145, 137){}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
    Form("PresidentialPardonForm", 145, 137){
        this->_target = target;
    }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &toCopy){
    *this = toCopy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &toAssign){
    if (this == &toAssign)
        return (*this);
    this->setName(toAssign.getName());
    this->setGradeSign(toAssign.getGradeSign());
    this->setGradeExecut(toAssign.getGradeExecut());
    this->setIsSigned(toAssign.getSigned());
    this->_target = toAssign._target;
    return (*this);
}
		
PresidentialPardonForm::~PresidentialPardonForm(void){}

const std::string&  PresidentialPardonForm::getTarget(void) const{
    return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > this->getGradeExecut())
        throw Form::GradeTooHighException();
    if (!(this->getSigned()))
        throw Form::unsignedException();
    std::cout << executor.getName() << " executed " << this->getName() << "\n";
	std::cout << this->getTarget() << " is pardoned by Zaphod Beeblebrox.\n";
}