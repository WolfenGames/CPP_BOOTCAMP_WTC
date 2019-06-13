/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:48:03 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/12 18:48:03 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cmath>

std::string doDaChar(double d)
{
	std::stringstream ret;

	if (isnan(d) || !isfinite(d))
		return "Impossible";
	else if (!isprint(d))
		return "Non displayable";
	ret << "'" << static_cast<char>(d) << "'";
	return ret.str();
}

std::string doDaIntPrint(double d)
{
	if (isnan(d) || !isfinite(d))
		return "Impossible";
	else
		return std::to_string(static_cast<int>(d));
}

std::string doDaFloatPrint(double d)
{
	std::stringstream ss;
	ss << static_cast<float>(d);
	if (d == floor(d))
		ss << ".0";
	ss << "f";
	return ss.str();
}

std::string doDaDoublePrint(double d)
{
	std::stringstream ss;
	ss << static_cast<double>(d);
	if (d == floor(d))
		ss << ".0";
	return ss.str();
}

int main(int ac, char **av)
{
	if (ac < 2)
		return 0;
	double d;
	try
	{
		d = std::stod(av[1]);
	}
	catch (std::exception &e)
	{
		d = static_cast<double>(av[1][0]);
	}
	
	std::cout << "char: 	" << doDaChar(d) << std::endl;
	std::cout << "int:	" << doDaIntPrint(d) << std::endl;
	std::cout << "float:	" << doDaFloatPrint(d) << std::endl;
	std::cout << "double:	" << doDaDoublePrint(d) << std::endl;
}