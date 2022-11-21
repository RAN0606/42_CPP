/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:30:45 by rliu              #+#    #+#             */
/*   Updated: 2022/11/21 18:57:23 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template<typename T>
void iter(T *array, int size, void (*f)(T& item)){
    for (int i = 0; i < size ; i++)
            (*f)(array[i]);
}

template<typename T>
void  doubleitem(T &item)
{
    item = item + item;
}

template<typename T>
void print(T &item){
    std::cout << item << std::endl;
}
#endif