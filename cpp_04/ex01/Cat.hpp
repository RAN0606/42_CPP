/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:37:11 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 18:54:35 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    public:
        Cat(void);
        Cat(const Cat &toCopie);
        virtual ~Cat(void);

        Cat &operator = (const Cat &toAssigne);
        void makeSound(void) const;
      //  std::string getType(void) const;
        void addIdea(std::string idea);
        void printIdea(void);
        
    private:
        Brain   *catBrain;
};

#endif