/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:45:58 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 12:41:52 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie (std::string name) {
	this->setName(name);
}

Zombie::~Zombie ()
{ 
	std::cout 
	<< "I : " 
	<< this->getName()
	<< " (" << this->getType()
	<< ") Have been deleted :(."
	<< std::endl;
}

void 	Zombie::setName (std::string name)
{
	this->name = name;
}

void	Zombie::setType (std::string type)
{
	this->zombieType = type;
}

std::string	Zombie::getType () const
{
	return this->zombieType;
}

std::string Zombie::getName () const
{
	return this->name;
}

void		Zombie::announce (void) const
{
	std::cout 
		<< "<" 
		<< Zombie::getName() 
		<< " (" << Zombie::getType() 
		<< ")> Braaaaains...." 
		<< std::endl;
}