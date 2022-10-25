/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:23:22 by rliu              #+#    #+#             */
/*   Updated: 2022/10/25 11:08:22 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void): ClapTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name ): ClapTrap(name){
    std::cout << "ScavTrap name constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrapCopie ): ClapTrap(scavTrapCopie){
    std::cout << "ScavTrap copy constructor called" << std::endl;
  //  *this = scavTrapCopie;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap  &ScavTrap::operator= (const ScavTrap &scavTrapAssigne){
    std::cout << "ScavTrap assignment constructor called" << std::endl;
    this->_name = scavTrapAssigne._name;
    this->_hitPoints = scavTrapAssigne._hitPoints;
    this->_energyPoints = scavTrapAssigne._energyPoints;
    this->_attackDamage = scavTrapAssigne._attackDamage;
    return (*this);
}

void ScavTrap:: attack(const std::string &target){
    if (this->_hitPoints <= 0)
        std::cout << "ScavTrap" << this->_name << " has no life, can't attack!" << std::endl;
    else if (this->_energyPoints == 0)
        std::cout << "ScavTrap" << this->_name << " has no energy, can't attack!" << std::endl;
    else{
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", ";
        takeDamage(this->_attackDamage);
        this->_energyPoints--;
    }
    std::cout << "Statu now, "<< "Hit point : " << this->_hitPoints <<  ", Energy: " << this->_energyPoints <<std::endl;
    std ::cout << std::endl;
}

void ScavTrap::guardGate(void){
    if (this->_hitPoints <= 0)
        std::cout << "ScavTrap" << this->_name << " has no life, can't be in mode Guard!" << std::endl;
    else if (this->_energyPoints == 0)
        std::cout << "ScavTrap" << this->_name << " has no energy, can't be in mode Guard!" << std::endl;
    else
        std::cout << "ScavTrap" << this->_name << " in Guard mode!" << std::endl;
}