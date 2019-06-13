/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:59:56 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/09 19:50:31 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
    *this = src;
    std::cout << "Tactical Marine ready for battle" << std::endl;
}


TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh ..." << std::endl;
}


TacticalMarine	&TacticalMarine::operator= (const TacticalMarine &cpy)
{
	*this = cpy;
	return *this;
}


void			TacticalMarine::battleCry(void) const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void			TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}

void			TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with bolter *" << std::endl;
}

ISpaceMarine	*TacticalMarine::clone(void) const
{
    return new TacticalMarine;
}
