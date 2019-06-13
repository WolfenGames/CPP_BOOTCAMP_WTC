/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 18:38:52 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/13 18:38:52 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template<typename T>
void easyfind(T container, int i)
{
    typename T::iterator it;

    it = find(container.begin(), container.end(), i);
    if (it != container.end())
        std::cout << "ITS ALIVE" << std::endl;
    else
        throw std::exception();
    
}

#endif