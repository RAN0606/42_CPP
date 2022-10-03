/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:24:18 by rliu              #+#    #+#             */
/*   Updated: 2022/10/03 18:12:09 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

class Harl{
    
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
    
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif