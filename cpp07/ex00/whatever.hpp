/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:44:23 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/09 12:56:18 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void	swap(T& a, T& b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const&	min(T& a, T& b)
{
	return (a <= b ? a : b);
}

template <typename T>
T const&	max(T& a, T& b)
{
	return (a >= b ? a : b);
}

#endif