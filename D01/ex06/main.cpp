/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:09:57 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 19:39:58 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int		main (void)
{
	Weapon club = Weapon("crude spiked club");
	Human bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon club2 = Weapon("crude spiked club");
	Human jim("Jim", club2);
	jim.attack();
	club2.setType("");
	jim.attack();
	return (0);
}