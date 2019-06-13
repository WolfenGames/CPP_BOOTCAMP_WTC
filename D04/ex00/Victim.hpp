/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 17:25:46 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 17:25:46 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
    private:
        std::string name;
    public:
        Victim(void);
        Victim(const Victim&);
        Victim(std::string name);
        ~Victim(void);
        Victim      &operator=(const Victim&);
        void        setName(std::string);
        std::string getName(void) const;
        void        getPolymorphed(void) const;
};

std::ostream       &operator<<(std::ostream&, const Victim &);

#endif