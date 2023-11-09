/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:01:45 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/09 15:49:53 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

// On va considerer que T est le pointeur !
template <typename T>
void	iter(T ptr, size_t len, (*f)(*T))
{
	for (size_t i = 0; i < len; i++)
		f(T[i]);
}

int&	increment(int& a)
{
	return (a++);
}

#endif