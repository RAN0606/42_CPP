/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:15:58 by rliu              #+#    #+#             */
/*   Updated: 2022/11/09 16:23:28 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include  "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:

		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm &toCopy);
		RobotomyRequestForm &operator=(RobotomyRequestForm &toAssign);
		RobotomyRequestForm(std::string target);

		const std::string &getTarget(void) const;

		virtual void	execute(Bureaucrat const & executor) const;
	private:
		std::string	_target;
};

#endif