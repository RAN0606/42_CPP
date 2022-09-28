/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:05:31 by rliu              #+#    #+#             */
/*   Updated: 2022/09/28 17:34:31 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string name): _name(name){

	std::cout << this->_name << " is comming!" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << this->_name << " is destroyed" << std::endl;
}

void Zombie::annoncent(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
