/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 19:15:25 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/12 19:15:25 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main( void ) {

	Array<char> a(3);
	try
	{
		a[0] = 'a';
		a[1] = 'b';
		a[2] = 'c';
		std::cout << a[0] << a[1] << a[2] << std::endl;
	}
	catch (std::exception &e)
	{
		static_cast<void>(e);
	}
}