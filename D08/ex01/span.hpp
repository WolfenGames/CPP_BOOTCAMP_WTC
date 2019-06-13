/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 19:00:36 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/13 19:00:36 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_H
# define Span_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <list>
#include <algorithm>
#include <exception>

class	Span
{
	public:
		class MaxSizeException : public std::exception
		{
			public:
				
				MaxSizeException(void);
				MaxSizeException(MaxSizeException const&);
				virtual ~MaxSizeException(void) throw();
				MaxSizeException &operator=(MaxSizeException const&);
				virtual const char* what() const throw();
		};
		class NotEnoughEntriesException : public std::exception
		{
			public:
				
				NotEnoughEntriesException(void);
				NotEnoughEntriesException(NotEnoughEntriesException const &);
				virtual ~NotEnoughEntriesException(void) throw();
				NotEnoughEntriesException &operator=(NotEnoughEntriesException const &);
				virtual const char* what() const throw();
		};

		Span(void);
		Span(long);
		Span(Span&);
		virtual ~Span(void);
		Span &operator=(Span const&);
		void			addNumber(long);
		long			shortestSpan(void);
		long			longestSpan(void);

	private:

		std::vector<long>	_store;
		unsigned long		_size;
};

#endif