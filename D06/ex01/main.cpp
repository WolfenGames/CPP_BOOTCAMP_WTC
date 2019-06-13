/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 19:19:35 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/12 19:19:35 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <random>
#include <time.h>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void * serialize()
{
	Data *ret = new Data;

	for(int i = 0; i < 8; i++)
		ret->s1 += (rand() % 26) + 'A';
	for(int i = 0; i < 8; i++)
		ret->s2 += (rand() % 26) + '0';
	ret->n = rand();

	return reinterpret_cast<void *>(ret);
}

Data * deserialize(void * data)
{
	Data *d = reinterpret_cast<Data *>(data);
	return d;
}

int main()
{
	srand(time(0));
	void * raw = serialize();
	Data * data = deserialize(raw);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
}
