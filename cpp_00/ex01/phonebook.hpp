/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:32:34 by rliu              #+#    #+#             */
/*   Updated: 2022/08/25 15:59:52 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>



class Phonebook {
	
	public:
		Phonebook(void);
		~Phonebook(void);

		int		show_menu(void);
		void	add_contact(void);
		void	search_contact(void);
		void	start_phonebook(void);
	
		int		index;

	private:	
		Contact contacts[8];
};
#endif
