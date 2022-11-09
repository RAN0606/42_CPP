/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:46:38 by rliu              #+#    #+#             */
/*   Updated: 2022/11/09 16:20:33 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>


ShrubberyCreationForm::ShrubberyCreationForm(void):
    Form("ShrubberyCreationForm", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
    Form("ShrubberyCreationForm", 145, 137),
    _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &toCopy){
    *this = toCopy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &toAssign){
    if (this == &toAssign)
        return (*this);
    this->setName(toAssign.getName());
    this->setGradeSign(toAssign.getGradeSign());
    this->setGradeExecut(toAssign.getGradeExecut());
    this->setIsSigned(toAssign.getSigned());
    this->_target = toAssign._target;
    return (*this);
}
		
ShrubberyCreationForm::~ShrubberyCreationForm(void){}

const std::string&  ShrubberyCreationForm::getTarget(void) const{
    return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > this->getGradeExecut())
        throw Form::GradeTooHighException();
    if (!(this->getSigned()))
        throw Form::unsignedException();
    std::string     fileName = this->_target +"_shrubbery";
    char    fileNamec[fileName.length() + 1];
    strcpy(fileNamec, fileName.c_str());
    std::fstream fileTree(fileNamec);
    if (!fileTree.is_open()){
        std::cout << "error openfile!" << std::endl;
        return;
    }
    fileTree << "           /\\\n"
             << "          //\\\\\n"
             << "         ///\\\\\\\n"
             << "        ////\\\\\\\\\n"
             << "           ||\n"
             << "           ||\n"
             <<"This is a Tree ASCII\n";
    fileTree.close();
    std::cout << executor.getName() << " executed " << this->getName()<< std::endl;
    std::cout << "Create \"" << fileName << "\" and write a tree inside the file."
            << std::endl;
    
}