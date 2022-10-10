/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:55:53 by rliu              #+#    #+#             */
/*   Updated: 2022/10/10 18:50:54 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
    private:
        int _nbFixedPoint;
        static int const _nbBitsFrac = 8;
        
    public:
        Fixed(void);
        Fixed(Fixed &copie);
        Fixed(int const i);
        Fixed(float const f);
        ~Fixed(void);

        Fixed   operator= (Fixed c);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

#endif
