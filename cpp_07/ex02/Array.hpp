/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:21:01 by rliu              #+#    #+#             */
/*   Updated: 2022/11/21 19:53:31 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <exception>

template <typename T = int >
class Array{
    private:
        T   *_array;
        unsigned int _size;
        
    public:
        Array<T>(void): _array(new T[0]), _size(0){};
        Array<T>(unsigned int n) :_array (new T[n]),_size (n){}
        Array<T>(Array const & src){
            *this =  src;
        }
        Array<T> &operator=(Array const &src){
            if (this == &src)
                return (*this);
            if (this->_array)
                delete this->_array;
            this->_array = new T[src._size];
            this->_size = src._size;
            for (unsigned int i = 0; i< this->_size ; i++)
                this->_array[i] = src._array[i]; 
            return *this;
        }
        ~Array<T>(void){
            if (this->_array)
                delete[] this->_array;
        }
        
        T &operator[](unsigned int index){   //chose one of array
            if (index >= this->_size)
                throw Array::IndexIsLimite();
            return(this->_array[index]);
        }

        unsigned int const& size(void) const {
            return this->_size;
        }

        class IndexIsLimite:public std::exception {
                const char * what () const throw() 
                { return "ERROR: Indxt is limite!";}
        };
        
};


#endif