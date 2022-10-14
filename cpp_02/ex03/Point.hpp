/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:23:26 by rliu              #+#    #+#             */
/*   Updated: 2022/10/14 21:55:14 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP

# define POINT_HPP
# include "Fixed.hpp"

class Point{
    private:
        Fixed const _fixedX;
        Fixed const _fixedY; 

    public:
        Point(void);
        Point(float fx, float fy);
        Point(Point const &copiePoint);
        ~Point(void);

        Point operator= (Point &assignPoint);
        /*void setX(float paraX);
        void setY(float ParaY);*/
        Fixed getX(void);
        Fixed getY(void);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif