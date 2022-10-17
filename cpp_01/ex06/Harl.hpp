/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:24:18 by rliu              #+#    #+#             */
/*   Updated: 2022/10/17 17:24:25 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>

class Harl{
    
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
        void complain(int index);
    
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif