/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:39:16 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/13 11:25:23 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

template <typename T>
int	easyfind(T container, int n)
{
	typename T::iterator	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw std::exception();
	return (n);
}

#endif