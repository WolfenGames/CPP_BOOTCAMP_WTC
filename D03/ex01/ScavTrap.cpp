/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:52:52 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 10:55:03 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <random>

ScavTrap::ScavTrap()
{
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(50);
	this->setMaxEnergyPoints(50);
	this->setLevel(1);
	this->setMeleeAttackDamage(20);
	this->setRangedAttackDamage(15);
	this->setArmorDamageReduction(3);
}

ScavTrap::ScavTrap(std::string name)
{
	this->m_Name = name;
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(50);
	this->setMaxEnergyPoints(50);
	this->setLevel(1);
	this->setMeleeAttackDamage(20);
	this->setRangedAttackDamage(15);
	this->setArmorDamageReduction(3);
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
	*this = cpy;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &cpy)
{
	this->setName(cpy.m_Name);
	this->setLevel(cpy.m_level);
	this->setMaxEnergyPoints(cpy.m_MaxEnergy);
	this->setMaxHitPoints(cpy.m_MaxHitPoints);
	this->setEnergyPoints(cpy.m_EnergyPoints);
	this->setRangedAttackDamage(cpy.m_RangedAttackDamage);
	this->setMeleeAttackDamage(cpy.m_MeleeAttackDamage);
	this->setArmorDamageReduction(cpy.m_ArmorDamageReduction);
	return *this;
}

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "5C4V-TP <" 
		<< this->m_Name
		<< "> attacks "
		<< target
		<< " at range, causing <"
		<< this->m_RangedAttackDamage
		<< "> points of damage !" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "5C4V-TP <" 
		<< this->m_Name
		<< "> attacks "
		<< target
		<< " causing <"
		<< this->m_MeleeAttackDamage
		<< "> points of damage !" << std::endl;
}

void		ScavTrap::takeDamage(u_int_t dmg)
{
	std::cout << "5C4V-TP <" 
		<< this->m_Name
		<< "> got hit! taking <"
		<< dmg
		<< "> points of damage !" << std::endl;
	this->m_HitPoints -= dmg - ((dmg - this->m_ArmorDamageReduction <= 0) ? 0 : this->m_ArmorDamageReduction);
	if (this->m_HitPoints <= 0)
	{
		std::cout << "5C4V-TP <" 
			<< this->m_Name
			<< " Has plummeted to his death, his life will not be missed"
			<< std::endl;
	}
}

void		ScavTrap::beRepaired(u_int_t repair)
{
	if (this->m_HitPoints + repair > this->m_MaxHitPoints)
	{
		std::cout << "5C4V-TP <" 
			<< this->m_Name
			<< "> is already healed, however is feeling tickled pink.."
			 << std::endl;
	}
	else
	{
		this->m_HitPoints += repair;
		std::cout << "5C4V-TP <" 
			<< this->m_Name
			<< "> repaired for <"
			<< repair
			<< "> points of damage !" << std::endl;
	}
}

void		ScavTrap::setName(std::string name)
{
	this->m_Name = name;
}

void		ScavTrap::setHitPoints(u_int_t val)
{
	this->m_HitPoints = val;
}

void		ScavTrap::setLevel(u_int_t level)
{
	this->m_level += level;
}

void		ScavTrap::setMaxHitPoints(u_int_t val)
{
	this->m_MaxHitPoints = val;
}

void		ScavTrap::setEnergyPoints(u_int_t val)
{
	this->m_EnergyPoints = val;
}

void		ScavTrap::setMaxEnergyPoints(u_int_t val)
{
	this->m_MaxEnergy = val;
}

void		ScavTrap::setMeleeAttackDamage(u_int_t val)
{
	this->m_MeleeAttackDamage = val;
}

void		ScavTrap::setRangedAttackDamage(u_int_t val)
{
	this->m_RangedAttackDamage = val;
}

void		ScavTrap::setArmorDamageReduction(u_int_t val)
{
	this->m_ArmorDamageReduction = val;
}

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

std::string	ScavTrap::getName(void)
{
	return this->m_Name;	
}

u_int_t		ScavTrap::getHitPoints(void)
{
	return this->m_HitPoints;
}

u_int_t		ScavTrap::getLevel(void)
{
	return this->m_level;
}

u_int_t		ScavTrap::getMaxHitPoints(void)
{
	return this->m_MaxHitPoints;
}

u_int_t		ScavTrap::getEnergyPoints(void)
{
	return this->m_EnergyPoints;
}

u_int_t		ScavTrap::getMaxEnergyPoints(void)
{
	return this->m_MaxEnergy;
}

u_int_t		ScavTrap::getMeleeAttackDamage(void)
{
	return this->m_MeleeAttackDamage;
}

u_int_t		ScavTrap::getRangedAttackDamage(void)
{
	return this->m_RangedAttackDamage;
}

u_int_t		ScavTrap::getArmorDamageReduction(void)
{
	return this->m_ArmorDamageReduction;
}
