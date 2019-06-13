/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 20:39:40 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/13 20:39:40 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <random>
#include <limits.h>
#include <time.h>

int main()
{
	srand(time(0));
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "TOP:: 	" << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "SIZE::	" << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	for(size_t x = 0; x < 20; x++)
		mstack.push(rand() % INT_MAX);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "SIZE::	" << mstack.size() << std::endl;
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
