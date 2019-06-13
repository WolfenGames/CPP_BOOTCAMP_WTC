/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:35:09 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:35:09 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion(void);
        RadScorpion(const RadScorpion&);
        ~RadScorpion(void);
        RadScorpion   &operator= (const RadScorpion&);
};

#endif