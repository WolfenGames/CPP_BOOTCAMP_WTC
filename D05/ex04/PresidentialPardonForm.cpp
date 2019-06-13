/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 21:00:43 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 22:54:02 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const int PresidentialPardonForm::signedReq = 25;
const int PresidentialPardonForm::execReq = 5;

PresidentialPardonForm::PresidentialPardonForm(void) :
    Form("Anonymous", "Presidential",
    PresidentialPardonForm::signedReq,
	PresidentialPardonForm::execReq)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form(target, "Presidential",
    PresidentialPardonForm::signedReq, PresidentialPardonForm::execReq)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppf):
    Form("Anonymous", "Presidential",
    PresidentialPardonForm::signedReq, PresidentialPardonForm::execReq)
{
    *this = ppf;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm	&PresidentialPardonForm::operator= (const PresidentialPardonForm &cpy)
{
    static_cast <void> (cpy);
    return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::cout 
	<< getTarget() 
	<< " has been pardoned by Zafod Beebkerox."
	<< std::endl;
}
