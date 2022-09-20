/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:24:01 by rliu              #+#    #+#             */
/*   Updated: 2022/08/25 15:40:19 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>  //std::cout, std::endl

class Contact{

	public:
		Contact(void);
		~Contact(void);	
		void	set_all_info(int p_index);
		void	print_all_info(void);
		int		check_contact(void);
		int 	index();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nick_name();
		std::string get_number();
		std::string get_secret();
		
	private:
		int			index;
		std::string	first_name;
		std::string	last_name;	
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;

		void		check_str_empty;
		void		set_info;
};
#endif	
