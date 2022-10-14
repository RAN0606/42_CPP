/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:37:20 by rliu              #+#    #+#             */
/*   Updated: 2022/10/14 21:33:14 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed squareTri(Point const a, Point const b, Point const c){
    Fixed squareT;
    squareT = ((a.getX()*b.getY())-(b.getX()*a.getY()))
                + ((b.getX()*c.getY()) - c.getX()*b.getY())
                + ((c.getX()*a.getY()) - (a.getX()*c.getY()));
    squareT = squareT * Fixed(0.5f);
    return (squareT);
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    if (squareT(a, b, c) = (squareT(a, b, point) + squareT(a, c, point) + squareT(b, c, point)))
        return (True);
    return (False);    
}