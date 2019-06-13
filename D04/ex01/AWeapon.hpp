/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 19:21:52 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 19:21:52 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	public:
		AWeapon(void);
		AWeapon(const AWeapon&);
		AWeapon(const std::string&, int, int);
		virtual	~AWeapon(void);
		AWeapon				&operator=(const AWeapon&);
		virtual void		attack(void) const = 0;
		int					getAPCost(void) const;
		int					getDamage(void) const;
		const std::string	getName(void) const;

	protected:
		int					damage;
		int					apCost;
		std::string			name;
};

#endif