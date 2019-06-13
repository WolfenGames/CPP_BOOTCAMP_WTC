/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 23:25:36 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 23:25:36 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){}

Intern::Intern(const Intern &cpy){
	static_cast <void> (cpy);
}

Intern::~Intern(void){}

Intern	&Intern::operator=(const Intern &cpy)
{
	static_cast<void> (cpy);
	return *this;
}

RobotomyRequestForm	*Intern::makeForm(std::string formName, std::string target)
{
	RobotomyRequestForm	*form = new RobotomyRequestForm(formName, target);
	std::cout 
	<< "Intern creates <" 
	<< form->getName()
	<< ">" 
	<< std::endl;
	return form;
}

std::ostream	&operator<<(std::ostream &os, const Intern &cpy)
{
	static_cast<void> (cpy);
	return os;
}