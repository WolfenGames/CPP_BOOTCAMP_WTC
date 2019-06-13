/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 20:58:03 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 23:17:58 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	public:
    class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException(void);
			GradeTooLowException(const GradeTooLowException&);
			virtual ~GradeTooLowException(void) throw();
			GradeTooLowException  &operator= (const GradeTooLowException&);
			virtual const char    *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(void);
			GradeTooHighException(const GradeTooHighException&);
			virtual ~GradeTooHighException(void) throw();
			GradeTooHighException &operator= (const GradeTooHighException&);
			virtual const char    *what() const throw();
	};

    Form(void);
    Form(const Form&);
    Form(std::string, int, int);
    ~Form(void);
    Form                      &operator= (const Form&);
    void                      beSigned(Bureaucrat&);
    bool                      getSigned(void) const;
    int                       getGradeToSign(void) const;
    int                       getGradeToExecute(void) const;
    std::string               getName(void) const;

	private:
		bool                      isSigned;
		const int                 gradeToSign;
		const int                 gradeToExecute;
		const std::string         name;
};

std::ostream                  &operator<< (std::ostream&, const Form&);

#endif
