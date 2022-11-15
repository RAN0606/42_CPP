/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:52:29 by rliu              #+#    #+#             */
/*   Updated: 2022/11/15 16:21:42 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <exception>
#include <cstdlib>
#include <stdint.h>
#include <climits>
#include <ostream>

class Convert{
        public:
                Convert(void);
                Convert(std::string data);
                Convert(Convert const &tocopy);
                ~Convert(void);

                operator char(void);
                operator int(void);
                operator float(void);
                operator double(void);

                std::string getData(void);
                void listDataType(void);

                class noDisplayException: public std::exception{
                        public:
                                virtual char const *what() const throw();
                };
                class impossibleException: public std::exception{
                        public:
                                virtual char const *what() const throw();
                };
            
                Convert &operator=(Convert const &toassigne);
                
        private:
                std::string _data;
};

#endif