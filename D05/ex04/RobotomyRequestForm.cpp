/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 21:00:59 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 23:38:41 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

const int RobotomyRequestForm::signedReq = 72;
const int RobotomyRequestForm::execReq = 45;

RobotomyRequestForm::RobotomyRequestForm(void):
    Form("Anonymous", "Robotomy",
    RobotomyRequestForm::signedReq, RobotomyRequestForm::execReq)
{
    srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string formName):
    Form(formName, "Robotomy",
    RobotomyRequestForm::signedReq, RobotomyRequestForm::execReq)
{
    srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string formName, std::string target):
    Form(formName, target,
    RobotomyRequestForm::signedReq, RobotomyRequestForm::execReq)
{
    srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src):
    Form("Anonymous", "Robotomy",
    RobotomyRequestForm::signedReq, RobotomyRequestForm::execReq)
{
    srand(time(NULL));
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm	&RobotomyRequestForm::operator= (const RobotomyRequestForm &cpy)
{
    static_cast <void> (cpy);
    return *this;
}

void
RobotomyRequestForm::execute(const Bureaucrat &exec) const
{
    Form::execute(exec);
    if (rand() & 1)
    {
        std::cout 
		<< "BZZZZZZZZZZ..." 
		<< getTarget()
        << " has been robotomized successfully !" 
		<< std::endl;
    }
    else
    {
        std::cout 
		<< "The " 
		<< getTarget() 
		<< "robotomization failed !"
        << std::endl;
    }
}
