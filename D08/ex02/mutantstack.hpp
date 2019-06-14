/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 20:30:07 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/13 20:30:07 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <vector>
#include <list>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void) {};
		MutantStack(const MutantStack& cpy) {*this = cpy;};
		MutantStack &operator=(const MutantStack& cpy)
		{
			vec = cpy.vec;
			return *this;
		}
		~MutantStack(void){};
		typedef typename std::stack<T>::iterator iterator;
		iterator	begin(void){return vec.begin();};
		iterator	end(void){return vec.end();};
		void		push(T x){vec.push_back(x);};
		void		pop(void){vec.pop_back();};
		T			top(void){return *(vec.end() - 1);};
		T			size(void){return vec.size();};

	private:
		std::stack<T>	vec;
};

#endif