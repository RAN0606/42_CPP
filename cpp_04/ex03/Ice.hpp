/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:56:36 by rliu              #+#    #+#             */
/*   Updated: 2022/10/27 16:56:46 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
class Ice : public AMateria{
    protected:

    public:
            Ice(std::string const & type);
            Ice(void);
            Ice(const Ice &copy);
            ~Ice (void);

            Ice &operator= (const Ice &assigne);
            
            std::string const & getType() const; //Returns the materia type
            AMateria* clone();
            void use(ICharacter& target);
};

#endif