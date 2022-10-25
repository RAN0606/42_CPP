/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:05:16 by rliu              #+#    #+#             */
/*   Updated: 2022/10/25 13:05:00 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap &fragTrapCopie);
        ~FragTrap(void);

        FragTrap &operator=(const FragTrap &fragTrapAssigne);

        void attack(const std::string &target);
        void highFivesGuys(void);
        void setHit(void);
        void setEnergy(void);
        void setDamage(void);
        
};

#endif