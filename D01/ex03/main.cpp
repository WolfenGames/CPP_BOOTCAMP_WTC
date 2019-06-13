/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:49:13 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 13:51:43 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void)
{
	srand(time(0));
	ZombieHorde *theHoardFromSplit = new ZombieHorde(5);
	delete theHoardFromSplit;
	return 0;
}