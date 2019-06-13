/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:12:31 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/06 14:33:15 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed	(void);
        Fixed	(const Fixed&);
		Fixed	(int const);
		Fixed	(float const);
        ~Fixed 	(void);

        Fixed	&operator=(const Fixed&);
		Fixed	&operator++(void);
		Fixed	&operator--(void);
        Fixed	operator++(const int);
		Fixed	operator--(const int);
		Fixed	operator*(const Fixed&);
		Fixed	operator/(const Fixed&);
		Fixed	operator+(const Fixed&);
		Fixed	operator-(const Fixed&);
		bool	operator>(const Fixed&) const;
		bool	operator<(const Fixed&) const;
		bool	operator>=(const Fixed&) const;
		bool	operator<=(const Fixed&) const;
		bool	operator==(const Fixed&) const;
		bool	operator!=(const Fixed&) const;

		int		toInt (void) const;
		int     getRawBits (void) const;

		float	toFloat (void) const;

        void    setRawBits (int const);

		static 	Fixed max(const Fixed&, const Fixed&);
		friend 	std::ostream &operator<<(std::ostream &,Fixed const &);

    private:
        int 	privateStore;
        static const int fractolbytes = 8;
};

#endif