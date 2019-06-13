/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 19:11:28 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/12 19:11:28 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory>

template<typename T>
class Array
{
	public:
		Array():_array(nullptr), tot(0){}

		Array(unsigned int size):_array(new T[size]), tot(size)
		{
			for (unsigned int i = 0; i < tot; i++)
				_array[i] = 0;
		}

		~Array()
		{
			if (_array)
				delete[] _array;
		}

		Array(Array const & a)
		{
			_array = new T[a.tot];
			tot = a.tot;
			for (unsigned int i = 0; i < tot; i++)
				_array[i] = a._array[i];
		}

		Array &operator=(Array const & a)
		{
			if (_array)
				delete[] _array;
			_array = new T[a.tot];
			tot = a.tot;
			for (int i = 0; i < tot; i++)
				_array[i] = a._array[i];
		}

		T &operator[](int i)
		{
			if (i < 0 || static_cast<unsigned int>(i) >= tot)
				throw std::exception();
			return _array[i];
		}

		unsigned int size() const
		{
			return tot;
		}

	private:

		T *_array;
		unsigned int tot;
		
	protected:

};