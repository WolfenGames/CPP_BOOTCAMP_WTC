/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:52:55 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/07 20:03:43 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>

typedef unsigned int u_int_t;

class ScavTrap
{
	private:
		std::string	m_Name;
		u_int_t		m_HitPoints;
		u_int_t		m_MaxHitPoints;
		u_int_t		m_EnergyPoints;
		u_int_t		m_MaxEnergy;
		u_int_t		m_level;
		u_int_t		m_MeleeAttackDamage;
		u_int_t 	m_RangedAttackDamage;
		u_int_t		m_ArmorDamageReduction;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap&);
		void		rangedAttack(std::string const &);
		void		meleeAttack(std::string const &);
		void		takeDamage(unsigned int);
		void		beRepaired(unsigned int);

		void		setName(std::string);
		void		setLevel(u_int_t);
		void		setHitPoints(u_int_t);
		void		setMaxHitPoints(u_int_t);
		void		setEnergyPoints(u_int_t);
		void		setMaxEnergyPoints(u_int_t);
		void		setMeleeAttackDamage(u_int_t);
		void		setRangedAttackDamage(u_int_t);
		void		setArmorDamageReduction(u_int_t);
		void		challengeNewcomer(void);

		std::string	getName(void);
		u_int_t		getLevel(void);
		u_int_t		getHitPoints(void);
		u_int_t		getMaxHitPoints(void);
		u_int_t		getEnergyPoints(void);
		u_int_t		getMaxEnergyPoints(void);
		u_int_t		getMeleeAttackDamage(void);
		u_int_t		getRangedAttackDamage(void);
		u_int_t		getArmorDamageReduction(void);
};

#endif