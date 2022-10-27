/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:59:42 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 17:03:54 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal{
    protected:
        std::string     _type;
    public:
        Animal(void);
        Animal(const Animal &toCopie);
        virtual ~Animal(void);

        Animal &operator= (const Animal &toCopie);
        virtual void makeSound(void)const;
        std::string getType(void) const;    
};

#endif