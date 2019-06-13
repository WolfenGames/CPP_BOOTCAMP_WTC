/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:51:14 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 13:50:04 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZombieHorde_CLASS_HPP
# define ZombieHorde_CLASS_HPP

#include "Zombie.hpp"
#include <random>

class ZombieHorde {
	public:
		ZombieHorde(int	n);
		~ZombieHorde();

	private:
		Zombie		*newZombie (std::string name);
		Zombie		*randomChump (void);
		void		RandomZombieType (void);
		void		setZombieType (std::string type);
        std::string	getZombieType (void) const;
		std::string getZombieRandoName (void) const;
		std::string	zombieType;
		Zombie		**Hoard;
		int			hoardSize;
};

#endif