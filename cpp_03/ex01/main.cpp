/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:10:41 by rliu              #+#    #+#             */
/*   Updated: 2022/10/25 17:32:12 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
int main(void)
{
    ScavTrap stA("A");
    ScavTrap stB(stA);
    ScavTrap stC;
    
    stC = stA;
    
    for (int i = 0; i< 7; i++)
    stA.attack("aaaaaaaaaa");
    stA.guardGate();
    for (int i = 0; i < 6 ; i++)
    stA.beRepaired(2);
    
    stB.takeDamage(2);
    for (int i = 0; i< 7; i++)
    stB.attack("bbbbbbbbbb");
    stB.guardGate();
    for (int i = 0; i < 6 ; i++)
    stB.beRepaired(2);

    for (int i = 0; i< 7; i++)
    stC.attack("cccccccccc");
    for (int i = 0; i < 6 ; i++)
    stC.beRepaired(2);
    stC.guardGate();
    
    return (0);
}