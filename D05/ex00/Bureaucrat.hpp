/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 07:27:37 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/12 00:07:54 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#	define BUREAUCRAT_HPP

#include "string"
#include <ostream>
#include <exception>

class Bureaucrat {
	public:
		class GradeTooLowException : public std::exception
		{
		public:
			GradeTooLowException(void);
			GradeTooLowException(const GradeTooLowException &src);
			virtual ~GradeTooLowException(void) throw();
			GradeTooLowException  &operator= (const GradeTooLowException &cpy);
			virtual const char    *what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
		public:
			GradeTooHighException(void);
			GradeTooHighException(const GradeTooHighException &src);
			virtual ~GradeTooHighException(void) throw();
			GradeTooHighException &operator= (const GradeTooHighException &cpy);
			virtual const char    *what() const throw();
		};
		Bureaucrat(void);
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat(void);
		Bureaucrat &operator=(const Bureaucrat&);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		setGrade(int);
		void		setName(std::string);
		void		incrementGrade(void);
		void		decrementGrade(void);

	private:
		int			grade;
		std::string	name;
	
};

std::ostream &operator<<(std::ostream&,const Bureaucrat&);

#endif
