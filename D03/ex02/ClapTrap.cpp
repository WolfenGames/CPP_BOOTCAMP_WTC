/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 19:47:40 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/07 19:47:40 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>
#include <random>

ClapTrap::ClapTrap(void)
{
}

ClapTrap::ClapTrap(std::string name)
{
	this->m_Name = name;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	*this = cpy;
}

ClapTrap::~ClapTrap(void)
{
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &cpy)
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

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout
        << this->type 
        << " <" 
		<< this->m_Name
		<< "> attacks "
		<< target
		<< " at range, causing <"
		<< this->m_RangedAttackDamage
		<< "> points of damage !" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	std::cout
        << this->type 
        << " <" 
		<< this->m_Name
		<< "> attacks "
		<< target
		<< " at range, causing <"
		<< this->m_RangedAttackDamage
		<< "> points of damage !" << std::endl;
}

void		ClapTrap::takeDamage(u_int_t dmg)
{
	std::cout
        << this->type 
        << " <" 
		<< this->m_Name
		<< "> got hit! taking <"
		<< dmg
		<< "> points of damage !" << std::endl;
	this->m_HitPoints -= dmg - ((dmg - this->m_ArmorDamageReduction <= 0) ? 0 : this->m_ArmorDamageReduction);
	if (this->m_HitPoints <= 0)
	{
		std::cout
            << this->type 
            << " <" 
			<< this->m_Name
			<< " Has plummeted to his death, his life will not be missed"
			<< std::endl;
	}
}

void		ClapTrap::beRepaired(u_int_t repair)
{
	if (this->m_HitPoints + repair > this->m_MaxHitPoints)
	{
		std::cout
            << this->type 
            << " <" 
			<< this->m_Name
			<< "> is already healed, however is feeling tickled pink.."
			 << std::endl;
	}
	else
	{
		this->m_HitPoints += repair;
		std::cout
            << this->type 
            << " <" 
			<< this->m_Name
			<< "> repaired for <"
			<< repair
			<< "> points of damage !" << std::endl;
	}
}

void		ClapTrap::setName(std::string name)
{
	this->m_Name = name;
}

void		ClapTrap::setHitPoints(u_int_t val)
{
	if (this->getMaxHitPoints() <= val)
		this->m_HitPoints = val;
	else
	{
		this->setMaxHitPoints(val);
		this->m_HitPoints = val;
		std::cout 
		<< "<"
		<< this->getName()
		<< "> I am max Hitpoints dummy" 
		<< std::endl;
	}
}

void		ClapTrap::setLevel(u_int_t level)
{
	this->m_level += level;
}

void		ClapTrap::setMaxHitPoints(u_int_t val)
{
	this->m_MaxHitPoints = val;
}

void		ClapTrap::setEnergyPoints(u_int_t val)
{
	this->m_EnergyPoints = val;
}

void		ClapTrap::setMaxEnergyPoints(u_int_t val)
{
	this->m_MaxEnergy = val;
}

void		ClapTrap::setMeleeAttackDamage(u_int_t val)
{
	this->m_MeleeAttackDamage = val;
}

void		ClapTrap::setRangedAttackDamage(u_int_t val)
{
	this->m_RangedAttackDamage = val;
}

void		ClapTrap::setArmorDamageReduction(u_int_t val)
{
	this->m_ArmorDamageReduction = val;
}

void        ClapTrap::setType(std::string type)
{
    this->type = type;
}

std::string	ClapTrap::getName(void)
{
	return this->m_Name;	
}

u_int_t		ClapTrap::getHitPoints(void)
{
	return this->m_HitPoints;
}

u_int_t		ClapTrap::getLevel(void)
{
	return this->m_level;
}

u_int_t		ClapTrap::getMaxHitPoints(void)
{
	return this->m_MaxHitPoints;
}

u_int_t		ClapTrap::getEnergyPoints(void)
{
	return this->m_EnergyPoints;
}

u_int_t		ClapTrap::getMaxEnergyPoints(void)
{
	return this->m_MaxEnergy;
}

u_int_t		ClapTrap::getMeleeAttackDamage(void)
{
	return this->m_MeleeAttackDamage;
}

u_int_t		ClapTrap::getRangedAttackDamage(void)
{
	return this->m_RangedAttackDamage;
}

u_int_t		ClapTrap::getArmorDamageReduction(void)
{
	return this->m_ArmorDamageReduction;
}
