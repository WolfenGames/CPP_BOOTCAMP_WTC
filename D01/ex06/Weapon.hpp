/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:13:45 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 19:32:00 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:
		Weapon (std::string type = "I am a default type");
		~Weapon (void);
		void	setType(std::string Type);
		std::string	getType (void) const;
	private:
		std::string Type; 
};

#endif