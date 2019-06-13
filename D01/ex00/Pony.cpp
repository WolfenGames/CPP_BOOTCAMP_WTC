/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:31:18 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 13:05:30 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() {}

Pony::~Pony(){}

void	Pony::setSpeak (std::string speak)
{
	this->speak = speak;
}

void	Pony::setName (std::string name)
{
	this->name = name;
}

void	Pony::setAge (int	age)
{
	this->age = age;
}

std::string	Pony::getName (void) const
{
	return this->name;
}

std::string	Pony::makeSpeak (void) const
{
	return this->speak;
}

int				Pony::getAge(void) const
{
	return this->age;
}