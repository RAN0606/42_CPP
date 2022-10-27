/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:59:42 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 17:27:16 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal{
    protected:
        std::string     _type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &toCopie);
        virtual ~WrongAnimal(void);

        WrongAnimal &operator= (const WrongAnimal &toCopie);
        virtual void makeSound(void)const;
        std::string getType(void) const;    
};

#endif