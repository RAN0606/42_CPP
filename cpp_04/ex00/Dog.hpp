/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:50:06 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 16:57:06 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog(void);
        Dog(const Dog &toCopie);
        virtual ~Dog(void);

        Dog &operator = (const Dog &toAssigne);
        void makeSound(void) const;
       // std::string getType(void) const;
};

#endif