/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:55:57 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/23 14:12:25 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*************************************************  Utils  ************************************************************/

template <typename T>
void	isSorted(T& v)
{
	int	i = 1;
	while (i < static_cast<int>(v.size()))
	{
		if (v[i] < v[i - 1])
		{
			std::cout << "C'est pas trie ici: " << i << std::endl;
			throw std::exception();
		}
		i++;
	}
}

template <typename T>
void	printContainer(T& v, std::string name)
{
	typename T::iterator	it;
	std::cout << name << ": ";
	for (it = v.begin(); it != v.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename T>
void	printContainerPairs(T& v)
{
	typename T::iterator	it;
	int 					i = 0;

	for (it = v.begin(); it != v.end(); ++it)
	{
		std::cout << "v[" << i << "]: ";
		std::cout << "first: " << it->first << "; ";
		std::cout << "second: " << it->second << "; " << std::endl;
		i++;
	}
	std::cout << std::endl;
}

template <typename T>
void	split(T& v, T& v1, T& v2)
{
	typename T::iterator	it;
	int 					i = 0;
	int 					s = v.size();

	for(it = v.begin(); it != v.end(); ++it)
	{
		if (i < s / 2)
			v1.push_back(*it);
		else
			v2.push_back(*it);
		i++;
	}
}

template <typename T>
T	fillContainerPairs(char **av)
{
	int i = 1;
	T 	v;

	while (av[i])
	{
		checkArg(av[i]);
		if (av[++i])
		{
			checkArg(av[i]);
			if (std::atoi(av[i]) > std::atoi(av[i - 1]))
				v.push_back(std::make_pair(std::atoi(av[i]), std::atoi(av[i - 1])));
			else
				v.push_back(std::make_pair(std::atoi(av[i - 1]), std::atoi(av[i])));
		}
		else
		{
			v.push_back(std::make_pair(std::atoi(av[i - 1]), -1));
			break ;
		}
		i++;
	}
	return (v);
}

/**************************************************  Sort  ************************************************************/

template <typename T>
T	FJMergeSort(T& v)
{
	T	dst;
	T	v1;
	T	v2;

	split(v, v1, v2);
	if (!(v1.size() < 2 && v2.size() < 2))
	{
		v1 = FJMergeSort(v1);
		v2 = FJMergeSort(v2);
	}
	std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(dst));
	return (dst);
}

template <typename T, typename U>
void	splitPairs(T& v, U& high, U& low)
{
	typename T::iterator	it;

	for (it = v.begin(); it != v.end(); ++it)
	{
		high.push_back(it->first);
		low.push_back(it->second);
	}
}

template <typename T>
T	FJInsertSort(T& high, T low, unsigned int sz)
{
	int							nbInserted = 0;
	std::vector<int>			insertSeq = initJSSequence(sz);
	std::vector<int>::iterator	itSeq = insertSeq.begin();

	while (itSeq != insertSeq.end())
	{
		int							upperBound = nbInserted + *itSeq - 1;
		int 						lowerBound = 0;
		int 						middle;
		typename T::iterator		ith = high.begin();

		while (lowerBound + 1 - upperBound < 0)
		{
			middle = (upperBound + lowerBound) / 2;
			if (low[*itSeq - 1] < high[middle])
				upperBound = middle;
			else
				lowerBound = middle;
		}
		if (low[*itSeq - 1] > high[0])
			std::advance(ith, upperBound);
		nbInserted++;
		ith = high.insert(ith, low[*itSeq - 1]);
		++itSeq;
	}
	if (high[0] < 0)
		high.erase(high.begin());
	return (high);
}

template <typename T, typename U>
T	FJSort(char **av)
{
	U	vPair;
	T	vHigh;
	T	vLow;

	if (!av[2])
	{
		T	res;

		checkArg(av[1]);
		res.push_back(std::atoi(av[1]));
		return (res);
	}
	vPair = fillContainerPairs< U >(av); //Try catch
	vPair = FJMergeSort(vPair);
	splitPairs(vPair, vHigh, vLow);
	return (FJInsertSort(vHigh, vLow, vPair.size()));
}