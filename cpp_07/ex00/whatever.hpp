/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:34:43 by rliu              #+#    #+#             */
/*   Updated: 2022/11/22 16:48:15 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
};

template<typename T>
T const &max(T &a, T &b){
    return ((a > b)? b : a);
};

template<typename T>
T const &min(T &a, T &b){
    return ((a < b)? a : b);
};

#endif