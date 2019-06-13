/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   RadScorp1y: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:45:41 RadScorp1y jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:45:41 RadScorp1y jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"

int		main(void)
{
	Character *zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy *RadScorp1 = new RadScorpion();
    Enemy *RadScorp2 = new RadScorpion();
    Enemy *RadScorp3 = new RadScorpion();
    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(RadScorp1);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(RadScorp1);
    std::cout << *zaz;
    zaz->attack(RadScorp1);
    std::cout << *zaz;

    zaz->attack(RadScorp2);
    std::cout << *zaz;
    zaz->attack(RadScorp2);
    std::cout << *zaz;
    zaz->attack(RadScorp2);
    std::cout << *zaz;
    zaz->attack(RadScorp2);
    std::cout << *zaz;
    zaz->attack(RadScorp3);
    std::cout << *zaz;
    zaz->attack(RadScorp3);
    std::cout << *zaz;
    zaz->attack(RadScorp3);
    std::cout << *zaz;

    return (0);
}