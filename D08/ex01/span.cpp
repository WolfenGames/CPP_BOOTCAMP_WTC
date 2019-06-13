/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 19:00:39 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/13 19:00:39 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <limits.h>

Span::Span(void){}
Span::Span(long tot): _size(tot){this->_store.reserve(tot);}
Span::Span(Span &cpy){*this = cpy;}
Span::~Span(void){}

Span	&Span::operator=(const Span &cpy)
{
	if (this != &cpy)
	{
		this->_size = cpy._size;
		this->_store = cpy._store;
	}
	return *this;
}

void	Span::addNumber(long num)
{
	if (_store.size() < _size)
		_store.push_back(num);
	else
		throw new MaxSizeException();
}

long		Span::shortestSpan(void)
{
	if (this->_size < 1)
		throw new NotEnoughEntriesException();
	std::vector<long>		copy 			= _store;
	std::sort(copy.begin(), copy.end());
	std::vector<long>::iterator masterit 	= copy.begin();
	std::vector<long>::iterator fisrt 		= copy.begin();
	std::vector<long>::iterator second 		= copy.end();
	masterit++;
	second--;
	for (size_t i = 0; i < (_size - 1); i++)
	{
		if (std::abs(*fisrt - *masterit) < std::abs(*fisrt - *second))
			second = masterit;
		else if (std::abs(*second - *masterit) < std::abs(*fisrt - *second))
			fisrt = masterit;
		masterit++;
	}
	return (std::abs(*fisrt - *second));
}

long		Span::longestSpan(void)
{
	if (this->_size < 1)
		throw new NotEnoughEntriesException();
	std::vector<long>		copy = _store;
	return 
		*std::max_element(
		copy.begin(), copy.end()
		)
		- 
		*std::min_element(
		copy.begin(), copy.end()
		);
	
}

Span::MaxSizeException::MaxSizeException(void){}
Span::MaxSizeException::MaxSizeException(MaxSizeException const &obj)
{
	*this = obj;
	return;
}

Span::MaxSizeException::~MaxSizeException(void) throw(){}
Span::MaxSizeException &Span::MaxSizeException::operator=(MaxSizeException const &r) 
{
	static_cast<void>(r);
	return (*this);
}

const char* Span::MaxSizeException::what() const throw()
{
	return "Maxed out";
}

Span::NotEnoughEntriesException::NotEnoughEntriesException(void){}
Span::NotEnoughEntriesException::NotEnoughEntriesException(NotEnoughEntriesException const &obj)
{
	*this = obj;
	return;
}

Span::NotEnoughEntriesException::~NotEnoughEntriesException(void) throw(){}
Span::NotEnoughEntriesException &Span::NotEnoughEntriesException::operator=(NotEnoughEntriesException const &r) 
{
	static_cast<void>(r);
	return *this;
}

const char* Span::NotEnoughEntriesException::what() const throw()
{
	return "No Space left to add.";
}