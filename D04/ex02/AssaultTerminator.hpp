/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:59:23 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/09 19:40:45 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator(void);
        AssaultTerminator(const AssaultTerminator &src);
        ~AssaultTerminator(void);
        AssaultTerminator   &operator= (const AssaultTerminator &cpy);
        virtual void          battleCry(void) const;
        virtual void          meleeAttack(void) const;
        virtual void          rangedAttack(void) const;
        virtual ISpaceMarine  *clone(void) const;
};

#endif
