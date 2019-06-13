/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 20:59:39 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 23:18:08 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
    isSigned(false),
    gradeToSign(1),
    gradeToExecute(1),
    name("NULL"),
	target("NULL")
{}

Form::Form(const Form &src) :
    isSigned(src.isSigned),
    gradeToSign(src.gradeToSign),
    gradeToExecute(src.gradeToExecute),
    name(src.name)
{
    *this = src;
}


Form::Form(std::string name, std::string target, int grade_to_sign, int grade_to_execute) :
    isSigned(false),
    gradeToSign(grade_to_sign),
    gradeToExecute(grade_to_execute),
    name(name),
	target(target)
{
    if (this->gradeToSign < 1 || this->gradeToExecute < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (this->gradeToSign > 150 || this->gradeToExecute > 150)
    {
        throw Form::GradeTooLowException();
    }
}

Form::~Form(void){}

Form	&Form::operator= (const Form &cpy)
{
    if (this != &cpy)
    {
        this->isSigned = cpy.isSigned;
    }
    return *this;
}

Form::GradeTooHighException::GradeTooHighException(void){}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
    *this = src;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw(){}

Form::GradeTooHighException	&Form::GradeTooHighException::operator= (const GradeTooHighException &cpy)
{
    static_cast <void> (cpy);
    return (*this);
}

const char	*Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}


Form::GradeTooLowException::GradeTooLowException(void){}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
    *this = src;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw(){}

Form::GradeTooLowException	&Form::GradeTooLowException::operator= (const GradeTooLowException &cpy)
{
    static_cast <void> (cpy);
    return *this;
}

const char	*Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}


void	Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    else
        this->isSigned = true;
}

bool	Form::getSigned(void) const
{
    return this->isSigned;
}

int		Form::getGradeToSign(void) const
{
    return this->gradeToSign;
}

int		Form::getGradeToExecute(void) const
{
    return this->gradeToExecute;
}

std::string	Form::getName(void) const
{
    return this->name;
}

std::string		Form::getTarget(void) const
{
	return this->target;
}

std::ostream	&operator<< (std::ostream &os, const Form &cpy)
{
    os << "The form: " 
	<< cpy.getName() 
	<< " which is "
    << (cpy.getSigned() ? "" : "not ")
    << " signed, which requires a grade "
	<< cpy.getGradeToSign()
    << " to sign, and "
	<< cpy.getGradeToExecute()
	<< " to be executed."
    << std::endl;
    return os;
}

void	Form::execute(const Bureaucrat& exec) const
{
	if (exec.getGrade() > gradeToExecute)
		throw Form::GradeTooLowException();
	else if (!isSigned)
		throw Form::NotSignedException();
}

Form::NotSignedException::NotSignedException(void){}

Form::NotSignedException::NotSignedException(const NotSignedException &src)
{
    *this = src;
}

Form::NotSignedException::~NotSignedException(void) throw(){}

Form::NotSignedException	&Form::NotSignedException::operator= (const NotSignedException &cpy)
{
    static_cast <void> (cpy);
    return *this;
}

const char	*Form::NotSignedException::what() const throw()
{
    return "Form not signed";
}