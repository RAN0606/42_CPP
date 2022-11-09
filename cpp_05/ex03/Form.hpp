/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:04:05 by rliu              #+#    #+#             */
/*   Updated: 2022/11/09 16:06:29 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <string>
# include <iostream>
# include <exception>
#include  <ostream>

class Bureaucrat;
// this is an abstract class
class Form{
    private:
        const std::string           _name;
        bool                        _issigned;
        const unsigned int          _gradeSign;
        const unsigned int          _gradeExecut;
    public:
    // canonical coplien
        Form(void);
        Form(std::string const name, unsigned int const gradeSign, unsigned int const gradeExecut);
        Form(Form const &copie);
        virtual ~Form(void);
        Form &operator=(Form const &assigne);
        
    // access to the private atrributes 
        std::string         getName(void)           const;
        bool                getSigned(void)         const;
        unsigned int        getGradeSign(void)      const;
        unsigned int        getGradeExecut(void)    const;
    
    // Set the private atrributes 
        void                setName(std::string name);
        void                setGradeSign(unsigned int signgrad);
        void                setGradeExecut(unsigned int exegrade);
        void                setIsSigned(bool isSigned);
    
    //  member function
        virtual void        beSigned(Bureaucrat &bc);
    
    //  nested class for exception   
        class GradeTooHighException:public std::exception{
            virtual const char* what() const throw ();
        };
        class GradeTooLowException:public std::exception{
            virtual const char* what() const throw();
        };
        class unsignedException:public std::exception{
            virtual const char* what() const throw();
        };
        
    //  this is pure vitrual function for abstracting the class form      
        virtual void	execute(Bureaucrat const & executor) const = 0;              
};

// the overload operator<< to print Form
std::ostream &operator<<(std::ostream& out, Form &fc);

#endif