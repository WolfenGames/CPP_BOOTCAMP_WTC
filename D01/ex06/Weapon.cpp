/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:07:56 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 19:07:56 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type){
        this->Type = type;
}

Weapon::~Weapon() {}

std::string Weapon::getType (void) const
{
    return this->Type;
}

void    Weapon::setType(std::string Type)
{
    this->Type = Type;
}