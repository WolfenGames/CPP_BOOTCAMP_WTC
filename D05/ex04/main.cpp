/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 21:00:02 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/12 08:25:59 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"


int main()
{
	Intern idiotOne;
	Bureaucrat *hermes = new Bureaucrat("Hermes Conrad", 37);
	Bureaucrat *bob = new Bureaucrat("Bobby Bobson", 70);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	
	try
	{
		ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch (RobotomyRequestForm::NotSignedException &e)
	{
		std::cout 
		<< e.what() 
		<< std::endl;
	}
	catch (std::exception &e)
	{
		static_cast<void> (e);
		std::cout
		<< "Uhm.. Fuck"
		<< std::endl;
	}
}