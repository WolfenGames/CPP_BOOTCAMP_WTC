/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:00:52 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 10:10:53 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <string>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
		void	    setName (std::string name);
		void	    setType (std::string type);
		std::string	getName (void) const;
		std::string getType (void) const;
		void	    announce(void) const;

	private:
		std::string	name;
		std::string	zombieType;
};

#endif