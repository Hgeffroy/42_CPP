/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:01:45 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/10 09:29:43 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T* ptr, size_t len, int (*f)(T&))
{
	for (size_t i = 0; i < len; i++)
		f(ptr[i]);
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