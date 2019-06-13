/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:52:52 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 14:40:05 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <sstream>

class Brain {
	public:
		Brain (void);
		~Brain (void);
		std::string 		identify (void);
		std::stringstream	identity;
	private:
};

#endif