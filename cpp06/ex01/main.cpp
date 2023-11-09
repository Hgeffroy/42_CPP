/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:19:53 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/08 12:42:51 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	struct Data	*d = new(Data);

	std::cout << d << std::endl;
	d = Serializer::deserialize(Serializer::serialize(d));
	std::cout << d << std::endl;

	delete d;
}