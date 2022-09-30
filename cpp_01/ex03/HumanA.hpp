/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:31:11 by rliu              #+#    #+#             */
/*   Updated: 2022/09/30 14:16:23 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {

    public:
        HumanA(std::string name, Weapon& club);
        ~HumanA(void);

        void attack(void);

    private:

        std::string _name;
        Weapon&     _club;
};

#endif