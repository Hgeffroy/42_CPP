/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:56:50 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/14 15:40:56 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{

public:

	MutantStack();
	~MutantStack();
	MutantStack(MutantStack<T> const& copyFrom);

	MutantStack<T>& operator=(MutantStack<T> const& rightValue);

	typedef typename	std::stack<T>::container_type::iterator					iterator;
	typedef typename	std::stack<T>::container_type::const_iterator			const_iterator;

	const_iterator	cbegin();
	iterator		begin();
	const_iterator	cend();
	iterator		end();

};

#include "MutantStack.tpp"

#endif