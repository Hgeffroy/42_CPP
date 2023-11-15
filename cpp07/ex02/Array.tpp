/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:41:20 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/10 11:26:33 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array( void ) : _size(0)
{
	this->_array = new T[0];
}

template <typename T>
Array<T>::Array( Array<T> const & toCopy ) : _size(toCopy._size)
{
	this->_array = new T[_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = toCopy._array[i];
}

template <typename T>
Array<T>::~Array( void )
{
	delete[] this->_array;
}

template <typename T>
Array<T>::Array( unsigned int n ) : _size(n)
{
	this->_array = new T[n];
}

template <typename T>
Array<T>&	Array<T>::operator=( Array<T> const & toAssign )
{
	delete[] this->_array;
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = toAssign._array + i;

	return (*this);
}

template <typename T>
T&	Array<T>::operator[]( unsigned int n )
{
	if (n >= this->_size)
		throw Array<T>::OutOfBoundException();
	return (this->_array[n]);
}

//unsigned int const&	getSize( )
//{
//	return (this->_size);
//}
