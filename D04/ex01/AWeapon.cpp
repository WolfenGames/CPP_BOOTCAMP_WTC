/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:18:50 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:18:50 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
{
    this->damage = damage;
    this->apCost = apcost;
    this->name = name;
}

AWeapon::AWeapon(const AWeapon &src)
{
    *this = src;
}

AWeapon::~AWeapon(void)
{
}

AWeapon	&AWeapon::operator= (const AWeapon &cpy)
{
    if (this != &cpy)
    {
        this->damage = cpy.damage;
        this->apCost = cpy.apCost;
        this->name = cpy.name;
    }
    return *this;
}

int		AWeapon::getAPCost(void) const
{
    return this->apCost;
}

int		AWeapon::getDamage(void) const
{
    return this->damage;
}

const std::string	AWeapon::getName() const
{
    return this->name;
}