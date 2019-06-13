/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:00:28 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/06 12:00:31 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP

#include <string>

class Pony {
	public:
		Pony();
		~Pony();
		std::string	getName (void) const;
		std::string makeSpeak (void) const;
		int			getAge(void) const;

		void		setName (std::string name);
		void		setAge (int age);
		void		setSpeak (std::string speak);

	private:
		std::string	name;
		int			age;
		std::string	speak;
};

#endif