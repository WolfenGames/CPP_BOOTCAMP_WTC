/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:15:52 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 19:51:37 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Weapon.hpp"
#include <string>

class Human {
	public:
		Human 		(std::string name, Weapon &weap);
		~Human 		();
		void		attack (void);
		Weapon		&weapon;
		std::string	name;
};

#endif