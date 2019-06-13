/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 20:24:25 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/07 20:24:25 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
    private:
    public:
        NinjaTrap(void);
        NinjaTrap(std::string);
        NinjaTrap(const NinjaTrap&);
        ~NinjaTrap(void);
        void    ninjaShoebox(NinjaTrap&);
        void    ninjaShoebox(ClapTrap&);
        void    ninjaShoebox(FragTrap&);
        void    ninjaShoebox(ScavTrap&);
};

#endif