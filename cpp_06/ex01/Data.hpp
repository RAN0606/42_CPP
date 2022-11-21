/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:13:33 by rliu              #+#    #+#             */
/*   Updated: 2022/11/16 17:32:46 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>
class Data {
    private:
        char _c;
        int _i;
        double _d;
        
    public:
        Data(void);
	    Data(char const c, int const i, double d);
		Data(Data const & src);
		virtual ~Data(void);

		Data &	operator=(Data const & rhs);

        char const &getChar(void)const;
        int const &getInt(void)const;
        double const &getDouble(void)const;
};
/*uintptr_t：unsigned integer type capable of holding a pointer
serialize :l'objet est converti dans un format qui peut être conservé ou transféré.*/
uintptr_t serialize(Data* ptr); 
Data* deserialize(uintptr_t raw);

#endif
