/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 20:58:16 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 23:10:04 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int		main(void)
{
    Form        f1 = Form("A form", 42, 42);
    Form        f2 = Form("Another one...", 30, 50);
    Bureaucrat  b1 = Bureaucrat("Marvin", 42);
    Bureaucrat  b2 = Bureaucrat("Mr. Abraham", 2);

	std::cout << b1 << std::endl;
    try
    {
        b1.signForm(f1);
        std::cout << b1 << std::endl;
        std::cout << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

	try
    {
        b1.signForm(f2);
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

	try
    {
        b2.signForm(f1);
        std::cout << b2 << std::endl;
        std::cout << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

	try
    {
        b2.signForm(f1);
        std::cout << b2 << std::endl;
        std::cout << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
