/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:19:18 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 19:43:40 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Weapon.hpp"
#include <iostream>

Human::Human(std::string name, Weapon &weap): weapon(weap), name(name) {}

Human::~Human(){}

void    Human::attack (void)
{
    std::cout 
    << this->name 
    << " attacks with their " 
    << this->weapon.getType() 
    << std::endl;
}