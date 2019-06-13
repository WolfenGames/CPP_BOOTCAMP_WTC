/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:32:38 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:32:38 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant(void);
        SuperMutant(const SuperMutant &);
        ~SuperMutant(void);
        SuperMutant   &operator= (const SuperMutant&);
        virtual void  takeDamage(int);
};

#endif