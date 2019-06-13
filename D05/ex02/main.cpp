/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 21:00:02 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 23:19:41 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


int		main(void)
{
    Bureaucrat                    b1("Geff", 69);
    Bureaucrat                    b2("Tevor", 42);
    Bureaucrat                    b3("Arno", 1);
    ShrubberyCreationForm         f1("SCF");
    RobotomyRequestForm           f2("RRF");
    PresidentialPardonForm        f3("PDF");

	try
    {
        b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);

        b1.executeForm(f1);
        b1.executeForm(f2);
        b1.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
	try
    {
        b2.signForm(f1);
        b2.signForm(f2);
        b2.signForm(f3);

        b2.executeForm(f1);
        b2.executeForm(f2);
        b2.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

	try
    {
        b3.signForm(f1);
        b3.signForm(f2);
        b3.signForm(f3);

        b3.executeForm(f1);
        b3.executeForm(f2);
        b3.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    return (0);
}
