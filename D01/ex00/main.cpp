/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:26:39 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 13:05:37 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pony.hpp"

void	PonyOnTheHeap (void)
{
	Pony	*heap = new Pony();

	heap->setName("Pieter");
	heap->setAge(49);
	heap->setSpeak("Spank me harder daddy!");
	std::cout << "HEAP:: "
		<< heap->getName() 
		<< " -  Age: " 
		<< heap->getAge() 
		<< " - \"" 
		<< heap->makeSpeak() 
		<< "\""
		<< std::endl;
}

void PonyOnTheStack (void)
{
	Pony	stack;
	stack.setAge(12);
	stack.setName("ISARD!");
	stack.setSpeak("Ponies don't speak you dumbass!");
	std::cout << "STACK:: "
		<< stack.getName() 
		<< " -  Age: " 
		<< stack.getAge() 
		<< " - \"" 
		<< stack.makeSpeak() 
		<< "\""
		<< std::endl;
}

int		main (void)
{
    PonyOnTheHeap();
	PonyOnTheStack();
	return 0;
}
