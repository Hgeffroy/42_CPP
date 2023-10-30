/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:24:46 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 07:11:17 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &cpyFrom)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpyFrom._ideas[i];
		
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &brain)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];

	return (*this);
}
