/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:44:54 by rliu              #+#    #+#             */
/*   Updated: 2022/10/25 17:15:40 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap(void): ScavTrap(), FragTrap(){
    
    std::cout << "DiamondTrap default constructor called" << std::endl;
    FragTrap::setHit();
    ScavTrap::setEnergy();
    FragTrap::setDamage();
}

DiamondTrap::DiamondTrap(std::string name):ScavTrap(name), FragTrap(name){
    std::cout << "DiamondTrap name constructor called" << std::endl;
    this->_name = name;
    FragTrap::setHit();
    ScavTrap::setEnergy();
    FragTrap::setDamage();
    ScavTrap::setName(name + "_clap_name");
}
DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrapCopie)
: ScavTrap(diamondTrapCopie), FragTrap(diamondTrapCopie){
        
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    }

DiamondTrap::~DiamondTrap(void){
    
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrapAssigne){
    std::cout << "DiamondTrap assignement constructor called" << std::endl;
    this->_name = diamondTrapAssigne._name;
    FragTrap::setHit();
    ScavTrap::setEnergy();
    FragTrap::setDamage();
    ScavTrap::setName(this->_name + "_clap_name");
    return *this;
}

void DiamondTrap::attack(const std::string &target){
    ScavTrap::attack(target);
}

// void DiamondTrap::beRepaired(unsigned int amount){
//     ScavTrap::beRepaired(amount);
// }

void DiamondTrap::whoAmI(void){
    std::cout << "Who am I? I am DiamondTrap " << this->_name << std::endl << std::endl;
}