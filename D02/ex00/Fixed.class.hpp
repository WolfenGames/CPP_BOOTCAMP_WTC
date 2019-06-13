/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:12:31 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/06 10:11:13 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>

class Fixed {
    public:
        Fixed (void);
        Fixed (const Fixed &);
        ~Fixed (void);
        Fixed &operator=(const Fixed &);
        int     getRawBits(void) const;
        void    setRawBits(int const);

    private:
        int privateStore;
        static const int fractolbytes = 8;
};

#endif