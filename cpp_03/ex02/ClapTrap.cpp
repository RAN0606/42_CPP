/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:14:01 by rliu              #+#    #+#             */
/*   Updated: 2022/10/25 10:29:32 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(void){
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _hitPoints(10),\
 _energyPoints(10), _attackDamage(0){
    std::cout << "ClapTrap name constructor callded" << std::endl;
 }

ClapTrap::ClapTrap(const ClapTrap &claptrapCopie){
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = claptrapCopie;
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &clapAssigne){
    std::cout << "ClapTrap assignement operator called" << std::endl;
    this->_name = clapAssigne._name;
    this->_hitPoints = clapAssigne._hitPoints;
    this ->_attackDamage = clapAssigne._attackDamage;
    this->_energyPoints = clapAssigne._energyPoints;
    return (*this);
}

void ClapTrap::attack(const std::string& target){
    
    if (this->_hitPoints <= 0)
        std::cout << "ClapTrap" << this->_name << " has no life, can't attack!" << std::endl;
    else if (this->_energyPoints == 0)
        std::cout << "ClapTrap" << this->_name << " has no energy, can't attack!" << std::endl;
    else{
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", ";
        takeDamage(this->_attackDamage);
        this->_energyPoints--;
    }
    std::cout << "Statu now, "<< "Hit point : " << this->_hitPoints <<  ", Energy: " << this->_energyPoints <<std::endl;
    std ::cout << std::endl;
    }
void ClapTrap::takeDamage(unsigned int amount){
    if (this->_hitPoints > 0){
        this->_hitPoints -= amount;
        std::cout << "caussing " << amount << " points of damage!" << std::endl;
    }
    else 
        std::cout << this->_name << "has no life, can't be damaged" << std::endl;
   // std::cout << "Statu now, "<< "Hit point : " << this->_hitPoints <<  ", Energy: " << this->_energyPoints <<std::endl;
    //std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->_hitPoints <= 0)
        std::cout << this->_name << " has no life ! can't be repaired!" << std::endl;
    else if (this->_energyPoints == 0)
        std::cout << this->_name << " has no energy! can't be repaired!" << std::endl;
    else{
        std::cout << this->_name << " is repaired" << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints--;
    }
    std::cout << "Statu now, "<< "Hit point : " << this->_hitPoints <<  ", Energy: " << this->_energyPoints <<std::endl;
    std::cout << std::endl;
}