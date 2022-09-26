/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:32:34 by rliu              #+#    #+#             */
/*   Updated: 2022/09/26 16:10:44 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>

class Phonebook {
	
	public:
		Phonebook(void);
		~Phonebook(void);
		
		void	start_phonebook(void);

	private:	
		Contact contacts[8];
		int		index;
		int		show_menu(void);
		int		add_contact(void);
		int		search_contact(void);
};
#endif

