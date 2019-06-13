/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 17:57:04 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 17:57:04 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	this->setName("Varys");
    this->setTitle("Kushka");
    std::cout 
	<< this->getName()
	<< ", "
	<< this->getTitle()
	<< ", is born !"
    << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->setName(name);
    this->setTitle(title);
    std::cout 
	<< this->getName()
	<< ", "
	<< this->getTitle()
	<< ", is born !"
    << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &cpy)
{
	*this = cpy;
}

Sorcerer::~Sorcerer(void)
{
    std::cout 
	<< this->getName()
	<< ", " 
	<< this->getTitle()
    << ", is dead. Consequences will never be the same !"
	<< std::endl;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &cpy)
{
	if (this != &cpy)
	{
		this->setName(cpy.getName());
		this->setTitle(cpy.getTitle());
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &cpy)
{
    os 
	<< "I am " 
	<< cpy.getName() 
	<< ", " 
	<< cpy.getTitle()
    << ", and I like ponies ! "
	<< std::endl;
    return (os);
}

void	Sorcerer::polymorph(const Victim &vic)
{
	vic.getPolymorphed();
}

std::string	Sorcerer::getName(void) const
{
	return this->name;
}

std::string	Sorcerer::getTitle(void) const
{
	return this->title;
}

void	Sorcerer::setName(std::string name)
{
	this->name = name;
}

void	Sorcerer::setTitle(std::string title)
{
	this->title = title;
}