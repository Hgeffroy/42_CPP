/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:34:54 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/16 08:53:01 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cmath>

// Utiliser des algos ! Adjacent_difference ?

class Span
{

private:

	unsigned int		_N;
	std::vector<int>	_v;

	Span( void );

public:

	Span( unsigned int N );
	Span( Span const & toCopy );
	~Span( void );

	Span&	operator=( Span const & toAssign );

	void	addNumber( int nb );
	int		shortestSpan();
	int		longestSpan();

};

#endif
