/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 17:33:11 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 17:33:11 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
    this->setName("Mamba");
    std::cout 
        << "Some random victim called "
        << this->getName() 
        << " just popped !" 
        << std::endl;
}

Victim::Victim(std::string name)
{
    this->setName(name);
    std::cout 
        << "Some random victim called "
        << this->getName() 
        << " just popped !" 
        << std::endl;
}

Victim::Victim(const Victim &cpy)
{
    *this = cpy;
}

Victim::~Victim(void)
{
    std::cout 
        << "Victim "
        << this->getName()
        << " just died for no apparent reason !"
        << std::endl;
}

Victim	&Victim::operator=(Victim const& cpy)
{
	if (this != &cpy)
	{
		this->setName(cpy.getName());
	}
	return *this;
}

std::ostream    &operator<<(std::ostream &os, const Victim &cpy)
{
	os 
	<< "I am " 
	<< cpy.getName()
	<< ", " 
	<< ", and I like otters ! "
	<< std::endl;
	return os;
}

std::string	Victim::getName(void) const
{
	return this->name;
}

void		Victim::getPolymorphed(void) const
{
    std::cout 
	<< this->getName()
	<< " has been turned into a cute little sheep !"
    << std::endl;	
}

void		Victim::setName(std::string name)
{
	this->name = name;
}