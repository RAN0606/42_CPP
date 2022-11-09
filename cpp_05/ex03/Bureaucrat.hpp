/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:57:29 by rliu              #+#    #+#             */
/*   Updated: 2022/11/09 15:26:20 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string>
#include <iostream>
#include <ostream>
#include <exception>

class Form;
class Bureaucrat {
    private:
        std::string const    _name;
        unsigned int         _grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat &tocopie);
        ~Bureaucrat(void);
        
        Bureaucrat      &operator=(Bureaucrat &toassigne);
        
        std::string     getName(void) const;
        unsigned int    getGrade(void) const;
        void            upGrade(void);
        void            downGrade(void);
        void            signForm(Form &f);
        void            executeForm(Form &f);
        
        class GradeTooHighException : public std::exception{
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            virtual const char* what() const throw();
        };
};

std::ostream	&operator<<(std::ostream& out, const Bureaucrat& b);

#endif