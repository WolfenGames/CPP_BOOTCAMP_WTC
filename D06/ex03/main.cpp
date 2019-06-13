/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:31:18 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/13 15:53:49 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base	*gen(void)
{
	int i = (rand() % 3);
	std::cout << i << std::endl;
	if (i == 0)
		return new A;
	if (i == 1)
		return new B;
	if (i == 2)
		return new C;
	return NULL;
}

void	identify_from_pointer(Base *base)
{
	A *a = dynamic_cast<A*>(base);
	if (a)
	{
		std::cout << "A" << std::endl;
	}else
	{
		B *b = dynamic_cast<B*>(base);
		if (b)
		{
			std::cout << "B" << std::endl;
		}
		else
		{
			C *c = dynamic_cast<C*>(base);
			if (c)
			{
				std::cout << "C" << std::endl;
			}
		}
	}
}

void 	identify_from_reference(Base &base)
{
	try
	{
		A &a = dynamic_cast<A&>(base);
		static_cast<void>(a);
		std::cout << "A" << std::endl;
	}
	catch(std::exception &e)
	{
		static_cast<void>(e);
		try
		{
			B &b = dynamic_cast<B&>(base);
			static_cast<void>(b);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			static_cast<void>(e);
			try
			{
				C &c = dynamic_cast<C&>(base);
				static_cast<void>(c);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				static_cast<void>(e);
			}
			
		}
		
	}
	
}

int		main(void)
{
	srand(time(NULL));
	Base	*base = gen();
	identify_from_pointer(base);
	identify_from_reference(*base);
	return 0;
}