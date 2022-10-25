/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:37:20 by rliu              #+#    #+#             */
/*   Updated: 2022/10/18 19:18:25 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float product(Point p1, Point p2, Point p3) {
    return ((p2.getX().toFloat() - p1.getX().toFloat()) * (p3.getY().toFloat() - p1.getY().toFloat())
         - (p2.getY().toFloat() - p1.getY().toFloat())* (p3.getX().toFloat() - p1.getX().toFloat()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {

    if((product(a, b, point) > 0 && product(b, c, point) > 0 && product(c, a, point) > 0)
    || (product(a, b, point) < 0 && product(b, c, point) < 0 && product(c, a, point) < 0))    return (true);
    return (false);
}
