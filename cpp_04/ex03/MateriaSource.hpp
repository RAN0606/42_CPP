/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource .hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:32:04 by rliu              #+#    #+#             */
/*   Updated: 2022/10/27 16:45:21 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_source[4];
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &src);
        virtual ~MateriaSource(void);
        
        MateriaSource &	operator=(MateriaSource const & rhs);
        
        void learnMateria(AMateria* );
        AMateria* createMateria(std::string const & type);
};

#endif