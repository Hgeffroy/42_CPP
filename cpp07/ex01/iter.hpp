/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:01:45 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/21 09:03:59 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename U, typename V>
void	iter(T* ptr, U len, V fct)
{
	for (U i = 0; i < len; i++)
		(fct)(ptr[i]);
}

int	increment(int& a)
{
	++a;
	return (0);
}

void	ft_toupper(char& c)
{
	if (c > 'a' && c < 'z')
		c = c - 'a' + 'A';
}

#endif