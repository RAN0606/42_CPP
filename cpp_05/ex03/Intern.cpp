/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:28:06 by rliu              #+#    #+#             */
/*   Updated: 2022/11/09 19:36:05 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void){}

Intern::Intern(Intern const &tocopie){
    *this = tocopie;
}
Intern::~Intern(void){}

Intern& Intern::operator=(Intern const &tocopie){
    (void) tocopie;
    return (*this);
}
Form *Intern::makeForm(std::string const &formName, std::string const &formTarget){
    enum ename{SHRU,ROBO,PRES};
    int  name;
    std::string namelist[3]={"shrubbery creation","robotomy request","presidential robotomy"};
    for(name=SHRU; name<=PRES; name++){
        if (!namelist[name].compare(formName)){
            std::cout <<"Intern creates " << formName  << std::endl;
            break;
        }
    }
    
    switch(name){
        case SHRU   : return(new ShrubberyCreationForm(formTarget));
        case ROBO   : return(new RobotomyRequestForm(formTarget));
        case PRES   : return(new PresidentialPardonForm(formTarget));
        default     : std::cout << "Intern can't creat "<< formName << std::endl;
                      return (NULL);
    }
    return (NULL);
};