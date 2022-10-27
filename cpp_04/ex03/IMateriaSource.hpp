/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSourc.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:31:38 by rliu              #+#    #+#             */
/*   Updated: 2022/10/27 16:31:40 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;
/*(interface)*/
class IMateriaSource
{
       public:
              virtual ~IMateriaSource() {}
              virtual void learnMateria(AMateria* ) = 0;
              virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif