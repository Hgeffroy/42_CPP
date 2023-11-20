/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:55:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/20 11:00:52 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
void	split(T& v, T& v1, T& v2)
{
	typename T::iterator	it;
	int 					i = 0;
	int 					s = v.size();

	for(it = v.begin(); it != v.end(); ++it)
	{
		if (i < s / 2)
			v1.push_back(*it);
		else
			v2.push_back(*it);
		i++;
	}
}