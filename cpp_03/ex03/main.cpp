/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:10:41 by rliu              #+#    #+#             */
/*   Updated: 2022/10/25 17:07:14 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

int main(void)
{
    DiamondTrap dtA("A");
    DiamondTrap dtB(dtA);
    DiamondTrap dtC;

    dtC = dtA;
    
    dtA.whoAmI();
    for (int i = 0; i< 7; i++)
    dtA.attack("aaaaaaaaaa");
    dtA.guardGate();
    dtA.highFivesGuys();
    for (int i = 0; i < 6 ; i++);
    //dtA.beRepaired(2);
    
    dtB.whoAmI();
    for (int i = 0; i< 7; i++)
    dtB.attack("bbbbbbbbbb");
    dtB.guardGate();
    for (int i = 0; i < 6 ; i++);
    //dtB.beRepaired(2);
    
    dtC.whoAmI();
    for (int i = 0; i< 7; i++)
    dtC.attack("cccccccccc");
    for (int i = 0; i < 6 ; i++);
    //dtC.beRepaired(2);
    dtC.guardGate();

    return (0);
}