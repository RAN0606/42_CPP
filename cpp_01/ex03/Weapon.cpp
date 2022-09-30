/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:24:41 by rliu              #+#    #+#             */
/*   Updated: 2022/09/30 13:35:02 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type): _type(type){}
Weapon::~Weapon(void){}

std::string Weapon::getType(void){

    return(this->_type);
}

void Weapon::setType(std::string type){
    
    this->_type = type;
}
