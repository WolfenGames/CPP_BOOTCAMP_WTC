/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:53:58 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/05 14:53:18 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <string>

class Human {
	public:
		Human(void);
		~Human(void);
		Brain	&getBrain (void);
		std::string identify (void);
		Brain	myBrain;
		
	private:
};

#endif