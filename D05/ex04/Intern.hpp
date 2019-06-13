/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 23:25:33 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 23:25:33 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <ostream>
#include "RobotomyRequestForm.hpp"

class RobotomyRequestForm;
class Intern
{
	public:
		Intern(void);
		Intern(const Intern&);
		~Intern(void);
		Intern	&operator=(const Intern&);
		RobotomyRequestForm	*makeForm(std::string,std::string);
	private:
};

std::ostream &operator<<(std::ostream&,const Intern&);

#endif