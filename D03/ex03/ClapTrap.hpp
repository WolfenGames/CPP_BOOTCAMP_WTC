/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 19:47:33 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/07 19:47:33 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
typedef unsigned int    u_int_t;

class ClapTrap
{
    private:
        std::string	m_Name;
		std::string	type;
        u_int_t		m_HitPoints;
        u_int_t		m_MaxHitPoints;
        u_int_t		m_EnergyPoints;
        u_int_t		m_MaxEnergy;
        u_int_t		m_level;
        u_int_t		m_MeleeAttackDamage;
        u_int_t 	m_RangedAttackDamage;
        u_int_t		m_ArmorDamageReduction;
    public:
        ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		~ClapTrap(void);
		ClapTrap	&operator=(const ClapTrap&);
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
		void		setType(std::string);

		std::string	getName(void);
		u_int_t		getLevel(void);
		u_int_t		getHitPoints(void);
		u_int_t		getMaxHitPoints(void);
		u_int_t		getEnergyPoints(void);
		u_int_t		getMaxEnergyPoints(void);
		u_int_t		getMeleeAttackDamage(void);
		u_int_t		getRangedAttackDamage(void);
		u_int_t		getArmorDamageReduction(void);
		std::string	getType(void);
};


#endif