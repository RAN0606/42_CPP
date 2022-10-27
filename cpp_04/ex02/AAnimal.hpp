/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:59:42 by rliu              #+#    #+#             */
/*   Updated: 2022/10/27 13:54:50 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class AAnimal{
    protected:
        std::string     _type;
    public:
        AAnimal(void);
        AAnimal(const AAnimal &toCopie);
        virtual ~AAnimal(void);

        AAnimal &operator= (const AAnimal &toCopie);
        virtual void makeSound(void)const = 0;
        std::string getType(void) const;    
};

#endif