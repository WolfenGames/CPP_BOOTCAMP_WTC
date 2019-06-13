/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 17:41:44 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 17:41:44 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
	this->setName("Dimitri");
	std::cout 
	<< "Zog zog." 
	<< std::endl;
}

Peon::Peon(std::string name)
{
	this->setName(name);
	std::cout 
	<< "Zog zog." 
	<< std::endl;
}

Peon::Peon(const Peon &cpy)
{
	*this = cpy;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon	&Peon::operator=(const Peon &cpy)
{
	if (this != &cpy)
	{
		this->setName(cpy.getName());
	}
	return *this;
}

void	Peon::getPolymorphed(void) const
{
	std::cout
	<< this->getName()
	<< " has been turned into a pinky pony !"
	<< std::endl;
}