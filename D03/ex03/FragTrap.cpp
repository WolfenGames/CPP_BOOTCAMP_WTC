/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 19:56:29 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/07 19:56:29 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(void):ClapTrap()
{
	std::cout << "FR4G-TP Created" << std::endl;
	this->setName("FR4G-TP");
    this->setType("FR4G-TP");
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(100);
	this->setMaxEnergyPoints(100);
	this->setLevel(1);
	this->setMeleeAttackDamage(30);
	this->setRangedAttackDamage(20);
	this->setArmorDamageReduction(5);
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << "FR4G-TP Created" << std::endl;
	this->setName(name);
    this->setType("FR4G-TP");
	this->setHitPoints(100);
	this->setMaxHitPoints(100);
	this->setEnergyPoints(100);
	this->setMaxEnergyPoints(100);
	this->setLevel(1);
	this->setMeleeAttackDamage(30);
	this->setRangedAttackDamage(20);
	this->setArmorDamageReduction(5);
}

FragTrap::FragTrap(const FragTrap& cpy):ClapTrap(cpy)
{
	std::cout << "FR4G-TP Copied." << std::endl;
    this->setType("FR4G-TP");
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP Destroyed - Captain Hammerjack thanks you!" << std::endl;
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
		<< this->getName()
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
    this->setEnergyPoints(
        (this->getEnergyPoints() - 25) >= 0 ?
        this->getEnergyPoints() - 25 : 0);
}
