/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:59:46 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/09 19:18:05 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
    this->totUnits = 0;
    this->squad = NULL;
}

Squad::Squad(const Squad &src)
{
    this->cloneUnits(src);
    this->totUnits = src.totUnits;
}

Squad::~Squad(void)
{
    this->destroyClones();
}

Squad		&Squad::operator= (const Squad &cpy)
{
    if (this != &cpy)
    {
        this->destroyClones();
        this->cloneUnits(cpy);
        this->totUnits = cpy.totUnits;
    }
    return *this;
}

int		Squad::push(ISpaceMarine *marine)
{
    t_list  *tmp;

    tmp = this->squad;
    if (marine && !this->clonesExist(marine, tmp))
    {
        tmp = this->squad;
        if (!this->squad)
        {
            this->squad = new t_list;
            this->squad->content = marine;
            this->squad->next = NULL;
        }
        else
        {
			while (tmp->next)
                tmp = tmp->next;
            tmp->next = new t_list;
            tmp->next->content = marine;
            tmp->next->next = NULL;
        }
        this->totUnits++;
    }
    return this->totUnits;
}


int				Squad::getCount(void) const
{
    return this->totUnits;
}

ISpaceMarine	*Squad::getClone(int n) const
{
    t_list  *tmp;

    tmp = this->squad;
    if (n < 0 || n >= this->totUnits)
        return NULL;
    while (n--)
        tmp = tmp->next;
    return (ISpaceMarine*)tmp->content;
}

void			Squad::cloneUnits(const Squad &src)
{
    for (int i = 0; i < src.getCount(); i += 1)
        push(src.getClone(i));
}

void			Squad::destroyClones(void)
{
    t_list  *tmp;

    if (!this->squad)
		return;
	delete (ISpaceMarine *)this->squad->content;
	tmp = this->squad;
	this->squad = this->squad->next;
	delete tmp;
	this->destroyClones();
}

bool			Squad::clonesExist(ISpaceMarine *marine, t_list *squad)
{
    if (!squad)
        return false;
    else if (marine == squad->content)
        return true;
    else
        return this->clonesExist(marine, squad->next);
}
