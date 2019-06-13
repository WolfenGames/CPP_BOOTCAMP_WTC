/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:59:50 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/09 19:15:57 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

#include <cstdlib>
typedef struct        	s_list
{
	void*				content;
	struct s_list*		next;
}                     	t_list;

class Squad : public ISquad
{
    public:
        Squad(void);
        Squad(const Squad&);
        ~Squad(void);
        Squad   &operator= (const Squad &);
        virtual int           push(ISpaceMarine*);
        virtual int           getCount(void) const;
        virtual ISpaceMarine  *getClone(int) const;

    private:
        int                   	totUnits;
        t_list           		*squad;
        void                  	cloneUnits(const Squad&);
        void                  	destroyClones(void);
        bool                 	clonesExist(ISpaceMarine*,t_list*);
};

#endif
