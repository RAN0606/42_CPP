/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:17:59 by rliu              #+#    #+#             */
/*   Updated: 2022/11/23 15:24:52 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <iterator>
#include <cmath>
#include <list>

class Span{
    public:
        	Span(void);
            Span(unsigned int n);
            Span(Span &copie);
            Span &operator=(Span &assigne);
            ~Span(void);

            void    addNumber(int n);
            int     shortestSpan(void);
            int     longestSpan(void);

            class fullVectorException: public std::exception{
                char const *what() const throw();
            };
            class noSpanException: public std::exception{
                char const *what() const throw();
            };
   
    private:
        std::list<int>		_intList;
        unsigned int        _size;
        unsigned int        _nbSaved;
};

#endif
