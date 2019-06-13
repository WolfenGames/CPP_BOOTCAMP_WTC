/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:59:36 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/09 18:48:55 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
    public:
        virtual ~ISquad(void) { return ; }

        virtual int           push(ISpaceMarine *marine) = 0;
        virtual int           getCount(void) const = 0;
        virtual ISpaceMarine  *getClone(int n) const = 0;

};

#endif
