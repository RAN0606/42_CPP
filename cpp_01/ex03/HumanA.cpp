/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:05:05 by rliu              #+#    #+#             */
/*   Updated: 2022/09/30 14:45:13 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream> 

HumanA::HumanA(std::string name , Weapon& club): _name(name), _club(club){}
HumanA::~HumanA(void){}

void HumanA::attack(void){
    std::cout << this->_name << " attacks with their " << this->_club.getType() << std::endl;
}