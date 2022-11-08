/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:27 by rliu              #+#    #+#             */
/*   Updated: 2022/11/08 16:46:25 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#inlucde "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:

		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &toCopy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &toAssign);
		ShrubberyCreationForm(std::string target);

		const std::string &getTarget(void) const;

		void	execute(Bureaucrat const & executor) const;
	private:
		std::string	_target;
};

#endif