/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:37:17 by rliu              #+#    #+#             */
/*   Updated: 2022/10/25 17:13:24 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(void):ClapTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
    std::cout << "FragTrap name constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrapCopie):ClapTrap(fragTrapCopie){
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap  &FragTrap::operator= (const FragTrap &fragTrapAssigne){
    std::cout << "FragTrap assignment constructor called" << std::endl;
    this->_name = fragTrapAssigne._name;
    this->_hitPoints = fragTrapAssigne._hitPoints;
    this->_energyPoints = fragTrapAssigne._energyPoints;
    this->_attackDamage = fragTrapAssigne._attackDamage;
    return (*this);
}

FragTrap::~FragTrap(void){
     std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target){
    if (this->_hitPoints <= 0)
        std::cout << "FragTrap " << this->_name << " has no life, can't attack!" << std::endl;
    else if (this->_energyPoints == 0)
        std::cout << "FragTrap " << this->_name << " has no energy, can't attack!" << std::endl;
    else{
        std::cout << "FragTrap " << this->_name << " attacks " << target << ", ";
        takeDamage(this->_attackDamage);
        this->_energyPoints--;
    }
    std::cout << "Statu now, "<< "Hit point : " << this->_hitPoints <<  ", Energy: " << this->_energyPoints <<std::endl;
    std ::cout << std::endl;
}

void FragTrap::highFivesGuys(void){
    if (this->_hitPoints <= 0)
        std::cout << "FragTrap " << this->_name << " has no life, can't hail!" << std::endl;
    else if (this->_energyPoints == 0)
        std::cout << "FragTrap " << this->_name << " has no energy, can't hail!" << std::endl;
    else
        std::cout << "FragTrap " << this->_name << " hail: Give me a five, guys!" << std::endl;
    std::cout << std::endl;
}

void    FragTrap::setHit(void) {
    this->_hitPoints = 100;
}
void    FragTrap::setEnergy(void) {
    this->_energyPoints = 50;
}
void    FragTrap::setDamage(void) {
    this->_attackDamage = 20;
}