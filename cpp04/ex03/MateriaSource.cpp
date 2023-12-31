/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:14:40 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/10/30 10:31:22 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_sources[i] = NULL;
		
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->_sources[i];
	
	std::cout << "MateriaSource default destructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &cpyFrom)
{
	for (int i = 0; i < 4; i++)
		this->_sources[i] = cpyFrom._sources[i]->clone();

	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &materiaSource)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_sources[i];
		this->_sources[i] = materiaSource._sources[i]->clone();
	}
	
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;
	
	while (i < 4 && this->_sources[i])
		i++;

	if (i == 4)
	{
		std::cout << "No place left in the inventory" << std::endl;
		return ;
	}
	
	this->_sources[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;

	while (i < 4 && this->_sources[i])
	{
		if (this->_sources[i]->getType() == type)
			break;
		i++;
	}

	if (i == 4)
		return NULL;
		
	return (this->_sources[i]->clone());
}

