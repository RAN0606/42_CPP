/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:27 by rliu              #+#    #+#             */
/*   Updated: 2022/11/09 16:00:18 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include  "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:

		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm &toCopy);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &toAssign);
		ShrubberyCreationForm(std::string target);

		const std::string &getTarget(void) const;

		virtual void	execute(Bureaucrat const & executor) const;
	private:
		std::string	_target;
};

#endif