/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:59:30 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/09 18:48:38 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
    public:
        virtual               ~ISpaceMarine(void) { return ; }
        virtual void          battleCry(void) const = 0;
        virtual void          meleeAttack(void) const = 0;
        virtual void          rangedAttack(void) const = 0;
        virtual ISpaceMarine  *clone(void) const = 0;
};

#endif
