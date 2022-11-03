/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:51:28 by rliu              #+#    #+#             */
/*   Updated: 2022/11/03 17:28:51 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
    {   std::cout << "------basic test--------" << std::endl;
        IMateriaSource* src = new MateriaSource();  
        src->learnMateria(new Ice());  
        src->learnMateria(new Cure());
        
        ICharacter* me = new Character("me"); 
        AMateria* tmp; 
        
        tmp = src->createMateria("ice"); 
        me->equip(tmp);  
        tmp = src->createMateria("cure"); 
        me->equip(tmp); 
        
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);  
        me->use(1, *bob);  
        
        delete bob;
        delete me;
        delete src;
    }
    /*{
         std::cout << std::endl;
         std::cout << "-------deep copy test------" << std::endl;
         Character *person1 = new Character("person1");
         MateriaSource *src = new MateriaSource();
         AMateria *tmp;

         src->learnMateria(new Ice()); //deep copy
         tmp = src->createMateria("ice");
         person1->equip(tmp);
         src->learnMateria(new Cure()); //deep copy
         tmp = src->createMateria("cure");
         person1->equip(tmp);
         Character *person2 = new Character(*person1);
         Character person3(*person1);
         person1->use(0, *person1);//ice
         person1->use(1, *person1);//cure
         person1->use(2, *person1);
         person1->use(3, *person1);
         std::cout << std::endl;
         person1->unequip(0);
         person1->unequip(1);
         person1->use(0, *person1);//ice
         person1->use(1, *person1);
         person1->use(2, *person1);
         person1->use(3, *person1);
         delete person1;
         delete person2;
         delete src;
     }*/
    // {
    //     std::cout << std::endl;
    //     std::cout << "------full case test--------" << std::endl;
    //     ICharacter *p1 = new Character("p1");
    //     IMateriaSource *src = new MateriaSource();
    //     src->learnMateria(new Ice());
    //     src->learnMateria(new Cure());
    //     src->learnMateria(new Ice());
    //     src->learnMateria(new Cure());
    //     src->learnMateria(new Ice());

    //     AMateria *tmp1 = src->createMateria("ice");
    //     p1->equip(tmp1);
    //     AMateria *tmp2 = src->createMateria("cure");
    //     p1->equip(tmp2);
    //     AMateria *tmp3 = src->createMateria("ice");
    //     p1->equip(tmp3);
    //     AMateria *tmp4 = src->createMateria("cure");
    //     p1->equip(tmp4);
    //     AMateria *tmp5 = src->createMateria("ice");
    //     p1->equip(tmp5);
        
    //     p1->use(0, *p1);
    //     p1->use(1, *p1);
    //     p1->use(2, *p1);
    //     p1->use(3, *p1);
    //     p1->use(4, *p1);//is wrong ~
    //     delete p1;
    //     delete src;
    //     delete tmp5;
    // }
    std::cout << std::endl;

    return 0;
}