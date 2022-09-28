/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:42:16 by rliu              #+#    #+#             */
/*   Updated: 2022/09/28 17:51:17 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
Zombie* newZombie(std::string name);

void randomChump(std::string name){

	Zombie* somezombie = newZombie(name);

	somezombie->annoncent();

	delete somezombie;
}
