/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 17:57:20 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 17:57:20 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(void);
		Sorcerer(std::string, std::string);
		Sorcerer(const Sorcerer&);
		~Sorcerer(void);
		Sorcerer	&operator=(const Sorcerer&);
		void		setName(std::string);
		void		setTitle(std::string);
		void		polymorph(const Victim&);
		std::string	getName(void) const;
		std::string	getTitle(void) const;

	private:
		std::string	name;
		std::string	title;
};

std::ostream	&operator<<(std::ostream&, const Sorcerer&);

#endif