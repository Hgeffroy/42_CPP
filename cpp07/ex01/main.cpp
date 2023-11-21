/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:15:45 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/10 09:29:51 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	int	array[10];
	for (int i = 0; i < 10; i++)
		array[i] = 0;

	iter(array, 10, &increment);

	for (int i = 0; i < 10; i++)
		std::cout << "array[" << i << "] = " << array[i] << std::endl;

	char arraychar[] = "Youplaboom";

	iter(arraychar, 10, &ft_toupper);

	for (int i = 0; i < 10; i++)
		std::cout << "array[" << i << "] = " << arraychar[i] << std::endl;
}