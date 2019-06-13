/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:52:52 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/07 19:20:14 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <random>

FragTrap::FragTrap()
{
	this->setName("FR4G-TP");
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(100);
	this->setMaxEnergyPoints(100);
	this->setLevel(1);
	this->setMeleeAttackDamage(30);
	this->setRangedAttackDamage(20);
	this->setArmorDamageReduction(5);
}

FragTrap::FragTrap(std::string name)
{
	this->m_Name = name;
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(100);
	this->setMaxEnergyPoints(100);
	this->setLevel(1);
	this->setMeleeAttackDamage(30);
	this->setRangedAttackDamage(20);
	this->setArmorDamageReduction(5);
}

FragTrap::FragTrap(const FragTrap &cpy)
{
	*this = cpy;
}

FragTrap::~FragTrap()
{
}

FragTrap	&FragTrap::operator=(const FragTrap &cpy)
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

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" 
		<< this->m_Name
		<< "> attacks "
		<< target
		<< " at range, causing <"
		<< this->m_RangedAttackDamage
		<< "> points of damage !" << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" 
		<< this->m_Name
		<< "> attacks "
		<< target
		<< " at range, causing <"
		<< this->m_RangedAttackDamage
		<< "> points of damage !" << std::endl;
}

void		FragTrap::takeDamage(u_int_t dmg)
{
	std::cout << "FR4G-TP <" 
		<< this->m_Name
		<< "> got hit! taking <"
		<< dmg
		<< "> points of damage !" << std::endl;
	this->m_HitPoints -= dmg;
	if (this->m_HitPoints <= 0)
	{
		std::cout << "FR4G-TP <" 
			<< this->m_Name
			<< " Has plummeted to his death, his life will not be missed"
			<< std::endl;
	}
}

void		FragTrap::beRepaired(u_int_t repair)
{
	if (this->m_HitPoints + repair > this->m_MaxHitPoints)
	{
		std::cout << "FR4G-TP <" 
			<< this->m_Name
			<< "> is already healed, however is feeling tickled pink.."
			 << std::endl;
	}
	else
	{
		this->m_HitPoints += repair;
		std::cout << "FR4G-TP <" 
			<< this->m_Name
			<< "> repaired for <"
			<< repair
			<< "> points of damage !" << std::endl;
	}
}

void		FragTrap::setName(std::string name)
{
	this->m_Name = name;
}

void		FragTrap::setHitPoints(u_int_t val)
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

void		FragTrap::setLevel(u_int_t level)
{
	this->m_level += level;
}

void		FragTrap::setMaxHitPoints(u_int_t val)
{
	this->m_MaxHitPoints = val;
}

void		FragTrap::setEnergyPoints(u_int_t val)
{
	this->m_EnergyPoints = val;
}

void		FragTrap::setMaxEnergyPoints(u_int_t val)
{
	this->m_MaxEnergy = val;
}

void		FragTrap::setMeleeAttackDamage(u_int_t val)
{
	this->m_MeleeAttackDamage = val;
}

void		FragTrap::setRangedAttackDamage(u_int_t val)
{
	this->m_RangedAttackDamage = val;
}

void		FragTrap::setArmorDamageReduction(u_int_t val)
{
	this->m_ArmorDamageReduction = val;
}


void		FragTrap::vaulthunter_dot_exe(std::string const &name)
{
	std::string	weapon[] = {
		"Skull of Gabriel",
		"Hair of Max",
		"Confidence of Geff",
		"The Sex appeal of a girraffe",
		"The might of a mouse"
	};

	std::string attribute[] = {
		"Mad cow disease",
		"Fear of labradors",
		"Sound of Music",
		"1000 skittles",
		"1 GIGANTIC gumball"
	};

	int		dmg = (rand() % 40) - 10;

	int		weap = rand() % (sizeof(weapon)/sizeof(weapon[0]));
	int		attr = rand() % (sizeof(attribute)/sizeof(attribute[0]));
	std::cout << "FR4G-TP <" 
		<< this->m_Name
		<< "> got hit! taking <"
		<< dmg
		<< "> "
		<< " AND HIT <"
		<< name
		<< "> with the power of!! "
		<< weapon[weap]
		<< " enhanced by "
		<< attribute[attr]
		<< "!!!11! pO1nt5 of d4m4g3 !" << std::endl;
}

std::string	FragTrap::getName(void)
{
	return this->m_Name;	
}

u_int_t		FragTrap::getHitPoints(void)
{
	return this->m_HitPoints;
}

u_int_t		FragTrap::getLevel(void)
{
	return this->m_level;
}

u_int_t		FragTrap::getMaxHitPoints(void)
{
	return this->m_MaxHitPoints;
}

u_int_t		FragTrap::getEnergyPoints(void)
{
	return this->m_EnergyPoints;
}

u_int_t		FragTrap::getMaxEnergyPoints(void)
{
	return this->m_MaxEnergy;
}

u_int_t		FragTrap::getMeleeAttackDamage(void)
{
	return this->m_MeleeAttackDamage;
}

u_int_t		FragTrap::getRangedAttackDamage(void)
{
	return this->m_RangedAttackDamage;
}

u_int_t		FragTrap::getArmorDamageReduction(void)
{
	return this->m_ArmorDamageReduction;
}
