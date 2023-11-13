/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:34:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/13 15:48:14 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _N(0)
{

}

Span::Span( unsigned int N ) : _N(N)
{

}

Span::Span( Span const & toCopy )
{
	*this = toCopy;
}


Span::~Span( void )
{

}


Span&	Span::operator=( Span const & toAssign )
{
	this->_v.erase(this->_v.begin(), this->_v.end());

	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = toAssign._v.end();
	for (it = toAssign._v.begin(); it != ite; ++it)
		this->_v.push_back(*it);

	this->_N = toAssign._N;

	return (*this);
}

void	Span::addNumber( int nb )
{
	if (this->_v.size() >= this->_N)
		throw std::exception();
	this->_v.push_back(nb);
}

int	Span::shortestSpan()
{
	if (this->_v.size() < 2)
		throw std::exception();

	std::vector<int>::const_iterator 	it1 = this->_v.begin();
	std::vector<int>::const_iterator 	it2 = it1 + 1;
	std::vector<int>::const_iterator 	ite = this->_v.end();
	int									min = std::abs(*it1 - *it2);

	for (it1 = this->_v.begin(); it1 != -1 + ite; ++it1)
	{
		for (it2 = 1 + it1; it2 != ite; ++it2)
		{
			if (std::abs(*it1 - *it2) < min)
				min = std::abs(*it1 - *it2);
		}
	}
	return (min);
}

int	Span::longestSpan()
{
	if (this->_v.size() < 2)
		throw std::exception();

	std::vector<int>::const_iterator 	it;
	std::vector<int>::const_iterator 	ite = this->_v.end();
	int									max = *this->_v.begin();
	int									min = *this->_v.begin();

	for (it = this->_v.begin(); it != ite; ++it)
	{
		if (*it < min)
			min = *it;
		else if (*it > max)
			max = *it;
	}

	return (max - min);
}
