/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 18:40:50 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/13 18:40:50 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

void	testValue(int val)
{
    std::list<int>    lst;

    lst.push_back(4);
    lst.push_back(8);
    lst.push_back(15);
    lst.push_back(16);
    lst.push_back(23);
    lst.push_back(42);

    std::cout << val << " -> ";
    try
    {
        easyfind<std::list<int> > (lst, val);
    }
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	testValue(1);
	testValue(4);
	testValue(16);
	testValue(29);
	testValue(42);
	
    return (0);
}