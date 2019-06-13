/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:59:42 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/09 19:21:05 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>

#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int		main(void)
{
    ISquad* IntergalacticSpaceMarines = new Squad;
    ISpaceMarine* Timmy = new TacticalMarine;
    ISpaceMarine* Arnold = new AssaultTerminator;

    IntergalacticSpaceMarines->push(Timmy);
    IntergalacticSpaceMarines->push(Arnold);

    for (int i = 0; i < IntergalacticSpaceMarines->getCount(); ++i)
    {
        ISpaceMarine* cur = IntergalacticSpaceMarines->getClone(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    IntergalacticSpaceMarines->getClone(0)->battleCry();
    IntergalacticSpaceMarines->getClone(1)->battleCry();
    IntergalacticSpaceMarines->getClone(0)->rangedAttack();
    IntergalacticSpaceMarines->getClone(1)->rangedAttack();
    IntergalacticSpaceMarines->getClone(0)->meleeAttack();
    IntergalacticSpaceMarines->getClone(1)->meleeAttack();

    delete IntergalacticSpaceMarines;

    return (0);
}
