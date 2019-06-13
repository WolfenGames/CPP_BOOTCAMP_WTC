/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 23:50:32 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 23:50:32 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include <string>
#include <ostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

class Bureaucrat;
class Intern;

class OfficeBlock
{
	public:
		class CantDoThisException: public std::exception
		{
			public:
				CantDoThisException(void);
				CantDoThisException(const CantDoThisException&);
				virtual ~CantDoThisException(void) throw() = 0;
				CantDoThisException  &operator= (const CantDoThisException&);
				virtual const char    *what() const throw() = 0;
		};
		OfficeBlock(void);
		~OfficeBlock(void);
		void		setIntern(Intern);
		void		setSigner(Bureaucrat*);
		void		setExecutor(Bureaucrat*);
		void		doBureaucracy(std::string, std::string);
	private:
		Intern 		workingIntern;
		Bureaucrat	*signingBureaucrat;
		Bureaucrat	*executingBureaucrat;
};

std::ostream	&operator<<(const std::ostream&, const OfficeBlock&);

#endif