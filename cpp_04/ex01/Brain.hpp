/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:02:45 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 19:18:16 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
class Brain{
    public:
        Brain(void);
        Brain(const Brain &toCopie);
        ~Brain(void);
        
        Brain &operator=(const Brain &toAssigne);
        
        std::string ideas[100];

        void addIdea(std::string idea);
        void printIdea(void);    
};

#endif