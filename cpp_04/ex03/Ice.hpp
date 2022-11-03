/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:56:36 by rliu              #+#    #+#             */
/*   Updated: 2022/11/03 14:59:49 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria{
    public:
            Ice(void);
            Ice(const Ice &copy);
            ~Ice (void);

            Ice &operator= (const Ice &assigne);
            
            std::string const & getType() const; //Returns the materia type
            AMateria* clone() const;
            void use(ICharacter& target);
};

#endif