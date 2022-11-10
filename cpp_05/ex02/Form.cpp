/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:20:32 by rliu              #+#    #+#             */
/*   Updated: 2022/11/10 13:41:04 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <ostream>

// canonical coplien
Form::Form(void):_name("Unknow"),
    _issigned(false),
    _gradeSign(150),
    _gradeExecut(150){
    
//  std::cout << "Form default constructor called\n"; 
}

Form::Form(std::string name, unsigned int const gradeSign, unsigned int const gradeExecut):
    _name(name),_issigned(false),_gradeSign(gradeSign), _gradeExecut(gradeExecut){
    
    if (this->_gradeExecut < 1 || this->_gradeSign < 1)
        throw Form::GradeTooHighException();
    if (this->_gradeExecut > 150 || this->_gradeSign > 150)
        throw Form::GradeTooLowException();
//    std::cout << "Form set constructor called\n"; 
}

Form::Form(Form const &copie):_name(copie.getName()), _gradeSign(copie.getGradeSign()), _gradeExecut(copie.getGradeExecut()){
    *this = copie;
//   std::cout << "Form copy constructor called\n"; 
}

Form::~Form(void){
   // std::cout << "Form destructor called\n"; 
}

Form &Form::operator=(Form const &assigne){
    if(this == &assigne)
        return(*this);
   
    (std::string &)this->_name = assigne.getName();
    (unsigned int &)this->_gradeSign = assigne.getGradeSign();
    (unsigned int &)this->_gradeExecut = assigne.getGradeExecut();
    this->_issigned = assigne._issigned;
    return (*this);
}
// function to set the private attribute
void Form::setName(std::string name){
    (std::string &)this->_name  = name;
}
void Form::setGradeSign(unsigned int signgrade){
    (unsigned int &)this->_gradeSign = signgrade;
}
void  Form::setGradeExecut(unsigned int exegrade){
    (unsigned int &)this->_gradeExecut = exegrade;
}
void Form::setIsSigned(bool isSigned){
    this->_issigned = isSigned;
}
    
std::string Form::getName(void) const{
    return (this->_name);
}

bool Form::getSigned(void) const{
    return (this->_issigned);
}

unsigned int Form::getGradeSign(void) const{
    return (this->_gradeSign);
}

unsigned int Form::getGradeExecut(void) const {
    return (this->_gradeExecut);
}

void Form::beSigned(Bureaucrat &bc){
    if (bc.getGrade() <= this->getGradeSign())
        this->_issigned = true;
    else
        throw(Form::GradeTooLowException());
}

const char * Form::GradeTooHighException:: what() const throw(){
    return "Grade is too high Exception!" ;
}

const char *Form::GradeTooLowException::what() const throw(){
    return "Grade is too low Exception!" ;
}

const char*Form::unsignedException::what() const throw(){
    return "This Form not be singned yet!";
}

std::ostream &operator<<(std::ostream& out, Form& fc){
     out << fc.getName() << " signe is: " << ((fc.getSigned())? "signed":"unsigned") << " ,signeGrade is: " << fc.getGradeSign() 
     << " ,ExecGrade is: " << fc.getGradeExecut() <<  std::endl;
    return (out);
}
