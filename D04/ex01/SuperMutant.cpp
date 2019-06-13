/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:33:09 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:33:09 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : SuperMutant::Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &src)
{
    *this = src;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant		&SuperMutant::operator= (const SuperMutant &cpy)
{
    if (this != &cpy)
    {
        this->hp = cpy.hp;
        this->type = cpy.type;
    }
    return *this;
}

void	SuperMutant::takeDamage(int damage)
{
    damage -= 3;

    if (this->hp - damage <= 0 && damage > 0)
        this->hp = 0;
    else
		this->hp -= damage;
}