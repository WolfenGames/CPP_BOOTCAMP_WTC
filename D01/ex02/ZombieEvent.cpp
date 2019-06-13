/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:54:35 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 13:05:05 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <random>

ZombieEvent::ZombieEvent (void) {}
ZombieEvent::~ZombieEvent (void) {}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*nZombie = new Zombie(name);
	nZombie->setType(this->zombieType);
	return nZombie;
}

Zombie		*ZombieEvent::randomChump (void)
{
	RandomZombieType();
	Zombie *nz = newZombie(getZombieRandoName());
	nz->setType(this->zombieType);
	nz->announce();
	return nz;
}

void		ZombieEvent::setZombieType (std::string type)
{
	this->zombieType = type;
}

void		ZombieEvent::RandomZombieType (void)
{
	std::string	zTpes[4] = {
		"Human",
		"Old Human",
		"Dog",
		"Cat Fish"
	};
	int zTypeI = rand() % sizeof(zTpes)/sizeof(zTpes[0]);
	this->zombieType = zTpes[zTypeI];
}

std::string		ZombieEvent::getZombieRandoName (void) const
{
	std::string	zNames[] = {
		"Gabriel",
		"Isard",
		"Swilson",
		"Pieter",
		"Richard"
	};
	int zNameI = rand() % sizeof(zNames)/sizeof(zNames[0]);
	return zNames[zNameI];
}
