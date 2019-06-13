/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:36:59 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:36:59 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
}

Character::Character(const Character &src)
{
    *this = src;
}

Character::Character(const std::string &name)
{
    this->ap = 40;
    this->name = name;
    this->weapon = NULL;
    return ;
}

Character::~Character(void)
{
}

Character	&Character::operator= (const Character &cpy)
{
    if (this != &cpy)
    {
        this->ap = cpy.ap;
        this->name = cpy.name;
        this->weapon = cpy.weapon;
    }
    return *this;
}

std::ostream	&operator<< (std::ostream &os, const Character &cpy)
{
    if (cpy.getWeapon() != NULL)
    {
        os 
		<< cpy.getName()
		<< " has "
		<< cpy.getAP()
        << " AP and wields a "
		<< cpy.getWeapon()->getName()
		<< std::endl;
    }
    else
    {
        os
		<< cpy.getName()
		<< " has "
		<< cpy.getAP()
        << " AP and is unarmend"
		<< std::endl;
    }
    return os;
}

void	Character::recoverAP(void)
{
    if (this->ap <= 30)
        this->ap += 10;
    else
        this->ap = 40;
}

void	Character::equip(AWeapon *weapon)
{
    this->weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
    int   ap_cost;

    if (this->weapon != NULL && enemy != NULL)
    {
        ap_cost = this->weapon->getAPCost();
        if (this->ap - ap_cost >= 0)
        {
          this->weapon->attack();
          enemy->takeDamage(this->weapon->getDamage());
          if (enemy->getHP() <= 0)
              delete enemy;
          this->ap -= ap_cost;
          std::cout 
		  	<< this->name 
			<< " attacks "
			<< enemy->getType()
            << "with a " 
			<< this->weapon->getName() 
			<< std::endl;
        }
    }
}

int	Character::getAP(void) const
{
    return this->ap;
}

AWeapon	*Character::getWeapon(void) const
{
    return this->weapon;
}

const std::string	Character::getName(void) const
{
    return this->name;
}