/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:41:20 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/21 13:02:25 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>
# include <cstring>

template <typename T>
class Array
{

private:

	T*					_array;
	unsigned int const	_size;

	Array<T>( void );

public:

	Array<T>( Array<T> const & toCopy );
	~Array<T>( void );
	Array<T>( unsigned int n );

	Array<T>&	operator=( Array<T> const & toAssign );
	Array<T>&	operator=( Array<T> const & toAssign ) const;
	T&		operator[]( unsigned int n );

};

# include "Array.tpp"

#endif