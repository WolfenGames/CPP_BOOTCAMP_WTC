/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:59:42 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 19:56:55 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <random>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main (void)
{
	ZombieEvent	ranomdZs;
	ZombieEvent	lurkers;
	ZombieEvent	slackers;
	Zombie*		zombies[10];

	srand(time(0));

	lurkers.setZombieType("LURKER");
	zombies[0] = lurkers.newZombie("JEFFREY");
	zombies[0]->announce();
	zombies[1] = lurkers.newZombie("Geff");
	zombies[1]->announce();

	slackers.setZombieType("SLACKERS");
	zombies[2] = slackers.newZombie("Hackers");
	zombies[2]->announce();
	zombies[3] = slackers.newZombie("Polo");
	zombies[3]->announce();
	
	size_t len = sizeof(zombies)/sizeof(zombies[0]);
	for (size_t i = 4; i < len; i++)
	{
		zombies[i] = ranomdZs.randomChump();
	}

	for (size_t j = 0; j < len; j++)
	{
		delete(zombies[j]);
	}
	return 0;
}