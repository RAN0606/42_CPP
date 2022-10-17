/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:37:20 by rliu              #+#    #+#             */
/*   Updated: 2022/10/17 19:12:55 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed squareTri(Point a, Point b, Point  c){
    Fixed squareT;
    squareT = ((a.getX()*b.getY())-(b.getX()*a.getY()))
                + ((b.getX()*c.getY()) - c.getX()*b.getY())
                + ((c.getX()*a.getY()) - (a.getX()*c.getY()));
    squareT = squareT * Fixed(0.5f);
    return (squareT);
}

bool bsp( Point  a, Point  b, Point  c, Point  point){
    if (squareTri(a, b, c) == (squareTri(a, b, point) + squareTri(a, c, point) + squareTri(b, c, point)))
        return (true);
    return (false);    
}