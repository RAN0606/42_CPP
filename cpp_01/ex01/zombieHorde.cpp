/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:37:12 by rliu              #+#    #+#             */
/*   Updated: 2022/09/29 12:16:56 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name){

	Zombie *zombies = new Zombie[N];

	for (int i = 0; i < N; i++){
		
		zombies[i].setName(name);
	}

	return (zombies);
}
