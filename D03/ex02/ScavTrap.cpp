/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 19:56:41 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/07 19:56:41 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(void)
{
    this->setName("5C4V-TP");
    this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(50);
	this->setMaxEnergyPoints(50);
	this->setLevel(1);
	this->setMeleeAttackDamage(20);
	this->setRangedAttackDamage(15);
	this->setArmorDamageReduction(3);
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    this->setType("5C4V-TP");
    this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(50);
	this->setMaxEnergyPoints(50);
	this->setLevel(1);
	this->setMeleeAttackDamage(20);
	this->setRangedAttackDamage(15);
	this->setArmorDamageReduction(3);
}

ScavTrap::ScavTrap(const ScavTrap &cpy):ClapTrap(cpy)
{
	this->setType("5C4V-TP");
}

ScavTrap::~ScavTrap(void){}

void		ScavTrap::challengeNewcomer(void)
{
	std::string	challenge[] = {
		"Poke a badger with a spoon",
		"Mark a first year while eating a banana continously",
		"Stare at Trevor till he cries",
		"Fix all the mac's, and wait till chaos arises because everything is working",
		"Watch the whole LOR triology and write an essay about butterflies",
		"Kiss your first crush, If you cant find them, dance on the spot"
	};
	int	challengeIndex = rand() % (sizeof(challenge)/sizeof(challenge[0]));
	std::cout
		<< "5C4V-TP <"
		<< this->getName()
		<< "> has a challenge for you :: "
		<< challenge[challengeIndex]
		<< std::endl;
}