/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:50:18 by rliu              #+#    #+#             */
/*   Updated: 2022/09/30 11:58:28 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon{

    public:

        Weapon(std::string type);
        ~Weapon(void);

        std::string getType(void);
        void setType(std::string type);
    private:

        std::string _type;
};

#endif