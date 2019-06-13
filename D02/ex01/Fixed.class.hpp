/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:12:31 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/07 13:28:19 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed (void);
        Fixed (const Fixed &);
		Fixed (int const val);
		Fixed (float const val);
        ~Fixed (void);

        Fixed &operator=(const Fixed &);
        
		int		toInt (void) const;
		int     getRawBits (void) const;

		float	toFloat (void) const;

        void    setRawBits (int const);

		friend std::ostream &operator<<(std::ostream &,Fixed const &);

    private:
        int privateStore;
        static const int fractolbytes = 8;
};

#endif