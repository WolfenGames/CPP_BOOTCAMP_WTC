/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 21:00:50 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/11 22:54:02 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(const PresidentialPardonForm&);
		~PresidentialPardonForm(void);
		PresidentialPardonForm  &operator= (const PresidentialPardonForm&);
		virtual void            execute(const Bureaucrat&) const;

	private:
		static const int        signedReq;
		static const int        execReq;
};

#endif
