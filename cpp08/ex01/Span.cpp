/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:34:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/23 11:03:12 by hgeffroy         ###   ########.fr       */
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
	this->_v = toAssign._v;
	this->_N = toAssign._N;

	return (*this);
}

void	Span::addNumber( int nb )
{
	if (this->_v.size() >= this->_N)
		throw std::exception();
	this->_v.push_back(nb);
}

void	Span::addRangeNumber( std::vector<int>::iterator start, std::vector<int>::iterator end )
{
	for (; start != end; ++start)
		this->addNumber(*start);
}

int	Span::shortestSpan()
{
	if (this->_v.size() < 2)
		throw std::exception();

	std::vector<int>::const_iterator 	it1 = this->_v.begin();
	std::vector<int>::const_iterator 	it2 = it1 + 1;
	int									min = std::abs(*it1 - *it2);

	for (it1 = this->_v.begin(); it1 != this->_v.end() - 1; ++it1)
	{
		for (it2 = 1 + it1; it2 != this->_v.end(); ++it2)
			min = std::min(std::abs(*it1 - *it2), min);
	}
	return (min);
}

int	Span::longestSpan()
{
	if (this->_v.size() < 2)
		throw std::exception();

	return (*std::max_element(this->_v.begin(), this->_v.end()) - *std::min_element(this->_v.begin(), this->_v.end()));
}
