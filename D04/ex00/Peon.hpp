/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 17:23:23 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 17:23:23 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
#include <string>

class Peon: public Victim
{
    public:
        Peon(void);
        Peon(const Peon &);
        Peon(std::string name);
        ~Peon(void);
        Peon    &operator=(const Peon&);
        virtual void    getPolymorphed(void) const;
    private:
        std::string name;
};

#endif