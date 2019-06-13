/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 21:01:06 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 22:54:02 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <ctime>
# include <cstdlib>
# include <iostream>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string);
		RobotomyRequestForm(const RobotomyRequestForm&);
		~RobotomyRequestForm(void);
		RobotomyRequestForm     &operator= (const RobotomyRequestForm&);
		virtual void            execute(const Bureaucrat&) const;

	private:
		static const int        signedReq;
	    static const int        execReq;
};

#endif
