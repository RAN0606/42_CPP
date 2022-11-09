/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:07 by rliu              #+#    #+#             */
/*   Updated: 2022/11/09 17:08:47 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>

class PresidentialPardonForm : public Form {
	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm &toCopy);
		PresidentialPardonForm &operator=(PresidentialPardonForm &toAssign);
		PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm(void);
		const std::string &getTarget(void) const;

		virtual void	execute(Bureaucrat const & executor) const;
	private:
		std::string	_target;
};

#endif