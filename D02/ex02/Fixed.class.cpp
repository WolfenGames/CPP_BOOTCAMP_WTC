/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:01:39 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/07 13:25:21 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed (void) 
{
	this->privateStore = 0;
}

Fixed::~Fixed (void) {}

Fixed::Fixed (int const val)
{
	this->privateStore = val << this->fractolbytes;
}

Fixed::Fixed (float const val)
{
	this->privateStore = roundf(val * (1 << this->fractolbytes));
}

Fixed::Fixed (Fixed const &cpy)
{
    *this = cpy;
}

Fixed &Fixed::operator = (Fixed const &f)
{
    if (this != &f)
		this->privateStore = f.getRawBits();
	return *this;
}

Fixed	Fixed::operator * (Fixed const &f)
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator + (Fixed const &f)
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed	Fixed::operator - (Fixed const &f)
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed	Fixed::operator ++ (const int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed	&Fixed::operator ++ (void)
{
	this->privateStore++;
	return *this;
}

Fixed	Fixed::operator -- (const int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed	&Fixed::operator -- (void)
{
	this->privateStore--;
	return *this;
}

Fixed	Fixed::max(const Fixed &f1, const Fixed &f2)
{
	float a = f1.privateStore, b = f2.privateStore;
	return (a > b) ? f1 : f2;
}

void    Fixed::setRawBits(const int i)
{
    this->privateStore = i;
}

int		Fixed::getRawBits (void) const
{
 	return this->privateStore;
}

float	Fixed::toFloat (void) const
{
	return ((float)(this->privateStore) / (1 << this->fractolbytes));
}

int		Fixed::toInt (void) const
{
	return ((int)(this->privateStore >> this->fractolbytes));
}

std::ostream &operator<<(std::ostream &os, Fixed const &f)
{
	os << f.toFloat();
	return (os);
}

bool	Fixed::operator<=(const Fixed& f) const
{
	return (this->privateStore <=f.privateStore);
}

bool	Fixed::operator!=(const Fixed& f) const
{
	return (this->privateStore != f.privateStore);
}

bool	Fixed::operator<(const Fixed& f) const
{
	return (this->privateStore < f.privateStore);
}

bool	Fixed::operator==(const Fixed& f) const
{
	return (this->privateStore == f.privateStore);
}

bool	Fixed::operator>(const Fixed& f) const
{
	return (this->privateStore > f.privateStore);
}

bool	Fixed::operator>=(const Fixed& f) const
{
	return (this->privateStore >= f.privateStore);
}
