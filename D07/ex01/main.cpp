/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 19:08:21 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/12 19:08:21 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>	void iter(T *data, size_t length, void (*f)(T const&))
{
	if (data)
	{
		for (size_t i = 0; i < length; i++)
			f(data[i]);
	}
}


template<typename T>	void iter(T *data, size_t length, void (*f)(T &))
{
	if (data)
	{
		for (size_t i = 0; i < length; i++)
			f(data[i]);
	}
}

void change(char &c)
{
	c += 32;
}

int main( void ) {
	char a[] = "Hello";
	iter(static_cast<char *>(a), sizeof(a) - 1, change);
	std::cout << a;
}