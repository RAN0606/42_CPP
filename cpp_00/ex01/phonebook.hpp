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

#include "contact.hpp"

class Phonebook {
	
	public:
		Phonebook(void);
		~Phonebook(void);

		void	exit(void);
		void	show_menu(void);
		void	add_contact(void);
		void	search_contact(void);
		int		index;

	private:
		
		Contact contacts[8];
};
#endif

