/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:22:20 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:22:20 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle(void);
        PlasmaRifle(const PlasmaRifle&);
        ~PlasmaRifle(void);
		
		PlasmaRifle   &operator= (const PlasmaRifle&);
        virtual void  attack(void) const;
};

#endif