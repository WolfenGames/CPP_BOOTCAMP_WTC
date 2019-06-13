/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:52:58 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 11:07:24 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	srand(time(NULL));
	FragTrap	Geff("Geff");
	ScavTrap	Max("Max");
	FragTrap 	Gabriel("Gabriel the special");
	NinjaTrap	Julian("Julian");

	Geff.meleeAttack(Max.getName());
	Max.rangedAttack(Geff.getName());
	Max.challengeNewcomer();
	Geff.meleeAttack(Gabriel.getName());
	Gabriel.vaulthunter_dot_exe(Geff.getName());
	Julian.meleeAttack(Gabriel.getName());
	Julian.ninjaShoebox(Geff);
	Julian.ninjaShoebox(Max);
	Julian.ninjaShoebox(Gabriel);
	Julian.ninjaShoebox(Julian);
	return 0;
}