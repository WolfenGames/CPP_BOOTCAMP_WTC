/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:57:22 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 14:03:23 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <random>
#include <iostream>

ZombieHorde::ZombieHorde(int n)
{
	this->hoardSize = n;
	Hoard = new Zombie*[n];
	for (int i = 0; i < n; i++)
	{
		Hoard[i] = randomChump();
	}
}

ZombieHorde::~ZombieHorde(){
	for (int i = 0 ; i < this->hoardSize; i++)
	{
		delete Hoard[i];
	}
	delete[] Hoard;
}

Zombie		*ZombieHorde::newZombie (std::string name)
{
	Zombie	*nZombie = new Zombie(name);
	nZombie->setType(this->zombieType);
	return nZombie;
}

Zombie		*ZombieHorde::randomChump (void)
{
	RandomZombieType();
	Zombie *nz = newZombie(getZombieRandoName());
	nz->setType(this->zombieType);
	nz->announce();
	return nz;
}

void		ZombieHorde::RandomZombieType (void)
{
	std::string	zTpes[] = {
		"Human",
		"Old Human",
		"Dog",
		"Cat Fish",
		"NANA"
	};
	int zTypeI = rand() % sizeof(zTpes)/sizeof(zTpes[0]);
	this->zombieType = zTpes[zTypeI];
}

void		ZombieHorde::setZombieType (std::string type)
{
	this->zombieType = type;
}

std::string ZombieHorde::getZombieRandoName (void) const
{
	std::string	zNames[] = {
		"Pieter",
		"Gabriel",
		"Isard",
		"Swilson",
		"Richard"
	};
	int zNameI = rand() % sizeof(zNames)/sizeof(zNames[0]);
	return zNames[zNameI];
}

std::string	ZombieHorde::getZombieType (void) const
{
	return this->zombieType;
}