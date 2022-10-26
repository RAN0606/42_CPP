/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:37:11 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 17:42:21 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public:
        WrongCat(void);
        WrongCat(const WrongCat &toCopie);
        virtual ~WrongCat(void);

        WrongCat &operator = (const WrongCat &toAssigne);
       void makeSound(void) const;
      //  std::string getType(void) const;
};

#endif