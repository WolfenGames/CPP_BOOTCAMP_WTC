/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:01:39 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/07 13:28:41 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed (void) { std::cout << "Standard Constructor called." << std::endl; }
Fixed::~Fixed (void) { std::cout << "Deconstructor called." << std::endl; }

Fixed::Fixed (int const val)
{
	this->privateStore = val << this->fractolbytes;
}

Fixed::Fixed (float const val)
{
	this->privateStore = roundf(val * (1 << this->fractolbytes));
}

Fixed::Fixed(Fixed const &cpy)
{
    std::cout << "Copy Constructor called." << std::endl; 
    *this = cpy;
}

Fixed &Fixed::operator=(Fixed const &f)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this != &f)
	{
		this->privateStore = f.getRawBits();
	}
	return *this;
}

void    Fixed::setRawBits(const int i)
{
    std::cout << "setRawBit() operator called." << std::endl;
    this->privateStore = i;
}

int		Fixed::getRawBits (void) const
{
    std::cout << "getRawBit() operator called." << std::endl;
	return this->privateStore;
}

float	Fixed::toFloat (void) const
{
	return (float)this->privateStore / (1 << this->fractolbytes);
}

int		Fixed::toInt (void) const
{
	return (int)(this->privateStore >> this->fractolbytes);
}

std::ostream &operator<<(std::ostream &os, Fixed const &f)
{
	os << f.toFloat();
	return (os);
}