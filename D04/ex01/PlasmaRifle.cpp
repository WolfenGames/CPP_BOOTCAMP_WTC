/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:21:30 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:21:30 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src)
{
    *this = src;
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle	&PlasmaRifle::operator= (const PlasmaRifle &cpy)
{
    if (this != &cpy)
    {
        this->name = cpy.name;
        this->apCost = cpy.apCost;
        this->damage = cpy.damage;
    }
    return *this;
}

void	PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}