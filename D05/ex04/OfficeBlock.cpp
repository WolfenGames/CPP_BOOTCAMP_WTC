/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 00:00:16 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/12 00:00:16 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <ostream>
#include <exception>
#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void){}
OfficeBlock::~OfficeBlock(void){}

void	OfficeBlock::setIntern(Intern intern)
{
	this->workingIntern = intern;
}

void	OfficeBlock::setExecutor(Bureaucrat *bureaucrat)
{
	this->executingBureaucrat = bureaucrat;
}

void	OfficeBlock::setSigner(Bureaucrat *bureaucrat)
{
	this->signingBureaucrat = bureaucrat;
}

void	OfficeBlock::doBureaucracy(std::string formName, std::string target)
{
	RobotomyRequestForm f1 = *this->workingIntern.makeForm(formName, target);
	this->signingBureaucrat->signForm(f1);
	this->executingBureaucrat->executeForm(f1);
}

OfficeBlock::CantDoThisException::CantDoThisException(void){}
OfficeBlock::CantDoThisException::CantDoThisException(const CantDoThisException &cpy)
{
	*this = cpy;
}

OfficeBlock::CantDoThisException &OfficeBlock::CantDoThisException::operator=(const CantDoThisException &cpy)
{
	static_cast<void> (cpy);
	return *this;
}

const char	*OfficeBlock::CantDoThisException::what() const throw()
{
	return "That'll do, Pigley. That'll do ...";
}