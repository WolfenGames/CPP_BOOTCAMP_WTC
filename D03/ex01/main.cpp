/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:52:58 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 10:55:29 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <random>

int		main(void)
{
	srand(time(NULL));
	FragTrap	Geff("Geff");
	Geff.setMaxHitPoints(100);
	Geff.setMeleeAttackDamage(12);
	Geff.setRangedAttackDamage(4);

	FragTrap	Max("Max");
	Max.setMaxHitPoints(2);
	Max.setMeleeAttackDamage(4);
	Max.setRangedAttackDamage(13);

	FragTrap Gabriel("Gabriel the special");
	Gabriel.setMaxHitPoints(4);
	Gabriel.setMeleeAttackDamage(0);
	Gabriel.setRangedAttackDamage(0);

	ScavTrap G4("G4");
	G4.setMeleeAttackDamage(10000);
	G4.setRangedAttackDamage(10);

	Geff.meleeAttack(Max.getName());
	Max.rangedAttack(Geff.getName());
	Geff.meleeAttack(Gabriel.getName());
	Gabriel.vaulthunter_dot_exe(Geff.getName());
	G4.meleeAttack(Gabriel.getName());
}