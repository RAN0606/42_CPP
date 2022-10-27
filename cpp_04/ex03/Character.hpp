/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:37:57 by rliu              #+#    #+#             */
/*   Updated: 2022/10/27 16:38:12 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#define INVENTORY 4

class Character: public ICharacter
{
    private:
        std::string	_name;
        AMateria *_amatria[INVENTORY];
        
    public:
        Character(void);
        Character(std::string const &name);
        Character(Character const &src);
        virtual ~Character();
        
        Character &	operator=(Character const & rhs);
        
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif