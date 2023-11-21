/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:34:00 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/21 09:49:04 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//On va faire un vector de pair.

std::vector< std::pair<int, int> >	fillContainerPairs(char **av) // Le plus grand est dans first !!
{
	int i = 1;
	std::vector< std::pair<int, int> > v;

	while (av[i])
	{
		checkArg(av[i]);
		if (av[++i])
		{
			checkArg(av[i]);
			if (av[i] > av[i - 1])
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

std::vector< std::pair<int, int> >	FJMerge(std::vector< std::pair<int, int> >& v1, std::vector< std::pair<int, int> >& v2)
{
	std::vector< std::pair<int, int> >				res;
	std::vector< std::pair<int, int> >::iterator	it1 = v1.begin();
	std::vector< std::pair<int, int> >::iterator	it2 = v2.begin();

	while (v1.size() > 0 || v2.size() > 0)
	{
		if (v1.size() == 0)
		{
			res.push_back(*it2);
			it2 = v2.erase(it2);
		}
		else if (v2.size() == 0)
		{
			res.push_back(*it1);
			it1 = v1.erase(it1);
		}
		else
		{
			if (it1->first > it2->first)
			{
				res.push_back(*it2);
				it2 = v2.erase(it2);
			}
			else
			{
				res.push_back(*it1);
				it1 = v1.erase(it1);
			}
		}
	}
	return (res);
}

std::vector< std::pair<int, int> >	FJMergeSort(std::vector< std::pair<int, int> >& v)
{
	std::vector< std::pair<int, int> >	v1;
	std::vector< std::pair<int, int> >	v2;

	split(v, v1, v2);
	if (!(v1.size() < 2 && v2.size() < 2))
	{
		v1 = FJMergeSort(v1);
		v2 = FJMergeSort(v2);
	}
	return (FJMerge(v1, v2));
}

void	splitPairs(std::vector< std::pair<int, int> >& v, std::vector<int>& high, std::vector<int>& low)
{
	std::vector< std::pair<int, int> >::iterator	it;

	for (it = v.begin(); it != v.end(); ++it)
	{
		high.push_back(it->first);
		low.push_back(it->second);
	}
}

//Il va falloir compter le nombre de truc que j'ajoute.

std::vector<int>	FJInsertSort(std::vector<int>& high, std::vector<int> low)
{
	int							nbInserted = 0;
	std::vector<int>::iterator	itl = low.begin();

	while (low.size() > 0)
	{
		int							upperBound = std::max<int>(2 * nbInserted, high.size() - 1); // Attention a ca
		int 						lowerBound = 0;
		int 						middle;
		std::vector<int>::iterator	ith = high.begin();

		while (high[lowerBound + 1] != high[upperBound])
		{
			middle = (upperBound + lowerBound) / 2;
			if (*itl < high[middle])
				upperBound = middle;
			else
				lowerBound = middle;
		}
		std::advance(ith, upperBound);
		ith = high.insert(ith, *itl);
		nbInserted++;
		itl = low.erase(itl);
	}
	return (high);
}

std::vector<int>	FJSort(char **av)
{
	std::vector< std::pair<int, int> >	vPair;
	std::vector<int>					vHigh;
	std::vector<int>					vLow;

	vPair = fillContainerPairs(av); //Try catch
	vPair = FJMergeSort(vPair);
	splitPairs(vPair, vHigh, vLow);
	return (FJInsertSort(vHigh, vLow));
}