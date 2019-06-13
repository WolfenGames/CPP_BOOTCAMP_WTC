/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:25:15 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:25:15 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist(void);
        PowerFist(const PowerFist&);
        ~PowerFist(void);
        PowerFist     &operator= (const PowerFist&);
        virtual void  attack(void) const;
};

#endif