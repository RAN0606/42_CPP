/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:45:04 by rliu              #+#    #+#             */
/*   Updated: 2022/10/25 17:02:45 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap{
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &diamondTrapCopie);
        ~DiamondTrap(void);
        
        DiamondTrap &operator= (const DiamondTrap &diamondTrapAssigne);
        
        void attack(const std::string &target);
        // void beRepaired(unsigned int amount);
        void whoAmI(void);
        
    private:
        std::string _name;
    
};
#endif