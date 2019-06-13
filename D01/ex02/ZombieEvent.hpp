/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:01:15 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 13:05:19 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIEEVENT_CLASS_HPP
# define ZOMBIEEVENT_CLASS_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent (void);
		~ZombieEvent (void);
		Zombie	*newZombie (std::string name);
		Zombie	*randomChump (void);
		void	RandomZombieType (void);
		void	setZombieType (std::string type);
        std::string	getZombieType (void) const;
		std::string getZombieRandoName (void) const;

	private:
		std::string	zombieType;
};

#endif