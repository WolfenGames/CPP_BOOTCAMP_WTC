/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:30:21 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:30:21 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
}

Enemy::Enemy(const Enemy &src)
{
    *this = src;
}

Enemy::Enemy(int hp, const std::string &type)
{
    this->hp = hp;
    this->type = type;
}

Enemy::~Enemy(void)
{
}

Enemy	&Enemy::operator= (const Enemy &cpy)
{
    if (this != &cpy)
    {
        this->hp = cpy.hp;
        this->type = cpy.type;
	}
    return (*this);
}

int	Enemy::getHP(void) const
{
    return this->hp;
}

const std::string	Enemy::getType(void) const
{
    return this->type;
}

void	Enemy::takeDamage(int damage)
{
    if (this->hp - damage <= 0 && damage > 0)
    {
        this->hp = 0;
    }
    else
    {
        this->hp -= damage;
    }
}