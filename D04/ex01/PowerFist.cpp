/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:25:59 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:25:59 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &src)
{
    *this = src;
}

PowerFist::~PowerFist(void)
{
}

PowerFist	&PowerFist::operator= (const PowerFist &cpy)
{
    if (this != &cpy)
    {
        this->name = cpy.name;
        this->apCost = cpy.apCost;
        this->damage = cpy.damage;
    }
    return (*this);
}

void	PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}