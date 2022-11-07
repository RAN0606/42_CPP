/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:04:05 by rliu              #+#    #+#             */
/*   Updated: 2022/11/07 18:24:43 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form{
    private:
        const std::string           _name;
        bool                        _issigned;
        const unsigned int          _gradeSign;
        const unsigned int          _gradeExecut;
    public:
        Form(void);
        Form(std::string const name, unsigned int const gradeSign, unsigned int const gradeExecut);
        Form(Form &copie);
        ~Form(void);

        Form &operator=(Form &assigne);
        
        std::string         getName(void)           const;
        bool                getSigned(void);
        unsigned int        getGradeSign(void)      const;
        unsigned int        getGradeExecut(void)    const;
        void                beSigned(Bureaucrat &bc);
        void                signForm(Bureaucrat &bc);
        
        class GradeTooHighException:public std::exception{
            virtual const char* what() const throw ();
        };
        class GradeTooLowException:public std::exception{
            virtual const char* what() const throw();
        };
                      
};

std::ostream &operator<<(std::ostream out, Form &fc);

#endif