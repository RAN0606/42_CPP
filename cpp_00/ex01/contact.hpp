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
		
		int			index;
		std::string	first_name;
		std::string	last_name;	
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;
}
#endif	
