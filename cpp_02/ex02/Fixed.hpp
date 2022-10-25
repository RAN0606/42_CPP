/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:55:53 by rliu              #+#    #+#             */
/*   Updated: 2022/10/18 17:48:57 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed{
    private:
        int _nbFixedPoint;
        static int const _nbBitsFrac = 8;
        
    public:
        Fixed(void);
        Fixed(Fixed const &copie);
        Fixed(int const i);
        Fixed(float const f);
        ~Fixed(void);

        Fixed   &operator= (Fixed const &c);
        bool    operator> (Fixed const& a);
        bool    operator< (Fixed const& a);
        bool    operator>= (Fixed const& a);
        bool    operator<= (Fixed const& a);
        bool    operator== (Fixed const& a);
        bool    operator!= (Fixed const& a);

        Fixed   operator+ (Fixed const& a);
        Fixed   operator- (Fixed const& a);
        Fixed   operator* (Fixed const& a);
        Fixed   operator/ (Fixed const& a);

        Fixed   operator++(int);
        Fixed   operator--(int);
        
        Fixed   &operator++(void);
        Fixed   &operator--(void);
       
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        static Fixed&   min(Fixed& a, Fixed & b);
        static const Fixed&   min(Fixed const& a , Fixed const& b );
        static Fixed&   max(Fixed& a, Fixed & b);
        static const Fixed &   max(Fixed const& a , Fixed const& b );
};

std::ostream &operator<< (std::ostream& out, Fixed const &nb );

#endif
