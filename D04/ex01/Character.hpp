/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:37:02 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:37:02 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    public:
        Character(void);
        Character(const Character&);
        Character(const std::string&);
        ~Character(void);
        Character           &operator= (const Character&);
        void                recoverAP(void);
        void                equip(AWeapon*);
        void                attack(Enemy*);
        int                 getAP(void) const;
        AWeapon            *getWeapon(void) const;
        const std::string   getName(void) const;

    private:
        int                 ap;
        AWeapon             *weapon;
        std::string         name;
};

std::ostream                &operator<< (std::ostream&, const Character&);

#endif