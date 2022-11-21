/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:36:43 by rliu              #+#    #+#             */
/*   Updated: 2022/11/16 17:46:36 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
/*dynamic_cast: Lorsque la classe parent convertit en classe enfant,
 la classe parent doit avoir des fonctions virtuelles*/
class Base
{
    public:
        virtual ~Base(void);
};
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void);
void identify(Base * p);
void identify( Base & p);

#endif

