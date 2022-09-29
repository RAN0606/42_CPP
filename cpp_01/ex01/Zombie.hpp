/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:35:52 by rliu              #+#    #+#             */
/*   Updated: 2022/09/29 12:18:56 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie{
	
	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void annoncent(void);
		void setName(std::string name);

	private:
		std::string _name;
		
};


Zombie*	zombieHorde(int N, std::string name);

#endif
