/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeffroy <hgeffroy@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:34:00 by hgeffroy          #+#    #+#             */
/*   Updated: 2023/11/20 15:48:52 by hgeffroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//On va faire un vector de pair.

void	fillContainerPairs(char **av, std::vector< std::pair<int, int> >& v) // Le plus grand est dans first !!
{
	int i = 1;

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
			if (*it1.first > *it2.first)
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
		v1 = FJSort(v1);
		v2 = FJSort(v2);
	}
	return (FJMergeSort(v1, v2));
}

void	splitPairs(std::vector< std::pair<int, int> >& v, std::vector<int>& high, std::vector<int>& low)
{
	std::vector< std::pair<int, int> >::iterator	it;

	for (it = v.begin(); it != v.end(); ++it)
	{
		high.push_back(*it.first);
		low.push_back(*it->second);
	}

	std::advance(it, 2);
}

//Il va falloir compter le nombre de truc que j'ajoute.

std::vector<int>	FJInsertSort(std::vector<int>& high, std::vector<int> low)
{
	int	nbInserted;


	return (high);
}