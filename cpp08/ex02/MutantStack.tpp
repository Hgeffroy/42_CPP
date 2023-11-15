/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:34:53 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/14 15:36:00 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> // Appel a la fonction de Stack
MutantStack<T>::MutantStack() : std::stack<T>()
{

}

template <typename T> // Appel a la fonction de Stack
MutantStack<T>::~MutantStack()
{

}

template <typename T> // Appel a la fonction de Stack
MutantStack<T>::MutantStack(MutantStack<T> const& copyFrom) : std::stack<T>(copyFrom)
{

}

template <typename T> // Essayer de faire appel a la fonction de Stack plutot !
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const& rightValue)
{
	*reinterpret_cast< std::stack<T>*>(this) = std::stack<T>(rightValue);
	return (*this);
}

template <typename T>
typename	std::stack<T>::container_type::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename	std::stack<T>::container_type::const_iterator	MutantStack<T>::cbegin()
{
	return (this->c.cbegin());
}

template <typename T>
typename	std::stack<T>::container_type::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename	std::stack<T>::container_type::const_iterator	MutantStack<T>::cend()
{
	return (this->c.cend());
}

