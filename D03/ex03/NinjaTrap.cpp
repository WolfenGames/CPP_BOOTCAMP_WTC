/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 20:26:41 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/07 20:26:41 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap(void):ClapTrap()
{
	std::cout << "N1NJ4-TP Created." << std::endl;
    this->setName("N1NJ4-TP");
    this->setType("N1NJ4-TP");
    this->setHitPoints(60);
	this->setMaxHitPoints(60);
	this->setEnergyPoints(120);
	this->setMaxEnergyPoints(120);
	this->setLevel(1);
	this->setMeleeAttackDamage(60);
	this->setRangedAttackDamage(5);
	this->setArmorDamageReduction(0);
}

NinjaTrap::NinjaTrap(std::string name):ClapTrap(name)
{
	std::cout << "N1NJ4-TP Created." << std::endl;
    this->setType("N1NJ4-TP");
    this->setHitPoints(60);
	this->setMaxHitPoints(60);
	this->setEnergyPoints(120);
	this->setMaxEnergyPoints(120);
	this->setLevel(1);
	this->setMeleeAttackDamage(60);
	this->setRangedAttackDamage(5);
	this->setArmorDamageReduction(0);
}

NinjaTrap::NinjaTrap(const NinjaTrap &cpy):ClapTrap(cpy)
{
	std::cout << "N1NJ4-TP Copied." << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "N1NJ4-TP Destroyed... Poor pony." << std::endl;
}

void    NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout
        << this->getType() 
        << " <" 
		<< this->getName()
		<< "> tickles "
		<< target.getName()
        << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout
        << this->getType() 
        << " <" 
		<< this->getName()
		<< "> Pee's on "
		<< target.getName()
        << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout
        << this->getType() 
        << " <" 
		<< this->getName()
		<< "> slaps "
		<< target.getName()
        << std::endl;

}

void    NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout
        << this->getType() 
        << " <" 
		<< this->getName()
		<< "> Jumps in joy infront of "
		<< target.getName()
        << std::endl;
}