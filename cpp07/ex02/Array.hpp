/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:41:20 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/10 12:44:05 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T>
class Array
{

private:

	T*					_array;
	unsigned int const	_size;

	Array( void );

public:

	Array( Array const & toCopy );
	~Array( void );
	Array( unsigned int n );

	Array&	operator=( Array const & toAssign );
	T&		operator[]( unsigned int n );

};

# include "Array.tpp"

#endif