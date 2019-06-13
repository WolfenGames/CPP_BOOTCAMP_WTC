/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 07:34:33 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/12 00:07:54 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	this->setName("NULL");
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->setName(name);
	this->grade = 41;
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat&)
{}

Bureaucrat::~Bureaucrat(void){}

int		Bureaucrat::getGrade(void) const
{
	return this->grade;
}

std::string	Bureaucrat::getName(void) const
{
	return this->name;
}

void		Bureaucrat::setGrade(int grade)
{
	if (this->grade < 1 || grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150 || grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

void		Bureaucrat::incrementGrade(void)
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -=1;
}

void		Bureaucrat::decrementGrade(void)
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooHighException();
	this->grade +=1;
}

void		Bureaucrat::setName(std::string name)
{
	this->name = name;
}

std::ostream	&operator<< (std::ostream &os, const Bureaucrat &thing)
{
	os 
	<< "<" 
	<< thing.getName() 
	<< ">, Bureaucrat grade " 
	<< thing.getGrade() 
	<< "." 
	<< std::endl;

	return os;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void){}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
    *this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw(){}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){}

Bureaucrat::GradeTooLowException	&Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &cpy)
{
    static_cast <void> (cpy);
    return *this;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void){}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
    *this = src;
}


Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &cpy)
{
    static_cast <void> (cpy);
    return *this;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too High";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too Low";
}

void		Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout 
		<< this->getName()
		<< " signs "
		<< form.getName()
		<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout
		<< this->getName()
		<< " cannot sign "
		<< form.getName()
		<< " because "
		<< e.what()
		<< std::endl;
	}
}