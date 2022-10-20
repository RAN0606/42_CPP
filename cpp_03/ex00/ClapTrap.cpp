/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:14:01 by rliu              #+#    #+#             */
/*   Updated: 2022/10/20 13:40:47 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string name):_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){}

ClapTrap::ClapTrap(ClapTrap &claptrapCopie){
    *this = claptrapCopie;
}

ClapTrap::~ClapTrap(void){}

ClapTrap ClapTrap::operator= (ClapTrap &clapAssigne){
    ClapTrap(clapAssigne);
}
