/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:02:31 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 14:56:47 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human (void) {}
Human::~Human (void) {}

std::string	Human::identify (void)
{
	return (this->myBrain.identify());
}

Brain		&Human::getBrain (void)
{
	return this->myBrain;
}