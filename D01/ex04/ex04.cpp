/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:50:24 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 14:04:12 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string	brain;
	std::string *pointer;
	std::string &reference = brain;

	brain = "HI THIS IS BRAIN";
	pointer = &brain;
	
	std::cout << "String ->	" << brain << std::endl;
	std::cout << "Pointer ->	" << *pointer << std::endl;
	std::cout << "Reference ->	" << reference << std::endl;

	return 0;
}