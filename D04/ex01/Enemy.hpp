/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:28:45 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/08 20:28:45 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>

class Enemy
{
    public:
        Enemy(void);
        Enemy(const Enemy&);
        Enemy(int, const std::string&);
        virtual           ~Enemy(void);
        Enemy             &operator= (const Enemy &);
        int               getHP(void) const;
        const std::string getType(void) const;
        virtual void      takeDamage(int);

    protected:
        int               hp;
        std::string       type;
};

#endif