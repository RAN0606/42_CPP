/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:10:41 by rliu              #+#    #+#             */
/*   Updated: 2022/10/25 12:00:18 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

int main(void)
{
    FragTrap ftA("A");
    FragTrap ftB(ftA);
    FragTrap ftC;

    ftC = ftA;
    
    for (int i = 0; i< 7; i++)
    ftA.attack("aaaaaaaaaa");
    ftA.highFivesGuys();
    for (int i = 0; i < 6 ; i++)
    ftA.beRepaired(2);
    
    for (int i = 0; i< 7; i++)
    ftB.attack("bbbbbbbbbb");
    ftB.highFivesGuys();
    for (int i = 0; i < 6 ; i++)
    ftB.beRepaired(2);

    for (int i = 0; i< 7; i++)
    ftC.attack("cccccccccc");
    for (int i = 0; i < 6 ; i++)
    ftC.beRepaired(2);
    ftC.highFivesGuys();

    return (0);
}