/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:34:43 by rliu              #+#    #+#             */
/*   Updated: 2022/11/21 18:34:25 by rliu             ###   ########.fr       */
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
    return ((a > b)? a : b);
};

template<typename T>
T const &min(T &a, T &b){
    return ((a < b)? a : b);
};

#endif