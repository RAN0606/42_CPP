/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:45:21 by rliu              #+#    #+#             */
/*   Updated: 2022/10/28 15:25:09 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include "ICharacter.hpp"
# include "Character.hpp"
class ICharacter;
class AMateria
{
    protected:
        std::string     _type;

    public:
            AMateria(std::string const & type);
            AMateria(void);
            AMateria(const AMateria &tocopie);
            virtual ~AMateria(void);

            AMateria &operator= (const AMateria &toassigne);
            
            std::string const & getType() const; //Returns the materia type
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
};


#endif