/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:30:42 by rliu              #+#    #+#             */
/*   Updated: 2022/09/30 14:45:55 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream> 

HumanB::HumanB(std::string name): _name(name){
    this->_club = NULL;
}
    
HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon& club){
    this->_club = &club;
}

void HumanB::attack(void){
    std::cout << this->_name << " attacks with their " << this->_club->getType() << std::endl;
}