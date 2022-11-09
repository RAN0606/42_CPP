/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:16:53 by rliu              #+#    #+#             */
/*   Updated: 2022/11/09 16:12:51 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>


Bureaucrat::Bureaucrat(void):_grade(0){
    //std::cout << "Bureaucrat default constructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade){
// std::cout << "Bureaucrat set constructor called\n";
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade >150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat &tocopie){
//    std::cout << "Bureaucrat copy constructor called\n";
    *this = tocopie;
}

Bureaucrat::~Bureaucrat(void){
//    std::cout << "Bureaucrat  destructor called\n";
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &toassigne){
   std::cout << "Bureaucrat copy assignment operator overload called\n";
	this->_grade = toassigne._grade;
    //this->_name = toassigne._name;
	return (*this);
}

std::string     Bureaucrat::getName(void) const{
    return(this->_name);
}

unsigned int    Bureaucrat::getGrade(void) const{
    return(this->_grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is too high Exception!" ;
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too low Exception!";
}

void    Bureaucrat::upGrade(void)
{
    if (this->_grade-1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
    std::cout << "test" << std::endl;
}

void    Bureaucrat::downGrade(void)
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void    Bureaucrat::signForm(Form &f){
    try{
        f.beSigned(*this);
        std::cout << this->getName() << " signed " << f.getName() << std::endl;
    }
    catch(std::exception &e){
        std::cout << this->getName() << " couldn’t sign " << f.getName() << " because " << e.what()
        <<std::endl;
    }
}
void    Bureaucrat::executeForm(Form &f){
    try{
        f.execute(*this);
    }
    catch (std::exception &e){
        std::cout   << this->getName() 
                    << " couldn't execute " << f.getName() 
                    << " because " << e.what() << std::endl;    
    }
}

std::ostream	&operator<<(std::ostream& out, const Bureaucrat& b) {
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".\n";
	return (out);
}