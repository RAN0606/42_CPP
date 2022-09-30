/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:49:15 by rliu              #+#    #+#             */
/*   Updated: 2022/09/30 14:26:32 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {

    public:
        HumanB(std::string name);
        ~HumanB(void);

        void setWeapon(Weapon& club);
        void attack(void);

    private:

        std::string _name;
        Weapon      *_club;
};

#endif